
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct disttable {long* table; int size; } ;
struct crndstate {int dummy; } ;
typedef int psched_tdiff_t ;


 int VAR_0 ;
 int FUNC_0 (struct crndstate*) ;

__attribute__((used)) static psched_tdiff_t FUNC_1(psched_tdiff_t VAR_1, psched_tdiff_t VAR_2,
    struct crndstate *VAR_3,
    const struct disttable *VAR_4)
{
 psched_tdiff_t VAR_5;
 long VAR_6;
 u32 VAR_7;

 if (VAR_2 == 0)
  return VAR_1;

 VAR_7 = FUNC_0(VAR_3);


 if (VAR_4 == ((void*)0))
  return (VAR_7 % (2*VAR_2)) - VAR_2 + VAR_1;

 VAR_6 = VAR_4->table[VAR_7 % VAR_4->size];
 VAR_5 = (VAR_2 % VAR_0) * VAR_6;
 if (VAR_5 >= 0)
  VAR_5 += VAR_0/2;
 else
  VAR_5 -= VAR_0/2;

 return VAR_5 / VAR_0 + (VAR_2 / VAR_0) * VAR_6 + VAR_1;
}

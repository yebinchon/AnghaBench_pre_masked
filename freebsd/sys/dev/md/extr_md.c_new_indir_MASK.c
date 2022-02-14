
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct indir {int total; int shift; int * array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct indir*,int ) ;
 void* FUNC_1 (int,int ,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static struct indir *
FUNC_2(u_int VAR_7)
{
 struct indir *VAR_8;

 VAR_8 = FUNC_1(sizeof *VAR_8, VAR_0, (VAR_6 ? VAR_3 : VAR_2)
     | VAR_4);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_8->array = FUNC_1(sizeof(uintptr_t) * VAR_5,
     VAR_1, (VAR_6 ? VAR_3 : VAR_2) | VAR_4);
 if (VAR_8->array == ((void*)0)) {
  FUNC_0(VAR_8, VAR_0);
  return (((void*)0));
 }
 VAR_8->total = VAR_5;
 VAR_8->shift = VAR_7;
 return (VAR_8);
}

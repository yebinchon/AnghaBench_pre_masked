
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct typetable {size_t tablesize; int nextarg; int * table; scalar_t__ tablemax; int * stattable; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct typetable *VAR_2)
{
 u_int VAR_3;

 VAR_2->table = VAR_2->stattable;
 VAR_2->tablesize = VAR_0;
 VAR_2->tablemax = 0;
 VAR_2->nextarg = 1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->table[VAR_3] = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typetable {int nextarg; void** table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_0 (struct typetable*) ;

__attribute__((used)) static inline int
FUNC_1(struct typetable *VAR_10, int VAR_11)
{

 if (FUNC_0(VAR_10))
  return (-1);
 if (VAR_11 & VAR_0)
  VAR_10->table[VAR_10->nextarg++] = VAR_6;
 else if (VAR_11 & VAR_4)
  VAR_10->table[VAR_10->nextarg++] = VAR_5;
 else if (VAR_11 & VAR_3)
  VAR_10->table[VAR_10->nextarg++] = VAR_5;
 else if (VAR_11 & VAR_1)
  VAR_10->table[VAR_10->nextarg++] = VAR_8;
 else if (VAR_11 & VAR_2)
  VAR_10->table[VAR_10->nextarg++] = VAR_9;
 else
  VAR_10->table[VAR_10->nextarg++] = VAR_7;
 return (0);
}

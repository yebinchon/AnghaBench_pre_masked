
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typetable {int nextarg; int * table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct typetable*) ;

__attribute__((used)) static inline int
FUNC_1(struct typetable *VAR_11, int VAR_12)
{

 if (FUNC_0(VAR_11))
  return (-1);
 if (VAR_12 & VAR_0)
  VAR_11->table[VAR_11->nextarg++] = VAR_6;
 else if (VAR_12 & VAR_4)
  VAR_11->table[VAR_11->nextarg++] = VAR_10;
 else if (VAR_12 & VAR_3)
  VAR_11->table[VAR_11->nextarg++] = VAR_9;
 else if (VAR_12 & VAR_1)
  VAR_11->table[VAR_11->nextarg++] = VAR_7;
 else if (VAR_12 & VAR_2)
  VAR_11->table[VAR_11->nextarg++] = VAR_8;
 else
  VAR_11->table[VAR_11->nextarg++] = VAR_5;
 return (0);
}

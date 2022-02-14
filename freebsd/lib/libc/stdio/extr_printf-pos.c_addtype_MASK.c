
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typetable {int* table; int nextarg; } ;
typedef enum typeid { ____Placeholder_typeid } typeid ;


 scalar_t__ FUNC_0 (struct typetable*) ;

__attribute__((used)) static inline int
FUNC_1(struct typetable *VAR_0, enum typeid VAR_1)
{

 if (FUNC_0(VAR_0))
  return (-1);
 VAR_0->table[VAR_0->nextarg++] = VAR_1;
 return (0);
}

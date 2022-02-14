
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typetable {scalar_t__ nextarg; scalar_t__ tablesize; scalar_t__ tablemax; } ;


 scalar_t__ FUNC_0 (struct typetable*) ;

__attribute__((used)) static inline int
FUNC_1(struct typetable *VAR_0)
{

 if (VAR_0->nextarg >= VAR_0->tablesize) {
  if (FUNC_0(VAR_0))
   return (-1);
 }
 if (VAR_0->nextarg > VAR_0->tablemax)
  VAR_0->tablemax = VAR_0->nextarg;
 return (0);
}

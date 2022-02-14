
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_occ {struct et_occ* parent; struct et_occ* next; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1 (struct et_occ *VAR_0, struct et_occ *VAR_1)
{




  VAR_0->next = VAR_1;
  if (VAR_1)
    VAR_1->parent = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_iomap_mr {scalar_t__ index; int * mr; int entry; int refcnt; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rs_iomap_mr*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rs_iomap_mr *VAR_0)
{
 if (FUNC_0(&VAR_0->refcnt, 1) != 1)
  return;

 FUNC_1(&VAR_0->entry);
 FUNC_3(VAR_0->mr);
 if (VAR_0->index >= 0)
  VAR_0->mr = ((void*)0);
 else
  FUNC_2(VAR_0);
}

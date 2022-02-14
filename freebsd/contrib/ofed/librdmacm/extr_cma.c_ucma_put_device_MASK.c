
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma_device {scalar_t__ xrcd; int pd; int refcnt; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cma_device *VAR_1)
{
 FUNC_2(&VAR_0);
 if (!--VAR_1->refcnt) {
  FUNC_1(VAR_1->pd);
  if (VAR_1->xrcd)
   FUNC_0(VAR_1->xrcd);
 }
 FUNC_3(&VAR_0);
}

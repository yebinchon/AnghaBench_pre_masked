
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_8__ {int xbusy; int ref; int indicator; int * wq; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;

ocs_hw_io_t *
FUNC_3(ocs_hw_t *VAR_2, ocs_hw_io_t *VAR_3)
{
 if (FUNC_2(&VAR_3->ref) > 0) {
  FUNC_0(VAR_2->os, "Bad parameter: refcount > 0\n");
  return ((void*)0);
 }

 if (VAR_3->wq != ((void*)0)) {
  FUNC_0(VAR_2->os, "XRI %x already in use\n", VAR_3->indicator);
  return ((void*)0);
 }

 FUNC_1(&VAR_3->ref, VAR_1, VAR_3);
 VAR_3->xbusy = VAR_0;

 return VAR_3;
}

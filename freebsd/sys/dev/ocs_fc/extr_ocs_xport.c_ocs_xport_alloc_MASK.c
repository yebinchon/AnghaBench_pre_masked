
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ocs; } ;
typedef TYPE_1__ ocs_xport_t ;
typedef int ocs_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int,int ) ;

ocs_xport_t *
FUNC_2(ocs_t *VAR_1)
{
 ocs_xport_t *VAR_2;

 FUNC_0(VAR_1, ((void*)0));
 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (VAR_2 != ((void*)0)) {
  VAR_2->ocs = VAR_1;
 }
 return VAR_2;
}

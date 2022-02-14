
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * els; scalar_t__ ext_status; scalar_t__ status; } ;
typedef TYPE_1__ ocs_node_cb_t ;
typedef int ocs_io_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ocs_io_t *VAR_1)
{




 ocs_node_cb_t VAR_2;
 VAR_2.status = VAR_2.ext_status = 0;
 VAR_2.els = VAR_1;
 FUNC_0(VAR_1, "Request aborted\n");
 FUNC_1(VAR_1, VAR_0, &VAR_2);
}

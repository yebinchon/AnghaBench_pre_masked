
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ els_req_cnt; scalar_t__ els_cmpl_cnt; int attached; int els_io_active_list; } ;
typedef TYPE_1__ ocs_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(ocs_node_t *VAR_2)
{
 FUNC_1(VAR_2, -1);


 if ((VAR_2->els_req_cnt == 0) && (VAR_2->els_cmpl_cnt == 0) &&
     FUNC_2(VAR_2, &VAR_2->els_io_active_list)) {
  if (!VAR_2->attached) {

   FUNC_0(VAR_2, "HW node not attached\n");
   FUNC_3(VAR_2, VAR_0, ((void*)0));
  } else {

   FUNC_0(VAR_2, "HW node still attached\n");
   FUNC_3(VAR_2, VAR_1, ((void*)0));
  }
  return 1;
 }
 return 0;
}

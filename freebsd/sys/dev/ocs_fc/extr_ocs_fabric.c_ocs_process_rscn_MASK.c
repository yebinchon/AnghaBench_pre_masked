
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_t ;
typedef int ocs_sport_t ;
struct TYPE_5__ {int * sport; int * ocs; } ;
typedef TYPE_1__ ocs_node_t ;
typedef int ocs_node_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(ocs_node_t *VAR_2, ocs_node_cb_t *VAR_3)
{
 ocs_t *VAR_4 = VAR_2->ocs;
 ocs_sport_t *VAR_5 = VAR_2->sport;
 ocs_node_t *VAR_6;


 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_6, VAR_1, VAR_3);
 } else {
  FUNC_0(VAR_4, "can't find name server node\n");
 }
}

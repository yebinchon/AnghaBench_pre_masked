
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fc_id; int * loop_map; scalar_t__ speed; int medium; int topology; int status; } ;
struct TYPE_6__ {TYPE_1__ link; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_1(ocs_hw_t *VAR_5)
{
 FUNC_0(VAR_5);

 VAR_5->link.status = VAR_2;
 VAR_5->link.topology = VAR_3;
 VAR_5->link.medium = VAR_1;
 VAR_5->link.speed = 0;
 VAR_5->link.loop_map = ((void*)0);
 VAR_5->link.fc_id = VAR_4;

 return VAR_0;
}

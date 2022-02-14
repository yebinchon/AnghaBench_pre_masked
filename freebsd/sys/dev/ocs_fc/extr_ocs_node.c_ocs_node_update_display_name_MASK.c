
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int portid_display ;
struct TYPE_7__ {int display_name; } ;
typedef TYPE_2__ ocs_sport_t ;
struct TYPE_6__ {int fc_id; } ;
struct TYPE_8__ {int display_name; TYPE_2__* sport; TYPE_1__ rnode; } ;
typedef TYPE_3__ ocs_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,char*,int ,char*) ;

void
FUNC_3(ocs_node_t *VAR_0)
{
 uint32_t VAR_1 = VAR_0->rnode.fc_id;
 ocs_sport_t *VAR_2 = VAR_0->sport;
 char VAR_3[16];

 FUNC_0(VAR_2);

 FUNC_1(VAR_1, VAR_3, sizeof(VAR_3));

 FUNC_2(VAR_0->display_name, sizeof(VAR_0->display_name), "%s.%s", VAR_2->display_name, VAR_3);
}

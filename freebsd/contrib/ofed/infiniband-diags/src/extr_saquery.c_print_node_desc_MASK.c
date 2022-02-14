
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ node_type; int node_guid; } ;
struct TYPE_7__ {scalar_t__ description; } ;
struct TYPE_5__ {int lid; TYPE_2__ node_info; TYPE_3__ node_desc; } ;
typedef TYPE_1__ ib_node_record_t ;
typedef TYPE_2__ ib_node_info_t ;
typedef TYPE_3__ ib_node_desc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,char*) ;
 char* FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_4(ib_node_record_t * VAR_2)
{
 ib_node_info_t *VAR_3 = &(VAR_2->node_info);
 ib_node_desc_t *VAR_4 = &(VAR_2->node_desc);
 char *VAR_5;

 if (VAR_3->node_type == VAR_0) {
  VAR_5 = FUNC_3(VAR_1,
     VAR_2->node_info.node_guid,
     (char *)VAR_4->description);
  FUNC_2("%6d  \"%s\"\n", FUNC_0(VAR_2->lid), VAR_5);
  FUNC_1(VAR_5);
 }
}

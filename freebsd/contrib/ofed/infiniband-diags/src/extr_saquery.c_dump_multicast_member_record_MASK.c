
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sa_query_result {unsigned int result_cnt; int p_result_madw; } ;
struct query_params {int dummy; } ;
struct TYPE_12__ {scalar_t__ description; } ;
struct TYPE_11__ {scalar_t__ port_guid; int node_guid; } ;
struct TYPE_15__ {TYPE_3__ node_desc; TYPE_2__ node_info; } ;
typedef TYPE_6__ ib_node_record_t ;
struct TYPE_10__ {scalar_t__ interface_id; } ;
struct TYPE_14__ {int raw; TYPE_1__ unicast; } ;
struct TYPE_13__ {int raw; } ;
struct TYPE_16__ {int scope_state; int proxy_join; TYPE_5__ port_gid; int mlid; TYPE_4__ mgid; } ;
typedef TYPE_7__ ib_member_rec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (int ,int ,char*) ;
 scalar_t__ VAR_3 ;
 TYPE_6__* FUNC_5 (int ,unsigned int) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_8(ib_member_rec_t *VAR_4,
      struct sa_query_result *VAR_5,
      struct query_params *VAR_6)
{
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];
 uint16_t VAR_9 = FUNC_0(VAR_4->mlid);
 unsigned VAR_10 = 0;
 char *VAR_11 = FUNC_6("<unknown>");





 for (VAR_10 = 0; VAR_10 < VAR_5->result_cnt; VAR_10++) {
  ib_node_record_t *VAR_12 = FUNC_5(VAR_5->p_result_madw, VAR_10);
  if (VAR_12->node_info.port_guid ==
      VAR_4->port_gid.unicast.interface_id) {
   if(VAR_11 != ((void*)0))
    FUNC_1(VAR_11);
   VAR_11 = FUNC_4(VAR_2,
      VAR_12->node_info.node_guid,
      (char *)VAR_12->node_desc.description);
   break;
  }
 }

 if (VAR_3) {
  if (FUNC_7(VAR_3, ((void*)0), 0) == VAR_9)
   FUNC_3("\t\tPortGid.................%s (%s)\n",
          FUNC_2(VAR_0, VAR_4->port_gid.raw,
      VAR_7, sizeof VAR_7), VAR_11);
 } else {
  FUNC_3("MCMemberRecord member dump:\n"
         "\t\tMGID....................%s\n"
         "\t\tMlid....................0x%X\n"
         "\t\tPortGid.................%s\n"
         "\t\tScopeState..............0x%X\n"
         "\t\tProxyJoin...............0x%X\n"
         "\t\tNodeDescription.........%s\n",
         FUNC_2(VAR_0, VAR_4->mgid.raw, VAR_7,
     sizeof VAR_7),
         FUNC_0(VAR_4->mlid),
         FUNC_2(VAR_0, VAR_4->port_gid.raw,
     VAR_8, sizeof VAR_8),
         VAR_4->scope_state, VAR_4->proxy_join, VAR_11);
 }
 FUNC_1(VAR_11);
}

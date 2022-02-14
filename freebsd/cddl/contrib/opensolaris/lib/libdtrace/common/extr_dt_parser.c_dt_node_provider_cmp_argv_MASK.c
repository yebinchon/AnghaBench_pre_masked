
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint_t ;
typedef int n2 ;
typedef int n1 ;
struct TYPE_14__ {int dtvd_name; } ;
struct TYPE_16__ {TYPE_2__ pv_desc; } ;
typedef TYPE_4__ dt_provider_t ;
struct TYPE_17__ {TYPE_3__* pr_ident; } ;
typedef TYPE_5__ dt_probe_t ;
struct TYPE_18__ {int dn_type; int dn_ctfp; struct TYPE_18__* dn_list; TYPE_1__* dn_ident; } ;
typedef TYPE_6__ dt_node_t ;
struct TYPE_15__ {int di_name; } ;
struct TYPE_13__ {TYPE_5__* di_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,char*,int ,int ,char const*,int,char*,int,...) ;
 int FUNC_2 (TYPE_6__*,char*,int) ;

__attribute__((used)) static void
FUNC_3(dt_provider_t *VAR_2, dt_node_t *VAR_3, const char *VAR_4,
    uint_t VAR_5, dt_node_t *VAR_6, uint_t VAR_7, dt_node_t *VAR_8)
{
 dt_probe_t *VAR_9 = VAR_3->dn_ident->di_data;
 uint_t VAR_10;

 char VAR_11[VAR_0];
 char VAR_12[VAR_0];

 if (VAR_5 != VAR_7) {
  FUNC_1(VAR_3, VAR_1,
      "probe %s:%s %s prototype mismatch:\n"
      "\t current: %u arg%s\n\tprevious: %u arg%s\n",
      VAR_2->pv_desc.dtvd_name, VAR_9->pr_ident->di_name, VAR_4,
      VAR_7, VAR_7 != 1 ? "s" : "",
      VAR_5, VAR_5 != 1 ? "s" : "");
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++,
     VAR_6 = VAR_6->dn_list, VAR_8 = VAR_8->dn_list) {
  if (FUNC_0(VAR_6->dn_ctfp, VAR_6->dn_type,
      VAR_8->dn_ctfp, VAR_8->dn_type) == 0)
   continue;

  FUNC_1(VAR_3, VAR_1,
      "probe %s:%s %s prototype argument #%u mismatch:\n"
      "\t current: %s\n\tprevious: %s\n",
      VAR_2->pv_desc.dtvd_name, VAR_9->pr_ident->di_name, VAR_4, VAR_10 + 1,
      FUNC_2(VAR_8, VAR_11, sizeof (VAR_11)),
      FUNC_2(VAR_6, VAR_12, sizeof (VAR_12)));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zoneid_t ;
typedef int uint32_t ;
typedef int uid_t ;
struct TYPE_7__ {int dtpv_name; scalar_t__ dtpv_defunct; } ;
typedef TYPE_1__ dtrace_provider_t ;
struct TYPE_8__ {int (* dtpk_pmatch ) (int ,int ,int ) ;int (* dtpk_mmatch ) (int ,int ,int ) ;int (* dtpk_fmatch ) (int ,int ,int ) ;int (* dtpk_nmatch ) (int ,int ,int ) ;int dtpk_name; int dtpk_func; int dtpk_mod; int dtpk_prov; } ;
typedef TYPE_2__ dtrace_probekey_t ;
struct TYPE_9__ {int dtpr_name; int dtpr_func; int dtpr_mod; TYPE_1__* dtpr_provider; } ;
typedef TYPE_3__ dtrace_probe_t ;


 scalar_t__ FUNC_0 (TYPE_3__ const*,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(const dtrace_probe_t *VAR_0, const dtrace_probekey_t *VAR_1,
    uint32_t VAR_2, uid_t VAR_3, zoneid_t VAR_4)
{
 dtrace_provider_t *VAR_5 = VAR_0->dtpr_provider;
 int VAR_6;

 if (VAR_5->dtpv_defunct)
  return (0);

 if ((VAR_6 = VAR_1->dtpk_pmatch(VAR_5->dtpv_name, VAR_1->dtpk_prov, 0)) <= 0)
  return (VAR_6);

 if ((VAR_6 = VAR_1->dtpk_mmatch(VAR_0->dtpr_mod, VAR_1->dtpk_mod, 0)) <= 0)
  return (VAR_6);

 if ((VAR_6 = VAR_1->dtpk_fmatch(VAR_0->dtpr_func, VAR_1->dtpk_func, 0)) <= 0)
  return (VAR_6);

 if ((VAR_6 = VAR_1->dtpk_nmatch(VAR_0->dtpr_name, VAR_1->dtpk_name, 0)) <= 0)
  return (VAR_6);

 if (FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4) == 0)
  return (0);

 return (VAR_6);
}

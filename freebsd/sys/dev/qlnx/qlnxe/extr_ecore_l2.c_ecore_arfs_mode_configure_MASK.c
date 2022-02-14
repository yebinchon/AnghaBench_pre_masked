
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int rel_pf_id; TYPE_1__* p_dev; } ;
struct ecore_arfs_config_params {scalar_t__ mode; scalar_t__ ipv6; scalar_t__ ipv4; scalar_t__ udp; scalar_t__ tcp; } ;
struct TYPE_2__ {int mf_bits; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

void FUNC_5(struct ecore_hwfn *VAR_3,
          struct ecore_ptt *VAR_4,
          struct ecore_arfs_config_params *VAR_5)
{
 if (FUNC_1(VAR_1, &VAR_3->p_dev->mf_bits))
  return;

 if (VAR_5->mode != VAR_0) {
  FUNC_3(VAR_3, VAR_4, VAR_3->rel_pf_id,
     VAR_5->tcp,
     VAR_5->udp,
     VAR_5->ipv4,
     VAR_5->ipv6,
     FUNC_2(VAR_5->mode));
  FUNC_0(VAR_3, VAR_2,
      "Configured Filtering: tcp = %s, udp = %s, ipv4 = %s, ipv6 =%s mode=%08x\n",
      VAR_5->tcp ? "Enable" : "Disable",
      VAR_5->udp ? "Enable" : "Disable",
      VAR_5->ipv4 ? "Enable" : "Disable",
      VAR_5->ipv6 ? "Enable" : "Disable",
      (u32)VAR_5->mode);
 } else {
  FUNC_0(VAR_3, VAR_2, "Disabled Filtering\n");
  FUNC_4(VAR_3, VAR_4, VAR_3->rel_pf_id);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_softc {TYPE_1__* ver_info; int dev; } ;
struct TYPE_2__ {int hwrm_if_ver; int hwrm_if_update; int hwrm_min_update; int hwrm_if_minor; int hwrm_min_minor; int hwrm_if_major; int hwrm_min_major; } ;


 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (char*,char*,int ,int ,int ) ;

bool
FUNC_2(struct bnxt_softc *VAR_0)
{
 char VAR_1[16];

 FUNC_1(VAR_1, "%hhu.%hhu.%hhu", VAR_0->ver_info->hwrm_min_major,
     VAR_0->ver_info->hwrm_min_minor, VAR_0->ver_info->hwrm_min_update);
 if (VAR_0->ver_info->hwrm_min_major > VAR_0->ver_info->hwrm_if_major) {
  FUNC_0(VAR_0->dev,
      "WARNING: HWRM version %s is too old (older than %s)\n",
      VAR_0->ver_info->hwrm_if_ver, VAR_1);
  return 0;
 }
 else if(VAR_0->ver_info->hwrm_min_major ==
     VAR_0->ver_info->hwrm_if_major) {
  if (VAR_0->ver_info->hwrm_min_minor >
      VAR_0->ver_info->hwrm_if_minor) {
   FUNC_0(VAR_0->dev,
       "WARNING: HWRM version %s is too old (older than %s)\n",
       VAR_0->ver_info->hwrm_if_ver, VAR_1);
   return 0;
  }
  else if (VAR_0->ver_info->hwrm_min_minor ==
      VAR_0->ver_info->hwrm_if_minor) {
   if (VAR_0->ver_info->hwrm_min_update >
       VAR_0->ver_info->hwrm_if_update) {
    FUNC_0(VAR_0->dev,
        "WARNING: HWRM version %s is too old (older than %s)\n",
        VAR_0->ver_info->hwrm_if_ver, VAR_1);
    return 0;
   }
  }
 }
 return 1;
}

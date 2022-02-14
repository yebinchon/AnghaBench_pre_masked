
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_softc {int vpd_size; int vpd_data; int enp; int dev; } ;
struct TYPE_3__ {int evv_tag; int evv_keyword; } ;
typedef TYPE_1__ efx_vpd_value_t ;
typedef int efx_vpd_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const,char const) ;
 int VAR_2 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char const*,int,struct sfxge_softc*,int,int ,char*,char*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct sfxge_softc *VAR_4, struct sysctl_oid_list *VAR_5,
    efx_vpd_tag_t VAR_6, const char *VAR_7)
{
 struct sysctl_ctx_list *VAR_8 = FUNC_2(VAR_4->dev);
 efx_vpd_value_t VAR_9;


 VAR_9.evv_tag = VAR_6;
 VAR_9.evv_keyword = FUNC_0(VAR_7[0], VAR_7[1]);
 if (FUNC_3(VAR_4->enp, VAR_4->vpd_data, VAR_4->vpd_size, &VAR_9) != 0)
  return;

 FUNC_1(
  VAR_8, VAR_5, VAR_2, VAR_7, VAR_1|VAR_0,
  VAR_4, VAR_6 << 16 | FUNC_0(VAR_7[0], VAR_7[1]),
  VAR_3, "A", "");
}

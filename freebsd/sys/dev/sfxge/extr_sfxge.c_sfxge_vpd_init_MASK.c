
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_softc {int vpd_data; int dev; int vpd_size; int enp; } ;
struct TYPE_3__ {size_t evv_length; scalar_t__* evv_value; int evv_tag; } ;
typedef TYPE_1__ efx_vpd_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct sfxge_softc*,struct sysctl_oid_list*,int ,char*) ;

__attribute__((used)) static int
FUNC_12(struct sfxge_softc *VAR_7)
{
 struct sysctl_ctx_list *VAR_8 = FUNC_2(VAR_7->dev);
 struct sysctl_oid *VAR_9;
 struct sysctl_oid_list *VAR_10;
 char VAR_11[3];
 efx_vpd_value_t VAR_12;
 int VAR_13;

 if ((VAR_13 = FUNC_8(VAR_7->enp, &VAR_7->vpd_size)) != 0) {




  if (VAR_13 == VAR_1)
   goto done;
  goto fail;
 }
 VAR_7->vpd_data = FUNC_10(VAR_7->vpd_size, VAR_4, VAR_5);
 if ((VAR_13 = FUNC_7(VAR_7->enp, VAR_7->vpd_data, VAR_7->vpd_size)) != 0)
  goto fail2;


 VAR_12.evv_tag = VAR_2;
 if (FUNC_6(VAR_7->enp, VAR_7->vpd_data, VAR_7->vpd_size, &VAR_12) == 0) {
  VAR_12.evv_value[VAR_12.evv_length] = 0;
  FUNC_5(VAR_7->dev, VAR_12.evv_value);
  FUNC_4(VAR_7->dev, "%s\n", VAR_12.evv_value);
 }

 VAR_9 = FUNC_0(
  VAR_8, FUNC_1(FUNC_3(VAR_7->dev)),
  VAR_6, "vpd", VAR_0, ((void*)0), "Vital Product Data");
 VAR_10 = FUNC_1(VAR_9);


 FUNC_11(VAR_7, VAR_10, VAR_3, "PN");
 FUNC_11(VAR_7, VAR_10, VAR_3, "EC");
 FUNC_11(VAR_7, VAR_10, VAR_3, "SN");
 VAR_11[0] = 'V';
 VAR_11[2] = 0;
 for (VAR_11[1] = '0'; VAR_11[1] <= '9'; VAR_11[1]++)
  FUNC_11(VAR_7, VAR_10, VAR_3, VAR_11);
 for (VAR_11[1] = 'A'; VAR_11[1] <= 'Z'; VAR_11[1]++)
  FUNC_11(VAR_7, VAR_10, VAR_3, VAR_11);

done:
 return (0);

fail2:
 FUNC_9(VAR_7->vpd_data, VAR_4);
fail:
 return (VAR_13);
}

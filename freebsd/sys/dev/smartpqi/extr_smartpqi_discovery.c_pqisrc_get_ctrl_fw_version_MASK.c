
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int fw_build_number; char* fw_version; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_11__ {int fw_build_number; int fw_version; } ;
typedef TYPE_2__ bmic_ident_ctrl_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (char*) ;

int FUNC_10(pqisrc_softstate_t *VAR_2)
{
 int VAR_3 = VAR_1;
 bmic_ident_ctrl_t *VAR_4;

 FUNC_1("IN\n");

 VAR_4 = FUNC_5(VAR_2, sizeof(*VAR_4));
 if (!VAR_4) {
  FUNC_0("failed to allocate memory for identify_ctrl\n");
  return VAR_0;
 }

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));

 VAR_3 = FUNC_7(VAR_2, VAR_4);
 if (VAR_3)
  goto out;

 VAR_2->fw_build_number = VAR_4->fw_build_number;
 FUNC_3(VAR_2->fw_version, VAR_4->fw_version,
  sizeof(VAR_4->fw_version));
 VAR_2->fw_version[sizeof(VAR_4->fw_version)] = '\0';
 FUNC_8(VAR_2->fw_version +
  FUNC_9(VAR_2->fw_version),
  sizeof(VAR_2->fw_version),
  "-%u", VAR_4->fw_build_number);
out:
 FUNC_6(VAR_2, (char *)VAR_4, sizeof(*VAR_4));
 FUNC_2("Firmware version: %s Firmware build number: %d\n", VAR_2->fw_version, VAR_2->fw_build_number);
 FUNC_1("OUT\n");
 return VAR_3;
}

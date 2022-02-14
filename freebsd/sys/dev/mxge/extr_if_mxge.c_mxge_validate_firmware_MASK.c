
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fw_ver_major; scalar_t__ fw_ver_minor; int dev; int fw_version; int fw_ver_tiny; } ;
typedef TYPE_1__ mxge_softc_t ;
struct TYPE_6__ {int version; int mcp_type; } ;
typedef TYPE_2__ mcp_gen_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(mxge_softc_t *VAR_6, const mcp_gen_header_t *VAR_7)
{


 if (FUNC_0(VAR_7->mcp_type) != VAR_2) {
  FUNC_1(VAR_6->dev, "Bad firmware type: 0x%x\n",
         FUNC_0(VAR_7->mcp_type));
  return VAR_1;
 }


 FUNC_3(VAR_6->fw_version, VAR_7->version, sizeof(VAR_6->fw_version));
 if (VAR_5)
  FUNC_1(VAR_6->dev, "firmware id: %s\n", VAR_7->version);

 FUNC_2(VAR_6->fw_version, "%d.%d.%d", &VAR_6->fw_ver_major,
        &VAR_6->fw_ver_minor, &VAR_6->fw_ver_tiny);

 if (!(VAR_6->fw_ver_major == VAR_3
       && VAR_6->fw_ver_minor == VAR_4)) {
  FUNC_1(VAR_6->dev, "Found firmware version %s\n",
         VAR_6->fw_version);
  FUNC_1(VAR_6->dev, "Driver needs %d.%d\n",
         VAR_3, VAR_4);
  return VAR_0;
 }
 return 0;

}

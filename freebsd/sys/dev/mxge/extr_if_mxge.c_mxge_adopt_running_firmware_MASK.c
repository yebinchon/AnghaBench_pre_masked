
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mcp_gen_header {int dummy; } ;
struct TYPE_4__ {size_t sram_size; int fw_ver_major; int fw_ver_minor; int fw_ver_tiny; int adopted_rx_filter_bug; int dev; int mem_res; scalar_t__ sram; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,size_t,char*,size_t const) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mcp_gen_header*,int ) ;
 size_t FUNC_3 (int volatile) ;
 struct mcp_gen_header* FUNC_4 (size_t const,int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct mcp_gen_header*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(mxge_softc_t *VAR_5)
{
 struct mcp_gen_header *VAR_6;
 const size_t VAR_7 = sizeof (struct mcp_gen_header);
 size_t VAR_8;
 int VAR_9;


 VAR_8 = FUNC_3(*(volatile uint32_t *)
        (VAR_5->sram + VAR_2));

 if ((VAR_8 & 3) || VAR_8 + sizeof(*VAR_6) > VAR_5->sram_size) {
  FUNC_1(VAR_5->dev,
         "Running firmware has bad header offset (%d)\n",
         (int)VAR_8);
  return VAR_0;
 }



 VAR_6 = FUNC_4(VAR_7, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_5->dev, "could not malloc firmware hdr\n");
  return VAR_1;
 }
 FUNC_0(FUNC_7(VAR_5->mem_res),
    FUNC_6(VAR_5->mem_res),
    VAR_8, (char *)VAR_6, VAR_7);
 VAR_9 = FUNC_5(VAR_5, VAR_6);
 FUNC_2(VAR_6, VAR_3);






 if (VAR_5->fw_ver_major == 1 && VAR_5->fw_ver_minor == 4 &&
     VAR_5->fw_ver_tiny >= 4 && VAR_5->fw_ver_tiny <= 11) {
  VAR_5->adopted_rx_filter_bug = 1;
  FUNC_1(VAR_5->dev, "Adopting fw %d.%d.%d: "
         "working around rx filter bug\n",
         VAR_5->fw_ver_major, VAR_5->fw_ver_minor,
         VAR_5->fw_ver_tiny);
 }

 return VAR_9;
}

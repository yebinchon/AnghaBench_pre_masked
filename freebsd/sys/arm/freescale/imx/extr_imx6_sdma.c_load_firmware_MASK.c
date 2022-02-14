
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_softc {void const* fw_scripts; struct sdma_firmware_header const* fw_header; int dev; } ;
struct sdma_firmware_header {scalar_t__ magic; int script_addrs_start; } ;
struct firmware {struct sdma_firmware_header* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct firmware* FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct sdma_softc *VAR_1)
{
 const struct sdma_firmware_header *VAR_2;
 const struct firmware *VAR_3;

 VAR_3 = FUNC_1("sdma_fw");
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1->dev, "Can't get firmware.\n");
  return (-1);
 }

 VAR_2 = VAR_3->data;
 if (VAR_2->magic != VAR_0) {
  FUNC_0(VAR_1->dev, "Can't use firmware.\n");
  return (-1);
 }

 VAR_1->fw_header = VAR_2;
 VAR_1->fw_scripts = (const void *)((const char *)VAR_2 +
    VAR_2->script_addrs_start);

 return (0);
}

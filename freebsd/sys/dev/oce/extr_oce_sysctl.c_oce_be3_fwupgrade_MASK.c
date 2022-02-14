
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct image_hdr {int imageid; } ;
struct flash_file_hdr {char* build; int num_imgs; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,struct firmware const*,int) ;

__attribute__((used)) static int
FUNC_2(POCE_SOFTC VAR_1, const struct firmware *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 const struct flash_file_hdr *VAR_6;
 const struct image_hdr *VAR_7;

 VAR_6 = (const struct flash_file_hdr *)VAR_2->data;
 if (VAR_6->build[0] != '3') {
  FUNC_0(VAR_1->dev, "Invalid BE3 firmware image\n");
  return VAR_0;
 }

 FUNC_0(VAR_1->dev, "Flashing Firmware %s\n", &VAR_6->build[2]);

 VAR_4 = VAR_6->num_imgs;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = (const struct image_hdr *)((const char *)VAR_2->data +
    sizeof(struct flash_file_hdr) +
    (VAR_5 * sizeof(struct image_hdr)));
  if (VAR_7->imageid == 1) {
   VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4);

   break;
  }
 }

 return VAR_3;
}

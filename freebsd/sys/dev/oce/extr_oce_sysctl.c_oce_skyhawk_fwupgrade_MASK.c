
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct image_hdr {int imageid; } ;
struct flash_file_hdr {int num_imgs; int * build; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_5__ {int asic_revision; int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,struct flash_file_hdr const*) ;
 int FUNC_2 (TYPE_1__*,struct firmware const*,int) ;

__attribute__((used)) static int
FUNC_3(POCE_SOFTC VAR_0, const struct firmware *VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0, VAR_5;
 const struct flash_file_hdr *VAR_6;
 const struct image_hdr *VAR_7;

 VAR_6 = (const struct flash_file_hdr *)VAR_1->data;

 VAR_5 = FUNC_1(VAR_0, VAR_6);


 FUNC_0(VAR_0->dev, "Flashing Firmware %s\n", &VAR_6->build[2]);

 VAR_3 = VAR_6->num_imgs;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_7 = (const struct image_hdr *)((const char *)VAR_1->data +
    sizeof(struct flash_file_hdr) +
    (VAR_4 * sizeof(struct image_hdr)));

  if (VAR_7->imageid != 1)
   continue;

  switch (VAR_5) {
   case 128:
    VAR_2 = FUNC_2(VAR_0, VAR_1,
      VAR_3);
    break;
   case 129:
    if (VAR_0->asic_revision < 0x10)
     VAR_2 = FUNC_2(VAR_0, VAR_1,
           VAR_3);
    else {
     VAR_2 = -1;
     FUNC_0(VAR_0->dev,
      "Cant load SH A0 UFI on B0\n");
    }
    break;
   default:
    VAR_2 = -1;
    break;

  }
 }

 return VAR_2;
}

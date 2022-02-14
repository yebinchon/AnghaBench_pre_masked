
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {TYPE_2__* bus; } ;
struct firmware {scalar_t__ data; } ;
struct dsp_image_seg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,struct dsp_image_seg const*,int ,int ,int,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct firmware const*) ;
 scalar_t__ FUNC_4 (struct firmware const**,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct hda_codec *VAR_1)
{
 bool VAR_2 = 0;
 const struct dsp_image_seg *VAR_3;
 const struct firmware *VAR_4;

 if (FUNC_4(&VAR_4, VAR_0, VAR_1->bus->card->dev) != 0)
  return 0;

 VAR_3 = (struct dsp_image_seg *)(VAR_4->data);
 if (FUNC_0(VAR_1, VAR_3, 0, 0, 1, 0)) {
  FUNC_2("ca0132 dspload_image failed.\n");
  goto exit_download;
 }

 VAR_2 = FUNC_1(VAR_1);

exit_download:
 FUNC_3(VAR_4);

 return VAR_2;
}

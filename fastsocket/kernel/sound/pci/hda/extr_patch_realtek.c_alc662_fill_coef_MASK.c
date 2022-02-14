
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 switch (VAR_0->vendor_id) {
 case 0x10ec0662:
  if ((VAR_2 & 0x00f0) == 0x0030) {
   VAR_1 = FUNC_1(VAR_0, 0x4);
   FUNC_2(VAR_0, 0x4, VAR_1 & ~(1<<10));
  }
  break;
 case 0x10ec0272:
 case 0x10ec0273:
 case 0x10ec0663:
 case 0x10ec0665:
 case 0x10ec0670:
 case 0x10ec0671:
 case 0x10ec0672:
  VAR_1 = FUNC_1(VAR_0, 0xd);
  FUNC_2(VAR_0, 0xd, VAR_1 | (1<<14));
  break;
 }
}

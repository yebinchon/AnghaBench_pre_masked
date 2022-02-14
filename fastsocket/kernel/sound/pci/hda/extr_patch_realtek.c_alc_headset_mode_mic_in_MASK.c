
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1, hda_nid_t VAR_2,
        hda_nid_t VAR_3)
{
 int VAR_4;

 switch (VAR_1->vendor_id) {
 case 0x10ec0283:
  FUNC_1(VAR_1, 0x45, 0xc429);
  FUNC_2(VAR_1, VAR_2, 0);
  VAR_4 = FUNC_0(VAR_1, 0x35);
  FUNC_1(VAR_1, 0x35, VAR_4 | 1<<14);
  FUNC_1(VAR_1, 0x06, 0x2100);
  FUNC_1(VAR_1, 0x1a, 0x0021);
  FUNC_1(VAR_1, 0x26, 0x008c);
  FUNC_2(VAR_1, VAR_3, VAR_0);
  break;
 case 0x10ec0292:
  FUNC_2(VAR_1, VAR_2, 0);
  FUNC_1(VAR_1, 0x19, 0xa208);
  FUNC_1(VAR_1, 0x2e, 0xacf0);
  break;
 case 0x10ec0668:
  FUNC_1(VAR_1, 0x11, 0x0001);
  FUNC_2(VAR_1, VAR_2, 0);
  FUNC_1(VAR_1, 0xb7, 0x802b);
  FUNC_1(VAR_1, 0xb5, 0x1040);
  VAR_4 = FUNC_0(VAR_1, 0xc3);
  FUNC_1(VAR_1, 0xc3, VAR_4 | 1<<12);
  FUNC_2(VAR_1, VAR_3, VAR_0);
  break;
 }
 FUNC_3("Headset jack set to mic-in mode.\n");
}

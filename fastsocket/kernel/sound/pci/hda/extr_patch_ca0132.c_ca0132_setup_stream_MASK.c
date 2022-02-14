
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_3 (char*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_4, hda_nid_t VAR_5,
     u32 VAR_6,
     int VAR_7, int VAR_8)
{
 unsigned int VAR_9, VAR_10;

 if (!VAR_5)
  return;

 FUNC_3(
     "ca0132_setup_stream: NID=0x%x, stream=0x%x, "
     "channel=%d, format=0x%x\n",
     VAR_5, VAR_6, VAR_7, VAR_8);


 VAR_9 = FUNC_1(VAR_4, VAR_5, 0,
        VAR_1,
        0);
 if (VAR_9 != VAR_8) {
  FUNC_0(20);
  FUNC_2(VAR_4, VAR_5, 0,
        VAR_3,
        VAR_8);
 }

 VAR_9 = FUNC_1(VAR_4, VAR_5, 0, VAR_0, 0);
 VAR_10 = (VAR_6 << 4) | VAR_7;
 if (VAR_9 != VAR_10) {
  FUNC_2(VAR_4, VAR_5, 0,
        VAR_2,
        VAR_10);
 }
}

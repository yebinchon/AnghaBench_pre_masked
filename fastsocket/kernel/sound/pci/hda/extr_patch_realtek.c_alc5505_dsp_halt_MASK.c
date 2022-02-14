
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 unsigned int VAR_1;

 FUNC_1(VAR_0, 0x3000, 0x000c);
 FUNC_1(VAR_0, 0x880c, 0x0008);
 FUNC_1(VAR_0, 0x61c0, 0x11110080);
 FUNC_1(VAR_0, 0x6230, 0xfc0d4011);
 FUNC_1(VAR_0, 0x61b4, 0x040a2b03);
 FUNC_1(VAR_0, 0x61b0, 0x00005b17);
 FUNC_1(VAR_0, 0x61b8, 0x04133303);
 VAR_1 = FUNC_0(VAR_0, 0x6220);
 FUNC_1(VAR_0, 0x6220, (VAR_1 | 0x3000));
}

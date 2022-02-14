
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;
 unsigned int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0x1b);
 FUNC_2("CXT5066: external microphone present=%d\n", VAR_2);
 FUNC_0(VAR_1, 0x17, 0, VAR_0,
       VAR_2 ? 1 : 0);
}

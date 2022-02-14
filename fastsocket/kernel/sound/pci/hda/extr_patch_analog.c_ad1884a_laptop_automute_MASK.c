
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;
 unsigned int FUNC_2 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_3, 0x11);
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_3, 0x12);
 FUNC_0(VAR_3, 0x16, VAR_2, 0,
     VAR_1, VAR_4 ? VAR_1 : 0);
 FUNC_1(VAR_3, 0x16, 0, VAR_0,
       VAR_4 ? 0x00 : 0x02);
}

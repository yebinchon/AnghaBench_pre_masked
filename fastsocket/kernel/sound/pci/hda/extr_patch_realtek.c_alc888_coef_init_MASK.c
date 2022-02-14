
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3)
{
 unsigned int VAR_4;

 FUNC_1(VAR_3, 0x20, 0, VAR_1, 0);
 VAR_4 = FUNC_0(VAR_3, 0x20, 0, VAR_0, 0);
 FUNC_1(VAR_3, 0x20, 0, VAR_1, 7);
 if ((VAR_4 & 0xf0) == 0x20)

  FUNC_0(VAR_3, 0x20, 0,
       VAR_2, 0x830);
  else

   FUNC_0(VAR_3, 0x20, 0,
        VAR_2, 0x3030);
}

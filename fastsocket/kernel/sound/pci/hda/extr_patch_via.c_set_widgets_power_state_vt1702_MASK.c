
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int,unsigned int*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_2 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_3)
{
 int VAR_4 =
 FUNC_1(VAR_3, 0x13, 0, VAR_2, 0x00) == 3;
 unsigned int VAR_5;


 VAR_5 = VAR_1;
 FUNC_0(VAR_3, 0x14, &VAR_5);
 FUNC_0(VAR_3, 0x15, &VAR_5);
 FUNC_0(VAR_3, 0x18, &VAR_5);
 if (VAR_4)
  VAR_5 = VAR_0;

 FUNC_2(VAR_3, 0x13, VAR_5);
 FUNC_2(VAR_3, 0x12, VAR_5);
 FUNC_2(VAR_3, 0x1f, VAR_5);
 FUNC_2(VAR_3, 0x20, VAR_5);



 VAR_5 = VAR_1;
 FUNC_0(VAR_3, 0x17, &VAR_5);
 FUNC_0(VAR_3, 0x16, &VAR_5);

 FUNC_2(VAR_3, 0x1a, VAR_4 ? VAR_0 : VAR_5);
 FUNC_2(VAR_3, 0x10, VAR_5);
 FUNC_2(VAR_3, 0x1d, VAR_5);
}

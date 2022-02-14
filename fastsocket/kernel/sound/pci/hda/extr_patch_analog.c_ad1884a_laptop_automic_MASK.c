
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1)
{
 unsigned int VAR_2;

 if (FUNC_1(VAR_1, 0x14))
  VAR_2 = 0;
 else if (FUNC_1(VAR_1, 0x1c))
  VAR_2 = 4;
 else
  VAR_2 = 1;
 FUNC_0(VAR_1, 0x0c, 0, VAR_0, VAR_2);
}

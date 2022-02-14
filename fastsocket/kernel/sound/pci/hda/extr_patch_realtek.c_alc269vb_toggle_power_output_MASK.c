
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, 0x04);
 if (VAR_1)
  VAR_2 |= 1 << 11;
 else
  VAR_2 &= ~(1 << 11);
 FUNC_1(VAR_0, 0x04, VAR_2);
}

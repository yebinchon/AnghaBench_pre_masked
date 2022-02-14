
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3, unsigned int VAR_4)
{
 if ((VAR_4 >> 26) != VAR_0)
  return;
 if (FUNC_0(VAR_3, 0x11))
  FUNC_1(VAR_3, VAR_2);
 else
  FUNC_1(VAR_3, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_6,
          const struct hda_fixup *VAR_7, int VAR_8)
{
 if (VAR_8 == VAR_4)
  FUNC_0(VAR_6, 0x20, VAR_5,
       (0x17 << VAR_2) |
       (0x17 << VAR_1) |
       (0x05 << VAR_3) |
       (1 << VAR_0));
}

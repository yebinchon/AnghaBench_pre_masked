
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;

unsigned int FUNC_4(struct hda_codec *VAR_5,
          hda_nid_t VAR_6,
          unsigned int VAR_7)
{
 if (VAR_7 == VAR_2 &&
     FUNC_1(FUNC_0(VAR_5, VAR_6)) == VAR_4 &&
     (FUNC_3(VAR_5, VAR_6) & VAR_0)) {
  int VAR_8 = FUNC_2(VAR_5, VAR_6, 0,
           VAR_3, 0);
  if (VAR_8 & 0x02)
   return VAR_1;
 }
 return VAR_7;
}

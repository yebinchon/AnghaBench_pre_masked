
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int,int,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_5,
        hda_nid_t VAR_6, int VAR_7, int VAR_8,
        unsigned int VAR_9)
{
 unsigned int VAR_10 = 0xff;

 if (VAR_9 & VAR_0) {
  if (FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_3))
   VAR_10 &= ~0x80;
 }
 if (VAR_9 & VAR_1) {
  if (FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_4) ||
      FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_2))
   VAR_10 &= ~0x7f;
 }
 return VAR_10;
}

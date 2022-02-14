
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {unsigned int hda_fmt; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 TYPE_1__* VAR_7 ;

int FUNC_2(struct hda_codec *VAR_8, hda_nid_t VAR_9,
    unsigned int VAR_10)
{
 int VAR_11;
 unsigned int VAR_12 = 0, VAR_13, VAR_14;

 VAR_12 = FUNC_0(VAR_8, VAR_9);
 if (!VAR_12)
  return 0;

 VAR_13 = VAR_10 & 0xff00;
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  if (VAR_7[VAR_11].hda_fmt == VAR_13) {
   if (VAR_12 & (1 << VAR_11))
    break;
   return 0;
  }
 if (VAR_11 >= VAR_0)
  return 0;

 VAR_14 = FUNC_1(VAR_8, VAR_9);
 if (!VAR_14)
  return 0;

 if (VAR_14 & VAR_1) {
  switch (VAR_10 & 0xf0) {
  case 0x00:
   if (!(VAR_12 & VAR_6))
    return 0;
   break;
  case 0x10:
   if (!(VAR_12 & VAR_2))
    return 0;
   break;
  case 0x20:
   if (!(VAR_12 & VAR_3))
    return 0;
   break;
  case 0x30:
   if (!(VAR_12 & VAR_4))
    return 0;
   break;
  case 0x40:
   if (!(VAR_12 & VAR_5))
    return 0;
   break;
  default:
   return 0;
  }
 } else {

 }

 return 1;
}

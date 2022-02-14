
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;




 unsigned int VAR_9 ;
 int FUNC_0 (unsigned int**) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;

unsigned int FUNC_2(struct hda_codec *VAR_10,
         hda_nid_t VAR_11, unsigned int VAR_12)
{
 static unsigned int VAR_13[][2] = {
  { 131, 135 },
  { 129, 133 },
  { 130, 134 },
  { 128, 132 },
 };
 unsigned int VAR_14;

 if (!VAR_12)
  return 0;
 VAR_14 = FUNC_1(VAR_10, VAR_11);
 if (!VAR_14)
  return VAR_12;

 if (VAR_12 & VAR_7) {
  if (!(VAR_14 & VAR_2))
   VAR_12 &= ~(VAR_7 | VAR_5);
  else if ((VAR_12 & VAR_5) && !(VAR_14 & VAR_0))
   VAR_12 &= ~VAR_5;
 }

 if (VAR_12 & VAR_6) {
  if (!(VAR_14 & VAR_1))
   VAR_12 &= ~(VAR_6 | VAR_8);
  else {
   unsigned int VAR_15, VAR_16;
   int VAR_17;
   VAR_15 = (VAR_14 & VAR_3) >> VAR_4;
   VAR_16 = VAR_12 & VAR_8;
   for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++) {
    if (VAR_16 == VAR_13[VAR_17][0] &&
        !(VAR_15 & VAR_13[VAR_17][1])) {
     if (VAR_17 == FUNC_0(VAR_13) - 1)
      VAR_16 = VAR_9;
     else
      VAR_16 = VAR_13[VAR_17 + 1][0];
    }
   }
   VAR_12 &= ~VAR_8;
   VAR_12 |= VAR_16;
  }
 }

 return VAR_12;
}

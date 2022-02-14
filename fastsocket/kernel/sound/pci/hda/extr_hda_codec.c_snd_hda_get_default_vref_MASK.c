
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
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;

unsigned int FUNC_2(struct hda_codec *VAR_13, hda_nid_t VAR_14)
{
 unsigned int VAR_15;
 unsigned int VAR_16;
 VAR_16 = FUNC_0(VAR_13, VAR_14, 0,
        VAR_11, 0);
 VAR_15 = FUNC_1(VAR_13, VAR_14);
 VAR_15 = (VAR_15 & VAR_0) >> VAR_5;

 if ((VAR_15 & VAR_3) && VAR_16 != VAR_12)
  return VAR_8;
 else if (VAR_15 & VAR_2)
  return VAR_7;
 else if (VAR_15 & VAR_1)
  return VAR_6;
 else if (VAR_15 & VAR_4)
  return VAR_9;
 return VAR_10;
}

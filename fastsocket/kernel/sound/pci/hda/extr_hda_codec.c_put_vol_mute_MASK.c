
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_10, unsigned int VAR_11,
    hda_nid_t VAR_12, int VAR_13, int VAR_14, int VAR_15,
    int VAR_16)
{
 u32 VAR_17;

 VAR_17 = VAR_13 ? VAR_6 : VAR_4;
 VAR_17 |= VAR_14 == VAR_9 ? VAR_5 : VAR_3;
 VAR_17 |= VAR_15 << VAR_2;
 if ((VAR_16 & VAR_8) && !(VAR_11 & VAR_1) &&
     (VAR_11 & VAR_0))
  ;
 else
  VAR_17 |= VAR_16;
 FUNC_0(VAR_10, VAR_12, 0, VAR_7, VAR_17);
}

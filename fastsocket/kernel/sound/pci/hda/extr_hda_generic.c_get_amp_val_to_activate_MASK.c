
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

__attribute__((used)) static int FUNC_0(struct hda_codec *VAR_5, hda_nid_t VAR_6,
       int VAR_7, unsigned int VAR_8, bool VAR_9)
{
 unsigned int VAR_10 = 0;

 if (VAR_8 & VAR_1) {

  if (VAR_9)
   VAR_10 = (VAR_8 & VAR_2) >> VAR_3;
 }
 if (VAR_8 & VAR_0) {
  if (!VAR_9)
   VAR_10 |= VAR_4;
 }
 return VAR_10;
}


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
 unsigned int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 VAR_6 = (VAR_6 & VAR_0) >> VAR_3;

 VAR_6 &= ~(VAR_2 | VAR_1);
 return VAR_6;
}

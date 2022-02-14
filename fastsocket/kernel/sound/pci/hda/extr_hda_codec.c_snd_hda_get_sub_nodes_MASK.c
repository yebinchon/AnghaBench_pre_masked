
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef unsigned int hda_nid_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,unsigned int,int ) ;

int FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     hda_nid_t *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_4 == -1)
  return 0;
 *VAR_3 = (VAR_4 >> 16) & 0x7fff;
 return (int)(VAR_4 & 0x7fff);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,unsigned char,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1,
    hda_nid_t VAR_2, unsigned char VAR_3,
    unsigned char VAR_4, unsigned int *VAR_5)
{
 unsigned char VAR_6 = 0;

 VAR_6 = (VAR_3 << 4) | (VAR_4 & 0x0f);
 return FUNC_0(VAR_1, VAR_2, VAR_0,
    VAR_6, VAR_5);
}

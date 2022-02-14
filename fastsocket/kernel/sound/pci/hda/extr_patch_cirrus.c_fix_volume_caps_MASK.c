
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 unsigned int VAR_5;


 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
 VAR_5 &= ~(0x7f << VAR_0);
 VAR_5 |= ((VAR_5 >> VAR_1) & 0x7f)
  << VAR_0;
 FUNC_1(VAR_3, VAR_4, VAR_2, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,int,unsigned int,int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int) ;
 int FUNC_2 (struct hda_codec*,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1, int VAR_2, int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, 0);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, 0xff, VAR_5);
}

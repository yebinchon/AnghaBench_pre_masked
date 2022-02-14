
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int,unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3, hda_nid_t VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5 == VAR_2 ?
      VAR_1 : VAR_0);
 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
}

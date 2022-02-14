
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2, int VAR_3,
         hda_nid_t *VAR_4, bool VAR_5)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_1(VAR_2, VAR_4[VAR_6]) & VAR_0)
   FUNC_0(VAR_2, VAR_4[VAR_6], 0,
         VAR_1,
         VAR_5 ? 0x02 : 0);
 }
}

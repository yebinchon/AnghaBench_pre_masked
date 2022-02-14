
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,int ,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_6, hda_nid_t VAR_7, hda_nid_t VAR_8)
{
 if (VAR_7) {
  FUNC_4(VAR_6, VAR_7, VAR_5);
  if (FUNC_1(VAR_6, VAR_7) & VAR_1)
   FUNC_3(VAR_6, VAR_7, 0,
         VAR_0,
         FUNC_0(0));
 }
 if (VAR_8 && (FUNC_1(VAR_6, VAR_8) & VAR_1)) {
  FUNC_3(VAR_6, VAR_8, 0, VAR_0,
        FUNC_0(0));


  FUNC_2(VAR_6, VAR_8, VAR_4, 0,
      VAR_3, 0x5a);
  FUNC_2(VAR_6, VAR_8, VAR_4, 0,
      VAR_2, 0);
 }
}

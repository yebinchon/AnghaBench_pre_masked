
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int) ;
 int FUNC_2 (struct hda_codec*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_6, hda_nid_t VAR_7,
          int VAR_8, int VAR_9, int VAR_10)
{
 FUNC_2(VAR_6, VAR_7,
          FUNC_0(VAR_6, VAR_7) | VAR_4);
 FUNC_1(VAR_6, VAR_7, VAR_5,
      (VAR_8 << VAR_2) |
      (VAR_9 << VAR_1) |
      (VAR_10 << VAR_3) |
      (0 << VAR_0));
}

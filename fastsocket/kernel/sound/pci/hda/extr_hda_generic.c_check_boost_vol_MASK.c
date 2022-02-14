
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int,int,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5,
       int VAR_6, int VAR_7)
{
 unsigned int VAR_8;

 if (!FUNC_1(VAR_4, VAR_5, VAR_6) ||
     FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3) ||
     FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2))
  return 0;

 VAR_8 = (FUNC_2(VAR_4, VAR_5, VAR_6) & VAR_0)
  >> VAR_1;
 if (VAR_8 < 0x20)
  return 0;
 return 1;
}

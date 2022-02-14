
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int dummy; } ;
typedef int name ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,char*,int,int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct hda_codec*,char*,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 unsigned int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ,struct auto_pin_cfg const*,char*,int,int*) ;
 int FUNC_6 (struct hda_codec*,int ,int ) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_2, hda_nid_t VAR_3,
    const struct auto_pin_cfg *VAR_4,
    const char *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 char VAR_8[44];
 int VAR_9, VAR_10;
 bool VAR_11;

 if (!VAR_3)
  return 0;
 VAR_6 = FUNC_4(VAR_2, VAR_3);
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 == VAR_1)
  return 0;
 VAR_11 = (VAR_7 != VAR_0) ||
         !FUNC_3(VAR_2, VAR_3);

 if (VAR_5) {
  FUNC_7(VAR_8, VAR_5, sizeof(VAR_8));
  VAR_9 = 0;
 } else
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_8, sizeof(VAR_8), &VAR_9);
 if (VAR_11)

  FUNC_9(VAR_8, " Phantom", sizeof(VAR_8) - FUNC_8(VAR_8) - 1);
 VAR_9 = FUNC_2(VAR_2, VAR_8, VAR_9);
 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_8, VAR_9, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_11)
  return FUNC_6(VAR_2, VAR_3, 0);
 return 0;
}

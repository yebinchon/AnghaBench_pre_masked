
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
    unsigned int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);

 if (VAR_4 == -1)
  return 0;
 if (VAR_4 & VAR_3)
  return 1;
 else
  return 0;
}

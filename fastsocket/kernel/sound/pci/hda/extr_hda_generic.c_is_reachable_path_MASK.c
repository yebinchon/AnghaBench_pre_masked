
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_0,
         hda_nid_t VAR_1, hda_nid_t VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return 0;
 return FUNC_0(VAR_0, VAR_2, VAR_1, 1) >= 0;
}

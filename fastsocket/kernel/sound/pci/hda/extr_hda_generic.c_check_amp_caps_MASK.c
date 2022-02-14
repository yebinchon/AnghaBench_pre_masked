
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1,
      int VAR_2, unsigned int VAR_3)
{
 if (!VAR_1)
  return 0;
 if (FUNC_0(VAR_0, VAR_1) & (1 << (VAR_2 + 1)))
  if (FUNC_1(VAR_0, VAR_1, VAR_2) & VAR_3)
   return 1;
 return 0;
}

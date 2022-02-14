
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int const hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int const) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct hda_codec*,int const,int const**) ;
 int FUNC_3 (char*,int const) ;

int FUNC_4(struct hda_codec *VAR_2, hda_nid_t VAR_3,
      hda_nid_t VAR_4, int VAR_5)
{
 const hda_nid_t *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3, &VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (VAR_6[VAR_7] == VAR_4)
   return VAR_7;
 if (!VAR_5)
  return -1;
 if (VAR_5 > 10) {
  FUNC_3("hda_codec: too deep connection for 0x%x\n", VAR_4);
  return -1;
 }
 VAR_5++;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  unsigned int VAR_9 = FUNC_1(FUNC_0(VAR_2, VAR_6[VAR_7]));
  if (VAR_9 == VAR_1 || VAR_9 == VAR_0)
   continue;
  if (FUNC_4(VAR_2, VAR_6[VAR_7], VAR_4, VAR_5) >= 0)
   return VAR_7;
 }
 return -1;
}

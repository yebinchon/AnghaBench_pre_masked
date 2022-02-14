
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_1, int VAR_2, hda_nid_t *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  hda_nid_t VAR_6 = VAR_3[VAR_4];
  if (!VAR_6)
   break;

  if (FUNC_0(VAR_1, VAR_6) & VAR_0)
   continue;
  VAR_5 |= FUNC_1(VAR_1, VAR_6);
 }
 return VAR_5;
}

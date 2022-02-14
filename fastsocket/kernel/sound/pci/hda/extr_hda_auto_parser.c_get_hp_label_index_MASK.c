
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int const hda_nid_t ;


 char const* FUNC_0 (struct hda_codec*,int const) ;
 int FUNC_1 (int const,int const*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1,
         const hda_nid_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 const char *VAR_7 = FUNC_0(VAR_0, VAR_1);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return -1;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_7 == FUNC_0(VAR_0, VAR_2[VAR_5]))
   VAR_6++;

 return VAR_6;
}

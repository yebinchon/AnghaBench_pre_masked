
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct hda_codec {int dummy; } ;


 char** VAR_0 ;
 int FUNC_0 (struct hda_codec*,int const,char const*,int) ;
 int FUNC_1 (char*,int,char*,char const*,char*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1, int VAR_2,
        const int *VAR_3, const char *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  const char *VAR_6;
  char VAR_7[44];
  int VAR_8, VAR_9 = 0;

  if (VAR_2 == 2 && VAR_5 == 1 && !FUNC_2(VAR_4, "Speaker"))
   VAR_6 = "Bass Speaker";
  else if (VAR_2 >= 3) {
   FUNC_1(VAR_7, sizeof(VAR_7), "%s %s",
     VAR_4, VAR_0[VAR_5]);
   VAR_6 = VAR_7;
  } else {
   VAR_6 = VAR_4;
   VAR_9 = VAR_5;
  }
  VAR_8 = FUNC_0(VAR_1, VAR_3[VAR_5], VAR_6, VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
 }
 return 0;
}

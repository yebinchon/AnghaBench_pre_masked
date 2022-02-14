
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_info {scalar_t__ default_val; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,struct display_info*,int,char const*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct display_info *VAR_0, const char *VAR_1,
       char **VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_5(VAR_1);
 if (!VAR_5)
  return -1;

 for (VAR_7 = 0; VAR_7 + VAR_4 <= VAR_3; VAR_7 += VAR_4) {
  VAR_8 = FUNC_0(VAR_5, VAR_2[VAR_7]);
  if (VAR_8 < 0) {
   if (VAR_0->default_val) {
    FUNC_2(VAR_0->default_val);
    continue;
   } else {
    FUNC_3(VAR_2[VAR_7], VAR_8);
    FUNC_1(VAR_5);
    return -1;
   }
  }
  VAR_6 = VAR_4 == 1 ? ((void*)0) : VAR_2[VAR_7 + 1];

  if (FUNC_4(VAR_5, VAR_0, VAR_8, VAR_6)) {
   FUNC_1(VAR_5);
   return -1;
  }
 }

 FUNC_1(VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int match_length; } ;
typedef TYPE_1__ passwdqc_params_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(passwdqc_params_t *VAR_0,
    const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;
 const char *VAR_8;
 int VAR_9;

 if (!VAR_0->match_length)
  return 0;

 if (VAR_0->match_length < 0)
  return 1;

 if (FUNC_6(VAR_1, VAR_2))
  return 1;

 VAR_4 = ((void*)0);

 VAR_5 = FUNC_4(VAR_2);
 for (VAR_6 = 0; VAR_6 <= VAR_5 - VAR_0->match_length; VAR_6++)
 for (VAR_7 = VAR_0->match_length; VAR_6 + VAR_7 <= VAR_5; VAR_7++) {
  VAR_9 = 0;
  for (VAR_8 = VAR_1; *VAR_8; VAR_8++)
  if (*VAR_8 == VAR_2[VAR_6] && !FUNC_5(VAR_8, &VAR_2[VAR_6], VAR_7)) {
   VAR_9 = 1;
   if (!VAR_4) {
    if (!(VAR_4 = FUNC_2(VAR_5 + 1)))
     return 1;
   }
   FUNC_3(VAR_4, VAR_3, VAR_6);
   FUNC_3(&VAR_4[VAR_6], &VAR_3[VAR_6 + VAR_7],
       VAR_5 + 1 - (VAR_6 + VAR_7));
   if (FUNC_1(VAR_0, VAR_4)) {
    FUNC_0(VAR_4);
    return 1;
   }
  }
  if (!VAR_9) break;
 }

 FUNC_0(VAR_4);

 return 0;
}

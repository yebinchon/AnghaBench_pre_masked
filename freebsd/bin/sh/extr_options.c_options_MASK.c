
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 char* VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_4(int VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_4)
  VAR_1 = ((void*)0);
 while ((VAR_6 = *VAR_0) != ((void*)0)) {
  VAR_0++;
  if ((VAR_8 = *VAR_6++) == '-') {
   VAR_7 = 1;

   if (VAR_6[0] == '\0')
    goto end_options1;
   if (VAR_6[0] == '-' && VAR_6[1] == '\0')
    goto end_options2;
   if (VAR_6[0] == '-') {
    VAR_5 = VAR_6 + 1;
    while (*VAR_5 == ' ' || *VAR_5 == '\t')
     VAR_5++;
    if (*VAR_5 == '#' || *VAR_5 == '\0')
     goto end_options2;
   }
  } else if (VAR_8 == '+') {
   VAR_7 = 0;
  } else {
   VAR_0--;
   break;
  }
  while ((VAR_8 = *VAR_6++) != '\0') {
   if (VAR_8 == 'c' && VAR_4) {
    char *VAR_9;

    VAR_9 = *VAR_0++;
    if (VAR_9 == ((void*)0) || VAR_1 != ((void*)0))
     FUNC_0("Bad -c option");
    VAR_1 = VAR_9;
   } else if (VAR_8 == 'o') {
    FUNC_1(*VAR_0, VAR_7);
    if (*VAR_0)
     VAR_0++;
   } else
    FUNC_2(VAR_8, VAR_7);
  }
 }
 return;


end_options1:
 if (!VAR_4) {
  VAR_3 = VAR_2 = 0;
  return;
 }







end_options2:
 if (!VAR_4) {
  if (*VAR_0 == ((void*)0))
   FUNC_3(0, VAR_0);
  return;
 }
 VAR_6 = *VAR_0;
 if (VAR_6 != ((void*)0) && VAR_6[0] == '#' && VAR_6[1] == '\0') {
  while (*VAR_0 != ((void*)0))
   VAR_0++;

  VAR_0--;
 }
}

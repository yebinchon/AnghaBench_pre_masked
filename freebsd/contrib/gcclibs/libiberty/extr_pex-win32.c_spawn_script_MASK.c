
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int LPSTARTUPINFO ;
typedef int LPPROCESS_INFORMATION ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char const*,int ,char* const*,char* const*,int ,int ,int ) ;

__attribute__((used)) static long
FUNC_11 (const char *VAR_5, char *const *VAR_6,
              char* const *VAR_7,
       DWORD VAR_8,
       LPSTARTUPINFO VAR_9,
       LPPROCESS_INFORMATION VAR_10)
{
  int VAR_11 = -1;
  int VAR_12 = VAR_4;
  int VAR_13 = FUNC_1 (VAR_5, VAR_3);

  if (VAR_13 >= 0)
    {
      char VAR_14[VAR_1 + 5];
      int VAR_15 = FUNC_2 (VAR_13, VAR_14, sizeof (VAR_14) - 1);
      FUNC_0 (VAR_13);
      if (VAR_15 > 3)
 {
   char *VAR_16;
   VAR_14[VAR_15] = '\0';
   VAR_16 = FUNC_7 (VAR_14, '\n');
   if (VAR_16 && FUNC_8 (VAR_14, "#!", 2) == 0)
     {
       char *VAR_17;
       const char ** VAR_18 = (const char **) --VAR_6;
       do
  *VAR_16 = '\0';
       while (*--VAR_16 == '\r' || *VAR_16 == ' ' || *VAR_16 == '\t');
       for (VAR_17 = VAR_14 + 2; *VAR_17 == ' ' || *VAR_17 == '\t'; VAR_17++)
  continue;

       FUNC_3 (VAR_17);
       *VAR_18 = VAR_17;

       VAR_5 = FUNC_9 (VAR_17, '\\') + 1;
       if (!VAR_5)
  VAR_5 = VAR_17;
       VAR_11 = FUNC_10 (VAR_5, VAR_2, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_10);
     }
 }
    }
  if (VAR_11 < 0)
    VAR_4 = VAR_12;
  return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int ,int) ;
 int FUNC_1 (char*,char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;
 char** FUNC_4 (char**,int) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (int VAR_2, const char *VAR_3)
{
  static const char *VAR_4 = "insn";
  static int VAR_5 = 0;
  char *VAR_6;

  if (VAR_1 <= VAR_2)
    {
      int VAR_7;
      VAR_7 = (VAR_1 ? VAR_1 * 2 : 512);
      VAR_0 = FUNC_4 (VAR_0, sizeof(char *) * VAR_7);
      FUNC_0 (VAR_0 + VAR_1, 0,
       sizeof(char *) * (VAR_7 - VAR_1));
      VAR_1 = VAR_7;
    }

  if (!VAR_3 || VAR_3[0] == '\0')
    {
      VAR_6 = FUNC_3 (FUNC_2 (VAR_4) + 10);
      FUNC_1 (VAR_6, "%s+%d", VAR_4, VAR_2 - VAR_5);
    }
  else
    {
      VAR_4 = VAR_6 = FUNC_5 (VAR_3);
      VAR_5 = VAR_2;
    }

  VAR_0[VAR_2] = VAR_6;
}

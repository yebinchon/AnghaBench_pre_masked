
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2 (rtx VAR_1)
{
  int VAR_2;
  const char *VAR_3;


  if (VAR_0 == 0)
    return 0;






  VAR_3 = FUNC_0 (VAR_1, 0);

  VAR_2 = (((VAR_3[0] == '*' || VAR_3[0] == '&')
              && (VAR_3[1] == 'L' || (VAR_3[1] == '"' && VAR_3[2] == 'L')))
             || (FUNC_1 (VAR_3, "_OBJC_", 6) == 0));

  return ! VAR_2;
}

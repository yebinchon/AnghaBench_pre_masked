
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char const* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_3 (rtx VAR_5)
{
  const char *VAR_6 = FUNC_1 (VAR_5);
  int VAR_7 = FUNC_2 (VAR_5);

  if (VAR_6
      && (VAR_0
   || VAR_6 != VAR_3
   || VAR_4 != VAR_7))
    {
      VAR_0 = 0;
      VAR_3 = VAR_6;
      VAR_4 = VAR_7;
      VAR_1 = FUNC_0 (VAR_4, VAR_1);
      VAR_2 = FUNC_0 (VAR_4, VAR_2);
      return 1;
    }
  return 0;
}

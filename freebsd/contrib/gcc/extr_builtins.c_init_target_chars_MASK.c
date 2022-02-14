
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* to_target_charset ) (char) ;} ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool
FUNC_4 (void)
{
  static bool VAR_8;
  if (!VAR_8)
    {
      VAR_2 = VAR_0.to_target_charset ('\n');
      VAR_3 = VAR_0.to_target_charset ('%');
      VAR_1 = VAR_0.to_target_charset ('c');
      VAR_7 = VAR_0.to_target_charset ('s');
      if (VAR_2 == 0 || VAR_3 == 0 || VAR_1 == 0
   || VAR_7 == 0)
 return 0;

      VAR_4[0] = VAR_3;
      VAR_4[1] = VAR_1;
      VAR_4[2] = '\0';

      VAR_5[0] = VAR_3;
      VAR_5[1] = VAR_7;
      VAR_5[2] = '\0';

      VAR_6[0] = VAR_3;
      VAR_6[1] = VAR_7;
      VAR_6[2] = VAR_2;
      VAR_6[3] = '\0';

      VAR_8 = 1;
    }
  return 1;
}

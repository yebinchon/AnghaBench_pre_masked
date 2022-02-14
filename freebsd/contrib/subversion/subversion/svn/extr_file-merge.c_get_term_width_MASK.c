
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct winsize {int ws_col; } ;
struct TYPE_4__ {int X; } ;
struct TYPE_5__ {TYPE_1__ dwSize; } ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,int ,struct winsize*) ;
 int FUNC_5 (char*,int ,int ) ;
 int * FUNC_6 (int*,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(void)
{
  char *VAR_3;
  VAR_3 = FUNC_3("COLUMNS");
  if (VAR_3)
    {
      svn_error_t *VAR_4;
      int VAR_5;

      VAR_4 = FUNC_6(&VAR_5, VAR_3);
      if (VAR_4)
        {
          FUNC_7(VAR_4);
          return 80;
        }

      if (VAR_5 < 80)
        return 80;
      return VAR_5;
    }
  else
    return 80;
}

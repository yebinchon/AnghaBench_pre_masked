
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ mtime; } ;
typedef TYPE_1__ file_info ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_1, time_t VAR_2)
{
  const char *VAR_3;
  file_info *VAR_4;
  char *VAR_5;

  FUNC_3 (VAR_1[0] == '/');
  FUNC_3 (VAR_1[1] == '*');
  FUNC_3 (VAR_1[2] == ' ');

  {
    const char *VAR_6 = VAR_3 = VAR_1 + 3;

    while (*VAR_3 != ':'



    )
      VAR_3++;
    VAR_5 = FUNC_2 ((size_t) (VAR_3 - VAR_6) + 1);
    FUNC_5 (VAR_5, VAR_6, (size_t) (VAR_3 - VAR_6));
    VAR_5[VAR_3-VAR_6] = '\0';
  }






  VAR_4 = FUNC_4 (FUNC_1 (VAR_0, VAR_5), 0);

  return (VAR_4->mtime > VAR_2);
}

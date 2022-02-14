
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regexp {int dummy; } ;
typedef TYPE_1__* regexp_t ;
struct TYPE_8__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_7__ {int mode; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (char const*) ;
 char** FUNC_3 (char const*,int*,char,int ) ;
 int VAR_1 ;

__attribute__((used)) static regexp_t
FUNC_4 (const char *VAR_2)
{
  regexp_t VAR_3;
  char **VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_4 = FUNC_3 (VAR_2, &VAR_5, ',', VAR_0);
  if (VAR_5 > 1)
    {
      VAR_3 = FUNC_1 (sizeof (struct regexp)
         + sizeof (regexp_t) * (VAR_5 - 1));
      VAR_3->mode = VAR_1;
      FUNC_0 (VAR_3)->regexps_num = VAR_5;
      for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 FUNC_0 (VAR_3)->regexps [VAR_6]
          = FUNC_2 (VAR_4 [VAR_6]);
      return VAR_3;
    }
  else
    return FUNC_2 (VAR_2);
}

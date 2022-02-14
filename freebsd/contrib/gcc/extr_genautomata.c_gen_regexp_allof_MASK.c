
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
 int FUNC_2 (char*,char const*,int ) ;
 TYPE_1__* FUNC_3 (char const*) ;
 char** FUNC_4 (char const*,int*,char,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static regexp_t
FUNC_5 (const char *VAR_3)
{
  regexp_t VAR_4;
  char **VAR_5;
  int VAR_6;
  int VAR_7;

  VAR_5 = FUNC_4 (VAR_3, &VAR_6, '+', VAR_0);
  if (VAR_5 == ((void*)0))
    FUNC_2 ("invalid `%s' in reservation `%s'", VAR_3, VAR_1);
  if (VAR_6 > 1)
    {
      VAR_4 = FUNC_1 (sizeof (struct regexp)
      + sizeof (regexp_t) * (VAR_6 - 1));
      VAR_4->mode = VAR_2;
      FUNC_0 (VAR_4)->regexps_num = VAR_6;
      for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 FUNC_0 (VAR_4)->regexps [VAR_7] = FUNC_3 (VAR_5 [VAR_7]);
      return VAR_4;
    }
  else
    return FUNC_3 (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regexp {int dummy; } ;
typedef TYPE_1__* regexp_t ;
struct TYPE_8__ {int repeat_num; TYPE_1__* regexp; } ;
struct TYPE_7__ {int mode; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int ) ;
 TYPE_1__* FUNC_4 (char const*) ;
 char** FUNC_5 (char const*,int*,char,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static regexp_t
FUNC_6 (const char *VAR_3)
{
  regexp_t VAR_4;
  regexp_t VAR_5;
  char **VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_6 = FUNC_5 (VAR_3, &VAR_7, '*', VAR_0);
  if (VAR_6 == ((void*)0))
    FUNC_3 ("invalid `%s' in reservation `%s'", VAR_3, VAR_1);
  if (VAR_7 > 1)
    {
      VAR_4 = FUNC_4 (VAR_6 [0]);
      for (VAR_8 = 1; VAR_8 < VAR_7; VAR_8++)
 {
   VAR_5 = FUNC_2 (sizeof (struct regexp));
   VAR_5->mode = VAR_2;
   FUNC_0 (VAR_5)->regexp = VAR_4;
   FUNC_0 (VAR_5)->repeat_num = FUNC_1 (VAR_6 [VAR_8]);
          if (FUNC_0 (VAR_5)->repeat_num <= 1)
            FUNC_3 ("repetition `%s' <= 1 in reservation `%s'",
                   VAR_3, VAR_1);
          VAR_4 = VAR_5;
 }
      return VAR_4;
    }
  else
    return FUNC_4 (VAR_3);
}

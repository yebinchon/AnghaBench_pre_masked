
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
struct TYPE_2__ {char* (* strip_name_encoding ) (int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (int ) ;
 TYPE_1__ VAR_4 ;
 char* VAR_5 ;

void
FUNC_14 (tree VAR_6)
{
  const char **VAR_7 = &VAR_3;

  if (VAR_3
      || !FUNC_9 (VAR_6)
      || FUNC_1 (VAR_6)
      || !FUNC_3 (VAR_6)
      || (FUNC_8 (VAR_6) != VAR_0
   && (FUNC_8 (VAR_6) != VAR_1
       || (FUNC_0 (VAR_6)
    && (FUNC_2 (VAR_6) == 0
        || FUNC_2 (VAR_6) == VAR_2))))
      || !FUNC_7 (FUNC_5 (VAR_6)))
    return;



  if (FUNC_6 (VAR_6) || FUNC_4 (VAR_6))
    VAR_7 = &VAR_5;

  if (!*VAR_7)
    {
      const char *VAR_8;
      const char *VAR_9;
      rtx VAR_10 = FUNC_5 (VAR_6);

      VAR_8 = VAR_4.strip_name_encoding (FUNC_11 (FUNC_10 (VAR_10, 0), 0));
      VAR_9 = FUNC_12 (VAR_8);

      *VAR_7 = VAR_9;
    }
}

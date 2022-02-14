
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int len; char* text; } ;
struct TYPE_12__ {TYPE_1__ str; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_13__ {int (* dir_change ) (TYPE_5__*,char*) ;} ;
struct TYPE_15__ {TYPE_3__ cb; } ;
typedef TYPE_5__ cpp_reader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (TYPE_5__*,char*) ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_3)
{
  const cpp_token *VAR_4, *VAR_5;



  VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4->type != VAR_0)
    {
      FUNC_0 (VAR_3, 1);
      return;
    }

  VAR_5 = FUNC_1 (VAR_3);

  if (VAR_5->type != VAR_1)
    {
      FUNC_0 (VAR_3, 2);
      return;
    }

  VAR_5 = FUNC_1 (VAR_3);

  if (VAR_5->type != VAR_2
      || ! (VAR_5->val.str.len >= 5
     && VAR_5->val.str.text[VAR_5->val.str.len-2] == '/'
     && VAR_5->val.str.text[VAR_5->val.str.len-3] == '/'))
    {
      FUNC_0 (VAR_3, 3);
      return;
    }

  if (VAR_3->cb.dir_change)
    {
      char *VAR_6 = (char *) FUNC_2 (VAR_5->val.str.len - 3);

      FUNC_3 (VAR_6, (const char *) VAR_5->val.str.text + 1,
       VAR_5->val.str.len - 4);
      VAR_6[VAR_5->val.str.len - 4] = '\0';

      VAR_3->cb.dir_change (VAR_3, VAR_6);
    }
}

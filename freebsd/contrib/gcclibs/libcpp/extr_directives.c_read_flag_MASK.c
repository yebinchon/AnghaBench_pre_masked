
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; unsigned int* text; } ;
struct TYPE_6__ {TYPE_2__ str; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_3__ cpp_token ;
typedef int cpp_reader ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,TYPE_3__ const*) ;

__attribute__((used)) static unsigned int
FUNC_3 (cpp_reader *VAR_3, unsigned int VAR_4)
{
  const cpp_token *VAR_5 = FUNC_0 (VAR_3);

  if (VAR_5->type == VAR_2 && VAR_5->val.str.len == 1)
    {
      unsigned int VAR_6 = VAR_5->val.str.text[0] - '0';

      if (VAR_6 > VAR_4 && VAR_6 <= 4
   && (VAR_6 != 4 || VAR_4 == 3)
   && (VAR_6 != 2 || VAR_4 == 0))
 return VAR_6;
    }

  if (VAR_5->type != VAR_1)
    FUNC_1 (VAR_3, VAR_0, "invalid flag \"%s\" in line directive",
        FUNC_2 (VAR_3, VAR_5));
  return 0;
}

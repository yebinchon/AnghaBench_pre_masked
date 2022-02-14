
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cppchar_t ;
struct TYPE_12__ {size_t len; scalar_t__ text; } ;
struct TYPE_9__ {TYPE_6__ str; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_2__ cpp_token ;
struct TYPE_11__ {scalar_t__ text; int member_1; int member_0; } ;
typedef TYPE_3__ cpp_string ;
typedef int cpp_reader ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,TYPE_6__*,int,TYPE_3__*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,TYPE_3__,unsigned int*,int*) ;
 int FUNC_4 (int *,TYPE_3__,unsigned int*,int*) ;

cppchar_t
FUNC_5 (cpp_reader *VAR_2, const cpp_token *VAR_3,
    unsigned int *VAR_4, int *VAR_5)
{
  cpp_string VAR_6 = { 0, 0 };
  bool VAR_7 = (VAR_3->type == VAR_1);
  cppchar_t VAR_8;


  if (VAR_3->val.str.len == (size_t) (2 + VAR_7))
    {
      FUNC_0 (VAR_2, VAR_0, "empty character constant");
      return 0;
    }
  else if (!FUNC_1 (VAR_2, &VAR_3->val.str, 1, &VAR_6, VAR_7))
    return 0;

  if (VAR_7)
    VAR_8 = FUNC_4 (VAR_2, VAR_6, VAR_4, VAR_5);
  else
    VAR_8 = FUNC_3 (VAR_2, VAR_6, VAR_4, VAR_5);

  if (VAR_6.text != VAR_3->val.str.text)
    FUNC_2 ((void *)VAR_6.text);

  return VAR_8;
}

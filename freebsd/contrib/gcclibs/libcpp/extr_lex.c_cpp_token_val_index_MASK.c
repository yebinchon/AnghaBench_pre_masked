
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum cpp_token_fld_kind { ____Placeholder_cpp_token_fld_kind } cpp_token_fld_kind ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ cpp_token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (TYPE_1__*) ;

enum cpp_token_fld_kind
FUNC_1 (cpp_token *VAR_9)
{
  switch (FUNC_0 (VAR_9))
    {
    case 130:
      return VAR_4;
    case 129:
      return VAR_8;
    case 128:
      if (VAR_9->type == VAR_0)
 return VAR_3;
      else if (VAR_9->type == VAR_1)
 return VAR_7;
      else if (VAR_9->type == VAR_2)
 return VAR_6;

    default:
      return VAR_5;
    }
}

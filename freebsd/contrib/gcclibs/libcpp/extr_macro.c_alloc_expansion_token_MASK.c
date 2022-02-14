
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cpp_token ;
struct TYPE_6__ {int a_buff; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_7__ {int count; } ;
typedef TYPE_2__ cpp_macro ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static cpp_token *
FUNC_3 (cpp_reader *VAR_0, cpp_macro *VAR_1)
{
  if (FUNC_1 (VAR_0->a_buff) < (VAR_1->count + 1) * sizeof (cpp_token))
    FUNC_2 (VAR_0, &VAR_0->a_buff, sizeof (cpp_token));

  return &((cpp_token *) FUNC_0 (VAR_0->a_buff))[VAR_1->count++];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_4__ {int node; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_2__ cpp_token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;

int
FUNC_2 (const cpp_token *VAR_1, const char *VAR_2)
{
  if (VAR_1->type != VAR_0)
    return 0;

  return !FUNC_1 (FUNC_0 (VAR_1->val.node), (const uchar *) VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int len; } ;
struct TYPE_7__ {int node; TYPE_1__ str; } ;
struct TYPE_8__ {TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;


 int FUNC_0 (int ) ;


 int FUNC_1 (TYPE_3__ const*) ;

unsigned int
FUNC_2 (const cpp_token *VAR_0)
{
  unsigned int VAR_1;

  switch (FUNC_1 (VAR_0))
    {
    default: VAR_1 = 4; break;
    case 128: VAR_1 = VAR_0->val.str.len; break;
    case 129: VAR_1 = FUNC_0 (VAR_0->val.node) * 10; break;
    }

  return VAR_1;
}

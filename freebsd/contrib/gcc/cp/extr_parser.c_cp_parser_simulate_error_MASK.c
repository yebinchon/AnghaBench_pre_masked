
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* context; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_5__ {int status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_1 (cp_parser* VAR_1)
{
  if (FUNC_0 (VAR_1))
    {
      VAR_1->context->status = VAR_0;
      return 1;
    }
  return 0;
}

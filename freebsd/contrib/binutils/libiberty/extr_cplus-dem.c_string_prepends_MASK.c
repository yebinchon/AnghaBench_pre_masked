
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ b; scalar_t__ p; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (string *VAR_0, string *VAR_1)
{
  if (VAR_1->b != VAR_1->p)
    {
      FUNC_0 (VAR_0, VAR_1->b, VAR_1->p - VAR_1->b);
    }
}

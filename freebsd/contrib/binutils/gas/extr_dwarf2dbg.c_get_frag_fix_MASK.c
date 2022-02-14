
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int segT ;
typedef char* offsetT ;
struct TYPE_5__ {int frch_obstack; TYPE_2__* frch_last; struct TYPE_5__* frch_next; } ;
typedef TYPE_1__ frchainS ;
struct TYPE_6__ {char* fr_fix; int fr_literal; scalar_t__ fr_next; } ;
typedef TYPE_2__ fragS ;
struct TYPE_7__ {TYPE_1__* frchainP; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static offsetT
FUNC_3 (fragS *VAR_0, segT VAR_1)
{
  frchainS *VAR_2;

  if (VAR_0->fr_next)
    return VAR_0->fr_fix;




  for (VAR_2 = FUNC_2 (VAR_1)->frchainP; VAR_2; VAR_2 = VAR_2->frch_next)
    if (VAR_2->frch_last == VAR_0)
      return (char *) FUNC_1 (&VAR_2->frch_obstack) - VAR_0->fr_literal;

  FUNC_0 ();
}

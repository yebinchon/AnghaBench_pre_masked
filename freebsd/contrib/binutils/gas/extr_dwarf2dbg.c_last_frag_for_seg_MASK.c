
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct frag {int dummy; } ;
typedef int segT ;
struct TYPE_3__ {struct frag* frch_last; struct TYPE_3__* frch_next; } ;
typedef TYPE_1__ frchainS ;
struct TYPE_4__ {TYPE_1__* frchainP; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static struct frag *
FUNC_1 (segT VAR_0)
{
  frchainS *VAR_1 = FUNC_0 (VAR_0)->frchainP;

  while (VAR_1->frch_next != ((void*)0))
    VAR_1 = VAR_1->frch_next;

  return VAR_1->frch_last;
}

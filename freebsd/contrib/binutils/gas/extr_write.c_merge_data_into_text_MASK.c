
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* frchainP; } ;
struct TYPE_5__ {TYPE_1__* frch_last; int frch_root; } ;
struct TYPE_4__ {int fr_next; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_1)->frchainP->frch_last->fr_next =
    FUNC_0 (VAR_0)->frchainP->frch_root;
  FUNC_0 (VAR_1)->frchainP->frch_last =
    FUNC_0 (VAR_0)->frchainP->frch_last;
  FUNC_0 (VAR_0)->frchainP = 0;
}

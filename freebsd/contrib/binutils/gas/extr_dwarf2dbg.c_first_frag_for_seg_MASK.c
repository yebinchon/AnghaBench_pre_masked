
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct frag {int dummy; } ;
typedef int segT ;
struct TYPE_4__ {TYPE_1__* frchainP; } ;
struct TYPE_3__ {struct frag* frch_root; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static struct frag *
FUNC_1 (segT VAR_0)
{
  return FUNC_0 (VAR_0)->frchainP->frch_root;
}

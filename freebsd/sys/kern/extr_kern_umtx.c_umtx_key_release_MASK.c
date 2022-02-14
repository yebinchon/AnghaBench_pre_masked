
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object; } ;
struct TYPE_4__ {TYPE_1__ shared; } ;
struct umtx_key {TYPE_2__ info; scalar_t__ shared; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct umtx_key *VAR_0)
{
 if (VAR_0->shared)
  FUNC_0(VAR_0->info.shared.object);
}

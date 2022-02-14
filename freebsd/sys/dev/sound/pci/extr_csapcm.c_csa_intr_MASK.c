
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int channel; } ;
struct TYPE_4__ {int channel; } ;
struct csa_info {TYPE_3__ rch; TYPE_2__* binfo; TYPE_1__ pch; } ;
struct TYPE_5__ {int hisr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct csa_info *VAR_3 = VAR_2;

 if ((VAR_3->binfo->hisr & VAR_0) != 0)
  FUNC_0(VAR_3->pch.channel);
 if ((VAR_3->binfo->hisr & VAR_1) != 0)
  FUNC_0(VAR_3->rch.channel);
}

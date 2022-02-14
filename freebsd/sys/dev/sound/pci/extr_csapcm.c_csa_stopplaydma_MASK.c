
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int dma; } ;
struct TYPE_4__ {scalar_t__ dma; } ;
struct csa_info {int pctl; TYPE_1__ rch; TYPE_2__ pch; int res; } ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct csa_info *VAR_3)
{
 csa_res *VAR_4;
 u_long VAR_5;

 if (VAR_3->pch.dma) {
  VAR_4 = &VAR_3->res;
  VAR_5 = FUNC_1(VAR_4, VAR_1);
  VAR_3->pctl = VAR_5 & 0xffff0000;
  FUNC_3(VAR_4, VAR_1, VAR_5 & 0x0000ffff);
  FUNC_3(VAR_4, VAR_2, 0xffffffff);
  VAR_3->pch.dma = 0;







  if (!VAR_3->rch.dma) {
   FUNC_0(VAR_4);
   FUNC_2(VAR_4, VAR_0, 0);
  }
 }
}

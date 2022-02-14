
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int dma; } ;
struct csa_info {int pctl; TYPE_1__ pch; int res; } ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct csa_info *VAR_2)
{
 csa_res *VAR_3;
 u_long VAR_4;

 if (!VAR_2->pch.dma) {
  VAR_3 = &VAR_2->res;
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  VAR_4 &= 0x0000ffff;
  FUNC_1(VAR_3, VAR_0, VAR_4 | VAR_2->pctl);
  FUNC_1(VAR_3, VAR_1, 0x80008000);
  VAR_2->pch.dma = 1;
 }
}

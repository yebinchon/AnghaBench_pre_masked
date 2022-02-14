
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_authentication {int auth_success; int k2; int k1; scalar_t__ Lx_len; int Lx; scalar_t__ Nx_len; int Nx; scalar_t__ Mx_len; int Mx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct dpp_authentication *VAR_1)
{
 FUNC_1(VAR_0,
     "DPP: Authentication success - clear temporary keys");
 FUNC_0(VAR_1->Mx, 0, sizeof(VAR_1->Mx));
 VAR_1->Mx_len = 0;
 FUNC_0(VAR_1->Nx, 0, sizeof(VAR_1->Nx));
 VAR_1->Nx_len = 0;
 FUNC_0(VAR_1->Lx, 0, sizeof(VAR_1->Lx));
 VAR_1->Lx_len = 0;
 FUNC_0(VAR_1->k1, 0, sizeof(VAR_1->k1));
 FUNC_0(VAR_1->k2, 0, sizeof(VAR_1->k2));

 VAR_1->auth_success = 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_data {int emsk; int msk; int sres; int kc; int k_encr; int k_aut; int mk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct eap_sim_data *VAR_7, int VAR_8)
{
 if (!VAR_8) {
  FUNC_0(VAR_7->mk, 0, VAR_5);
  FUNC_0(VAR_7->k_aut, 0, VAR_3);
  FUNC_0(VAR_7->k_encr, 0, VAR_4);
 }
 FUNC_0(VAR_7->kc, 0, 3 * VAR_1);
 FUNC_0(VAR_7->sres, 0, 3 * VAR_6);
 FUNC_0(VAR_7->msk, 0, VAR_2);
 FUNC_0(VAR_7->emsk, 0, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_aka_data {int auts; int autn; int emsk; int msk; int k_re; int k_encr; int k_aut; int mk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct eap_aka_data *VAR_8, int VAR_9)
{
 if (!VAR_9) {
  FUNC_0(VAR_8->mk, 0, VAR_7);
  FUNC_0(VAR_8->k_aut, 0, VAR_2);
  FUNC_0(VAR_8->k_encr, 0, VAR_6);
  FUNC_0(VAR_8->k_re, 0, VAR_3);
 }
 FUNC_0(VAR_8->msk, 0, VAR_5);
 FUNC_0(VAR_8->emsk, 0, VAR_4);
 FUNC_0(VAR_8->autn, 0, VAR_0);
 FUNC_0(VAR_8->auts, 0, VAR_1);
}

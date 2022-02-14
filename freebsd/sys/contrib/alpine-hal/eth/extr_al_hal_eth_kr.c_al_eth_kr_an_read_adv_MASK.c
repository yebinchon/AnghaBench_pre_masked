
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {int dummy; } ;
struct al_eth_an_adv {int selector_field; int echoed_nonce; int capability; int transmitted_nonce; int technology; int fec_capability; void* next_page; void* acknowledge; void* remote_fault; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct al_hal_eth_adapter*,int ,int ,int ) ;

void FUNC_4(struct al_hal_eth_adapter *VAR_22,
      struct al_eth_an_adv *VAR_23)
{
 int16_t VAR_24;

 FUNC_2(VAR_23 != ((void*)0));


 VAR_24 = FUNC_3(VAR_22, VAR_19,
        VAR_0, VAR_1);

 VAR_23->selector_field = FUNC_1(VAR_24,
     VAR_9,
     VAR_10);

 VAR_23->echoed_nonce = FUNC_1(VAR_24,
     VAR_5,
     VAR_6);

 VAR_23->capability = FUNC_1(VAR_24,
     VAR_3,
     VAR_4);

 VAR_23->remote_fault = FUNC_0(VAR_24,
     VAR_8);

 VAR_23->acknowledge = FUNC_0(VAR_24,
     VAR_2);

 VAR_23->next_page = FUNC_0(VAR_24,
     VAR_7);


 VAR_24 = FUNC_3(VAR_22, VAR_20,
        VAR_0, VAR_1);

 VAR_23->transmitted_nonce = FUNC_1(VAR_24,
      VAR_13,
      VAR_14);

 VAR_23->technology = FUNC_1(VAR_24,
      VAR_11,
      VAR_12);


 VAR_24 = FUNC_3(VAR_22, VAR_21,
        VAR_0, VAR_1);

 VAR_23->technology |= (FUNC_1(VAR_24,
     VAR_17,
     VAR_18) << 11);

 VAR_23->fec_capability = FUNC_1(VAR_24,
      VAR_15,
      VAR_16);
}

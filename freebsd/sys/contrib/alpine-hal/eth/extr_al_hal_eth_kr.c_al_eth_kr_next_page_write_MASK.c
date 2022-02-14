
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_hal_eth_adapter {int dummy; } ;
struct al_eth_an_np {int unformatted_code_field2; int unformatted_code_field1; int next_page; int msg_page; int ack2; int toggle; int unformatted_code_field; } ;


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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct al_hal_eth_adapter*,int ,int ,int ,int ) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_15,
         struct al_eth_an_np *VAR_16)
{
 uint16_t VAR_17 = 0;

 FUNC_0(VAR_17, VAR_4,
    VAR_5,
    VAR_16->unformatted_code_field);
 FUNC_0(VAR_17, VAR_10,
    VAR_11,
    VAR_16->toggle);
 FUNC_0(VAR_17, VAR_2,
    VAR_3,
    VAR_16->ack2);
 FUNC_0(VAR_17, VAR_6,
    VAR_7,
    VAR_16->msg_page);
 FUNC_0(VAR_17, VAR_8,
    VAR_9,
    VAR_16->next_page);

 FUNC_1(VAR_15, VAR_12, VAR_0,
          VAR_1, VAR_17);

 FUNC_1(VAR_15, VAR_13, VAR_0,
          VAR_1, VAR_16->unformatted_code_field1);
 FUNC_1(VAR_15, VAR_14, VAR_0,
          VAR_1, VAR_16->unformatted_code_field2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct l2_packet_data {int rx_callback_ctx; int (* rx_callback ) (int ,int *,scalar_t__*,int) ;} ;


 int FUNC_0 (int ,int *,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct l2_packet_data *VAR_3 = VAR_1;
 u8 VAR_4[2300];
 int VAR_5;


 VAR_4[0] = 0;
 VAR_5 = 0;

 VAR_3->rx_callback(VAR_3->rx_callback_ctx, ((void*)0) ,
   VAR_4, VAR_5);
}

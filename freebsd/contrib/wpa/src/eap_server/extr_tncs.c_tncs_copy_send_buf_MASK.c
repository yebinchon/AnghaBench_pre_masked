
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tncs_data {int * tncs_message; TYPE_1__* imv_data; } ;
struct TYPE_2__ {size_t imv_send_len; int * imv_send; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 size_t FUNC_2 (int *) ;

u8 * FUNC_3(struct tncs_data *VAR_1, u8 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->imv_data[VAR_3].imv_send == ((void*)0))
   continue;

  FUNC_1(VAR_2, VAR_1->imv_data[VAR_3].imv_send,
     VAR_1->imv_data[VAR_3].imv_send_len);
  VAR_2 += VAR_1->imv_data[VAR_3].imv_send_len;
  FUNC_0(VAR_1->imv_data[VAR_3].imv_send);
  VAR_1->imv_data[VAR_3].imv_send = ((void*)0);
  VAR_1->imv_data[VAR_3].imv_send_len = 0;
 }

 if (VAR_1->tncs_message) {
  size_t VAR_4 = FUNC_2(VAR_1->tncs_message);
  FUNC_1(VAR_2, VAR_1->tncs_message, VAR_4);
  VAR_2 += VAR_4;
  FUNC_0(VAR_1->tncs_message);
  VAR_1->tncs_message = ((void*)0);
 }

 return VAR_2;
}

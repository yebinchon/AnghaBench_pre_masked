
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {TYPE_1__* imv_data; int connectionID; struct tnc_if_imv* imv; } ;
struct tnc_if_imv {struct tnc_if_imv* next; } ;
struct TYPE_2__ {scalar_t__ imv_send_len; int * imv_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tnc_if_imv*,int ,int ) ;

void FUNC_2(struct tncs_data *VAR_3)
{
 struct tnc_if_imv *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_3->imv; VAR_4; VAR_4 = VAR_4->next) {
  FUNC_1(
   VAR_4, VAR_3->connectionID, VAR_0);
  FUNC_1(
   VAR_4, VAR_3->connectionID,
   VAR_1);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(VAR_3->imv_data[VAR_5].imv_send);
  VAR_3->imv_data[VAR_5].imv_send = ((void*)0);
  VAR_3->imv_data[VAR_5].imv_send_len = 0;
 }
}

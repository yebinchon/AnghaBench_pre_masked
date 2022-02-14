
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {scalar_t__ tncs_message; TYPE_1__* imv_data; } ;
struct TYPE_2__ {scalar_t__ imv_send_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

size_t FUNC_1(struct tncs_data *VAR_1)
{
 int VAR_2;
 size_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 += VAR_1->imv_data[VAR_2].imv_send_len;
 if (VAR_1->tncs_message)
  VAR_3 += FUNC_0(VAR_1->tncs_message);
 return VAR_3;
}

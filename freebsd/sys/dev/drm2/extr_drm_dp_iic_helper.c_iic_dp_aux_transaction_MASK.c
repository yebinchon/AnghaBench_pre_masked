
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_dp_aux_data {int (* aux_ch ) (int ,int,int ,int *) ;} ;
typedef int device_t ;


 struct iic_dp_aux_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int VAR_1, uint8_t VAR_2,
    uint8_t *VAR_3)
{
 struct iic_dp_aux_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = (*VAR_4->aux_ch)(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return (VAR_5);
 return (0);
}

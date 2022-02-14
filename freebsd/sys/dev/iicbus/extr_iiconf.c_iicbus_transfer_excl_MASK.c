
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iic_msg {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct iic_msg*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

int
FUNC_4(device_t VAR_0, struct iic_msg *VAR_1, uint32_t VAR_2,
    int VAR_3)
{
 device_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_3(VAR_4, VAR_0, VAR_3);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
 FUNC_2(VAR_4, VAR_0);
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct iic_msg {size_t member_2; int * member_3; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct iic_msg*,int ) ;
 int FUNC_1 (struct iic_msg*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint32_t VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 struct iic_msg VAR_5[1] = {
     { VAR_2, &VAR_0, VAR_4, *VAR_3 },
 };

 if (FUNC_0(VAR_1, VAR_5, FUNC_1(VAR_5)) != 0)
  return (-1);

 return (0);
}

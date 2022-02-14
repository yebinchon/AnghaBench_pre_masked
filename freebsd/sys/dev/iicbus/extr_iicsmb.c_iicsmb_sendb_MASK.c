
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iic_msg {int member_2; char* member_3; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iic_msg*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, u_char VAR_2, char VAR_3)
{
 struct iic_msg VAR_4[] = {
      { VAR_2, VAR_0, 1, &VAR_3 },
 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_4);
 return (FUNC_1(VAR_5));
}

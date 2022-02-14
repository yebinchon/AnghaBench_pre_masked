
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int u_char ;
struct iic_msg {char* member_3; int member_2; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iic_msg*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, u_char VAR_2, char VAR_3, short VAR_4)
{
 uint8_t VAR_5[] = { VAR_3, VAR_4 & 0xff, VAR_4 >> 8 };
 struct iic_msg VAR_6[] = {
      { VAR_2, VAR_0, FUNC_2(VAR_5), VAR_5 },
 };
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_6);
 return (FUNC_1(VAR_7));
}

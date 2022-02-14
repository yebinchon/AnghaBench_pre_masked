
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iic_msg {int member_1; int member_2; char* member_3; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct iic_msg*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, u_char VAR_4, char VAR_5, char *VAR_6)
{
 struct iic_msg VAR_7[] = {
      { VAR_4, VAR_2 | VAR_0, 1, &VAR_5 },
      { VAR_4, VAR_1, 1, VAR_6 },
 };
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_7);
 return (FUNC_1(VAR_8));
}

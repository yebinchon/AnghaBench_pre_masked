
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef char u_char ;
struct iic_msg {char member_0; int member_1; char member_2; char* member_3; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int ,struct iic_msg*) ;
 int FUNC_1 (int) ;
 char FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, u_char VAR_6, char VAR_7, u_char VAR_8, char *VAR_9)
{
 uint8_t VAR_10[2] = { VAR_7, VAR_8 };
 struct iic_msg VAR_11[] = {
      { VAR_6, VAR_2 | VAR_1, FUNC_2(VAR_10), VAR_10 },
      { VAR_6, VAR_2 | VAR_0, VAR_8, VAR_9 },
 };
 int VAR_12;

 if (VAR_8 > VAR_4 || VAR_8 == 0)
  return (VAR_3);
 VAR_12 = FUNC_0(VAR_5, VAR_11);
 return (FUNC_1(VAR_12));
}

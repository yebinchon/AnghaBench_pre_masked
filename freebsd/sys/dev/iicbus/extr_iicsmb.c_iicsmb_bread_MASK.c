
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iic_msg {int member_0; int member_1; int member_2; char* member_3; int len; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct iic_msg*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, u_char VAR_8, char VAR_9, u_char *VAR_10, char *VAR_11)
{
 struct iic_msg VAR_12[] = {
      { VAR_8, VAR_3 | VAR_1, 1, &VAR_9 },
      { VAR_8, VAR_2 | VAR_1, 1, VAR_10 },
 };
 struct iic_msg VAR_13[] = {
      { VAR_8, VAR_2 | VAR_0, 0, VAR_11 },
 };
 device_t VAR_14 = FUNC_1(VAR_7);
 int VAR_15;


 VAR_15 = FUNC_4(VAR_14, VAR_7, VAR_4);
 if (VAR_15 == 0)
  VAR_15 = FUNC_0(VAR_7, VAR_12);
 if (VAR_15 == 0) {




  if (*VAR_10 > VAR_6 || *VAR_10 == 0)
   VAR_13[0].len = 1;
  else
   VAR_13[0].len = *VAR_10;
  VAR_15 = FUNC_0(VAR_7, VAR_13);
  if (*VAR_10 > VAR_6 || *VAR_10 == 0)
   VAR_15 = VAR_5;
 }
 (void)FUNC_3(VAR_14, VAR_7);
 return (FUNC_2(VAR_15));
}

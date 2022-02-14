
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,int) ;
 char* FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct i2c_info*,int ,int ,int,int*) ;
 int FUNC_3 (char*,size_t,char*,char const*) ;

__attribute__((used)) static void
FUNC_4(struct i2c_info *VAR_6, char *VAR_7, size_t VAR_8)
{
 const char *VAR_9;
 uint8_t VAR_10;

 FUNC_2(VAR_6, VAR_0, VAR_1, 1, &VAR_10);


 if (VAR_10 & VAR_3) {
  FUNC_2(VAR_6, VAR_0, VAR_2, 1, &VAR_10);
  VAR_9 = FUNC_0(VAR_5, VAR_10);
 } else

  VAR_9 = FUNC_1(VAR_4, VAR_10, 1);

 if (VAR_9 == ((void*)0))
  VAR_9 = "Unknown";

 FUNC_3(VAR_7, VAR_8, "%s", VAR_9);
}

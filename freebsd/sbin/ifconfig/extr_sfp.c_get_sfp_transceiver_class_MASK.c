
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct i2c_info {int dummy; } ;
typedef scalar_t__* caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,scalar_t__) ;
 char* FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct i2c_info*,int ,scalar_t__,int,scalar_t__*) ;
 int FUNC_3 (char*,size_t,char*,char const*) ;

__attribute__((used)) static void
FUNC_4(struct i2c_info *VAR_6, char *VAR_7, size_t VAR_8)
{
 const char *VAR_9;
 uint8_t VAR_10;


 FUNC_2(VAR_6, VAR_0, VAR_1, 1, &VAR_10);
 if (VAR_10 != 0)
  VAR_9 = FUNC_0(VAR_5, VAR_10);
 else {

  FUNC_2(VAR_6, VAR_0, VAR_2, 1, &VAR_10);
  VAR_9 = FUNC_1(VAR_3, VAR_10, 1);
  if (VAR_9 == ((void*)0)) {

   FUNC_2(VAR_6, VAR_0, VAR_2 + 3,
       1, (caddr_t)&VAR_10);
   VAR_9 = FUNC_1(VAR_4, VAR_10, 1);
  }
 }

 if (VAR_9 == ((void*)0))
  VAR_9 = "Unknown";

 FUNC_3(VAR_7, VAR_8, "%s", VAR_9);
}

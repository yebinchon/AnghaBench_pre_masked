
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int TW_UINT8 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static TW_INT32
FUNC_6(device_t VAR_3)
{
 static TW_UINT8 VAR_4 = 1;

 FUNC_5(3, "entered");

 if (FUNC_4(FUNC_2(VAR_3), FUNC_1(VAR_3))) {
  FUNC_0(VAR_3, VAR_1);

  if (VAR_4) {
   FUNC_3("3ware device driver for 9000 series storage "
    "controllers, version: %s\n",
    VAR_2);
   VAR_4 = 0;
  }
  return(0);
 }
 return(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, u_char VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3=7; VAR_3>=0; VAR_3--) {
  if (VAR_1&(1<<VAR_3)) {
   FUNC_1(VAR_0, VAR_2);
  } else {
   FUNC_2(VAR_0, VAR_2);
  }
 }
 FUNC_0(FUNC_3("w%02x",(int)VAR_1));
 return;
}

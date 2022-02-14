
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int capp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{
 char VAR_7[256];



 if (!(VAR_5 & VAR_1)) {
  FUNC_0(VAR_6, "No ACE support.\n");
  return (VAR_0);
 }
 FUNC_3(VAR_7, "AES-CBC", sizeof(VAR_7));





 if (VAR_5 & VAR_4) {
  FUNC_2(VAR_7, ",SHA1", sizeof(VAR_7));
  FUNC_2(VAR_7, ",SHA256", sizeof(VAR_7));
 }






 FUNC_1(VAR_6, VAR_7);
 return (0);



}

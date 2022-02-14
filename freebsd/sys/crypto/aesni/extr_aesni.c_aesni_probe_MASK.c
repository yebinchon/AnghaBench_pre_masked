
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 bool VAR_2, VAR_3;

 FUNC_0(&VAR_2, &VAR_3);
 if (!VAR_2 && !VAR_3) {
  FUNC_1(VAR_1, "No AES or SHA support.\n");
  return (VAR_0);
 } else if (VAR_2 && VAR_3)
  FUNC_2(VAR_1,
      "AES-CBC,AES-CCM,AES-GCM,AES-ICM,AES-XTS,SHA1,SHA256");
 else if (VAR_2)
  FUNC_2(VAR_1,
      "AES-CBC,AES-CCM,AES-GCM,AES-ICM,AES-XTS");
 else
  FUNC_2(VAR_1, "SHA1,SHA256");

 return (0);
}

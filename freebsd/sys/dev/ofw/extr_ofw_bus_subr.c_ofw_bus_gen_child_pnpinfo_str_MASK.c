
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,size_t) ;

int
FUNC_4(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{

 *VAR_2 = '\0';
 if (!FUNC_2(VAR_1))
  return (0);

 if (FUNC_1(VAR_1) != ((void*)0)) {
  FUNC_3(VAR_2, "name=", VAR_3);
  FUNC_3(VAR_2, FUNC_1(VAR_1), VAR_3);
 }

 if (FUNC_0(VAR_1) != ((void*)0)) {
  FUNC_3(VAR_2, " compat=", VAR_3);
  FUNC_3(VAR_2, FUNC_0(VAR_1), VAR_3);
 }

 return (0);
}

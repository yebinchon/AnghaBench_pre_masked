
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int ,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,void const*,int,int*,int *) ;
 int VAR_7 ;
 int FUNC_4 (intptr_t,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,void const*,size_t) ;

int
FUNC_13(const void *VAR_8, size_t VAR_9, char **VAR_10)
{

 char VAR_11[32];
 int VAR_12;
 *VAR_10 = ((void*)0);
 FUNC_8(VAR_11, "/tmp/eventtmp.XXXXXX");



 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12 == -1)
  return (-1);
 if (FUNC_12(VAR_12, VAR_8, VAR_9) != (int)VAR_9) {
  FUNC_5(VAR_12);
  return (-1);
 }
 FUNC_6(VAR_12, 0, VAR_6);

 FUNC_11(VAR_11);
 return (VAR_12);
}

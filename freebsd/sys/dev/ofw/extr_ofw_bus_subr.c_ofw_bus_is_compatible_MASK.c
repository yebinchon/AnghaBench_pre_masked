
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,char const*) ;

int
FUNC_4(device_t VAR_0, const char *VAR_1)
{
 phandle_t VAR_2;
 const char *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_1(VAR_0)) == ((void*)0))
  return (0);

 if ((VAR_2 = FUNC_2(VAR_0)) == -1)
  return (0);


 if ((VAR_4 = FUNC_0(VAR_2, "compatible")) <= 0)
  return (0);

 return (FUNC_3(VAR_3, VAR_4, VAR_1));
}

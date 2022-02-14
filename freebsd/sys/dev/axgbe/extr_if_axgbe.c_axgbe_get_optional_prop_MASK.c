
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int*,size_t) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, phandle_t VAR_2, const char *VAR_3,
    int *VAR_4, size_t VAR_5)
{

 if (!FUNC_1(VAR_2, VAR_3))
  return (-1);

 if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5) <= 0) {
  FUNC_2(VAR_1,"%s property is invalid\n", VAR_3);
  return (VAR_0);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_devinfo {int dummy; } ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct siba_devinfo*) ;
 struct siba_devinfo* FUNC_3 (int *) ;

__attribute__((used)) static device_t
FUNC_4(device_t VAR_0, u_int VAR_1, const char *VAR_2, int VAR_3)
{
 struct siba_devinfo *VAR_4;
 device_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 if ((VAR_4 = FUNC_3(VAR_0)) == ((void*)0)) {
  FUNC_1(VAR_0, VAR_5);
  return (((void*)0));
 }

 FUNC_2(VAR_5, VAR_4);

 return (VAR_5);
}

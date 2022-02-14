
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siba_devinfo {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct siba_devinfo* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,struct siba_devinfo*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1)
{
 struct siba_devinfo *VAR_2;
 int VAR_3;

 if (FUNC_3(VAR_1) != VAR_0)
  FUNC_0(FUNC_3(VAR_0), VAR_1);

 VAR_2 = FUNC_2(VAR_1);


 if ((VAR_3 = FUNC_1(VAR_0, VAR_1)))
  return (VAR_3);


 FUNC_4(VAR_0, VAR_2);

 return (0);
}

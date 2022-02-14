
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shift ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 phandle_t VAR_1;
 pcell_t VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if ((FUNC_0(VAR_1, "reg-shift", &VAR_2, sizeof(VAR_2))) <= 0)
  VAR_2 = 2;
 return ((int)VAR_2);
}

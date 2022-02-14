
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscon {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (struct syscon*,int ) ;
 int FUNC_5 (struct syscon*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,char*,struct syscon**) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 phandle_t VAR_2;
 struct syscon *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_2, "rockchip,grf") &&
     FUNC_6(VAR_1, VAR_2,
     "rockchip,grf", &VAR_3) != 0) {
  FUNC_1(VAR_1, "cannot get grf driver handle\n");
  return (VAR_0);
 }
 return (0);
}

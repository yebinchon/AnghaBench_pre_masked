
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_caps {int nvram_src; } ;
typedef int device_t ;


 struct chipc_caps* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct chipc_caps *VAR_3;
 device_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 VAR_3 = FUNC_0(VAR_4);


 if (!FUNC_1(VAR_3->nvram_src))
  return (VAR_1);


 if ((VAR_5 = FUNC_2(VAR_2)) > 0)
  return (VAR_5);

 return (VAR_0);
}

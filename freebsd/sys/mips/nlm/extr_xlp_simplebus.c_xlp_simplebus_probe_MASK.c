
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{

 if (!FUNC_4(VAR_2))
  return (VAR_1);






 if (!(FUNC_3(VAR_2, "simple-bus") &&
     FUNC_2(VAR_2, "ranges")) &&
     (FUNC_1(VAR_2) == ((void*)0) || FUNC_5(FUNC_1(VAR_2),
      "soc") != 0))
  return (VAR_1);

 FUNC_6();
 FUNC_0(VAR_2, "XLP SoC bus");

 return (VAR_0);
}

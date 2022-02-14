
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char const*) ;

int
FUNC_6(device_t VAR_0, const char *VAR_1)
{
 phandle_t VAR_2;
 int VAR_3;

 FUNC_2();
 VAR_2 = FUNC_4(VAR_0);
 FUNC_0(FUNC_1(VAR_2), VAR_0);
 VAR_3 = FUNC_5(VAR_0, VAR_2, VAR_1);
 FUNC_3();

 return (VAR_3);
}

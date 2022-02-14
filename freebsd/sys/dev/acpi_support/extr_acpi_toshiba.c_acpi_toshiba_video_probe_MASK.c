
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,char**,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 static char *VAR_2[] = { "TOS6201", ((void*)0) };
 int VAR_3;

 if (FUNC_1("toshiba") ||
     FUNC_3(VAR_1) != 0)
  return (VAR_0);

 FUNC_4(VAR_1);
 VAR_3 = FUNC_0(FUNC_2(VAR_1), VAR_1, VAR_2, ((void*)0));
 if (VAR_3 <= 0)
  FUNC_5(VAR_1, "Toshiba Video");
 return (VAR_3);
}

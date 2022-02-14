
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,char**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;

int
FUNC_4(device_t VAR_3)
{
 static char *VAR_4[] = {"IPI0001", ((void*)0)};
 int VAR_5;

 if (VAR_2)
  return (VAR_0);

 if (FUNC_1("ipmi"))
  return (VAR_1);
 VAR_5 = FUNC_0(FUNC_2(VAR_3), VAR_3, VAR_4, ((void*)0));
 if (VAR_5 <= 0)
  FUNC_3(VAR_3, "IPMI System Interface");

 return (VAR_5);
}

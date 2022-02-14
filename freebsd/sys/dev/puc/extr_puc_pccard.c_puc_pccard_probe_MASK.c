
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const**) ;
 int FUNC_1 (int ,char const**) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_5)
  return(VAR_5);
 VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_5)
  return(VAR_5);
 if (!FUNC_3(VAR_3, "PCMCIA") && !FUNC_3(VAR_4, "RS-COM 2P"))
  return (FUNC_2(VAR_2, &VAR_1));

 return (VAR_0);
}

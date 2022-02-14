
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,size_t,char*,char const*) ;

int
FUNC_2(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 FUNC_1(VAR_2, VAR_3, "MIB module %s not loaded: no libsmi support",
     VAR_1);
 return (-1);

}

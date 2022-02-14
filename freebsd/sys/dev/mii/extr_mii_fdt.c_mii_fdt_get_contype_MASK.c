
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int phandle_t ;
typedef int mii_contype_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (char*) ;

mii_contype_t
FUNC_2(phandle_t VAR_1)
{
 char VAR_2[32];

 if (FUNC_0(VAR_1, "phy-mode", VAR_2, sizeof(VAR_2)) <= 0 &&
     FUNC_0(VAR_1, "phy-connection-type", VAR_2, sizeof(VAR_2)) <= 0) {
                return (VAR_0);
 }
 return (FUNC_1(VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifstat {int ifs_name; } ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct ifstat*) ;
 int FUNC_1 (int ,char const*,int) ;

int
FUNC_2(ifconfig_handle_t *VAR_2, const char *VAR_3,
    struct ifstat *VAR_4)
{
 FUNC_1(VAR_4->ifs_name, VAR_3, sizeof(VAR_4->ifs_name));
 return (FUNC_0(VAR_2, VAR_0, VAR_1, VAR_4));
}

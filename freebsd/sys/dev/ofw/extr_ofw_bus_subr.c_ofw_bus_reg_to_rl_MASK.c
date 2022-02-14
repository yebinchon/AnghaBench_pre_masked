
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int ,struct resource_list*,char*) ;

int
FUNC_1(device_t VAR_0, phandle_t VAR_1, pcell_t VAR_2, pcell_t VAR_3,
    struct resource_list *VAR_4)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, "reg"));
}

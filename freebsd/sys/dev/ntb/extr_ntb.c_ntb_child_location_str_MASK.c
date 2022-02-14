
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {int function; } ;
typedef int device_t ;


 struct ntb_child* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct ntb_child *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_3, "function=%d", VAR_4->function);
 return (0);
}

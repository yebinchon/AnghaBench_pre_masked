
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_handle_t ;
typedef int device ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

gpio_handle_t
FUNC_2(unsigned int VAR_0)
{
 char VAR_1[16];

 FUNC_1(VAR_1, sizeof(VAR_1), "/dev/gpioc%u", VAR_0);

 return (FUNC_0(VAR_1));
}

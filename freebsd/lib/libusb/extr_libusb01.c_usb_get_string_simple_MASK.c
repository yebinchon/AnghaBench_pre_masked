
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;


 int FUNC_0 (void*,int,char*,size_t) ;
 int FUNC_1 (char*) ;

int
FUNC_2(usb_dev_handle * VAR_0, int VAR_1,
    char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 if (VAR_0 == ((void*)0))
  return (-1);

 if (VAR_3 > 65535)
  VAR_3 = 65535;

 VAR_4 = FUNC_0((void *)VAR_0,
     VAR_1, VAR_2, VAR_3);

 if (VAR_4)
  return (-1);

 return (FUNC_1(VAR_2));
}

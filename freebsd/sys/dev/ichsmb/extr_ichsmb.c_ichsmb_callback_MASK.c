
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;



int
FUNC_1(device_t VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0("index=%d how=%d\n", VAR_2, VAR_3 ? *(int *)VAR_3 : -1);
 switch (VAR_2) {
 case 128:
  break;
 case 129:
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }
 FUNC_0("smb_error=%d\n", VAR_4);
 return (VAR_4);
}

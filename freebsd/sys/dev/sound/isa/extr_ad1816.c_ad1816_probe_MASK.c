
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
     char *VAR_3 = ((void*)0);
     u_int32_t VAR_4 = FUNC_1(VAR_2);

     switch (VAR_4) {
     case 0x80719304:
   VAR_3 = "AD1816";
   break;
     case 0x50719304:
   VAR_3 = "AD1815";
   break;
     }

     if (VAR_3) {
  FUNC_0(VAR_2, VAR_3);
  return VAR_0;
     }
     return VAR_1;
}

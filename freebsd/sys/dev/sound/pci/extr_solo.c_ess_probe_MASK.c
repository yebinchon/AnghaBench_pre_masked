
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 char *VAR_3 = ((void*)0);
 u_int32_t VAR_4;

 VAR_4 = (FUNC_2(VAR_2) << 16) | FUNC_3(VAR_2);
 switch (FUNC_1(VAR_2)) {
 case 0x1969125d:
  if (VAR_4 == 0x8888125d)
   VAR_3 = "ESS Solo-1E";
  else if (VAR_4 == 0x1818125d)
   VAR_3 = "ESS Solo-1";
  else
   VAR_3 = "ESS Solo-1 (unknown vendor)";
  break;
 }

 if (VAR_3)
  FUNC_0(VAR_2, VAR_3);
 return VAR_3 ? VAR_0 : VAR_1;
}

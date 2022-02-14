
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 uint32_t VAR_4;
 char VAR_5[64];

 if (FUNC_4("amdsmn", 0))
  return (VAR_1);
 if (!FUNC_1(FUNC_2(VAR_3), ((void*)0)))
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_2);

 switch (VAR_4) {
 case 0x15:
 case 0x17:
  break;
 default:
  return (VAR_1);
 }
 FUNC_5(VAR_5, sizeof(VAR_5), "AMD Family %xh System Management Network",
     VAR_4);
 FUNC_3(VAR_3, VAR_5);

 return (VAR_0);
}

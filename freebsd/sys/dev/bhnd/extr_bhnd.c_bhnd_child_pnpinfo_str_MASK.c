
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__,char*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,size_t,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 if (FUNC_4(VAR_1) != VAR_0) {
  return (FUNC_0(FUNC_4(VAR_0), VAR_1,
      VAR_2, VAR_3));
 }

 FUNC_5(VAR_2, VAR_3, "vendor=0x%hx device=0x%hx rev=0x%hhx",
     FUNC_3(VAR_1), FUNC_1(VAR_1),
     FUNC_2(VAR_1));

 return (0);
}

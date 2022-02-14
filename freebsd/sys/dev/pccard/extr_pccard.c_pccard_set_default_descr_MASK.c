
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int ,char const**) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 scalar_t__ FUNC_6 (int ,char const**) ;
 int FUNC_7 (char*,int,char*,int,int) ;
 int FUNC_8 (char*,char*,char const*,char const*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 const char *VAR_3, *VAR_4;
 uint32_t VAR_5, VAR_6;
 char *VAR_7;

 if (FUNC_6(VAR_2, &VAR_3))
  return (0);
 if (FUNC_4(VAR_2, &VAR_4))
  return (0);
 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
  VAR_7 = FUNC_2(FUNC_9(VAR_3) + FUNC_9(VAR_4) + 2, VAR_0,
      VAR_1);
  FUNC_8(VAR_7, "%s %s", VAR_3, VAR_4);
  FUNC_0(VAR_2, VAR_7);
  FUNC_1(VAR_7, VAR_0);
 } else {
  if (FUNC_5(VAR_2, &VAR_5))
   return (0);
  if (FUNC_3(VAR_2, &VAR_6))
   return (0);
  VAR_7 = FUNC_2(100, VAR_0, VAR_1);
  FUNC_7(VAR_7, 100, "vendor=%#x product=%#x", VAR_5, VAR_6);
  FUNC_0(VAR_2, VAR_7);
  FUNC_1(VAR_7, VAR_0);
 }
 return (0);
}

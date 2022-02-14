
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 const char *VAR_3;

 if (FUNC_3("agp", FUNC_1(VAR_2)))
  return (VAR_1);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2, VAR_3);
  return (VAR_0);
 }

 return (VAR_1);
}

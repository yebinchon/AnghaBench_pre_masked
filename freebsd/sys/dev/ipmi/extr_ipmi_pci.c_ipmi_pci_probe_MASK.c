
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 const char *VAR_4;

 if (VAR_2)
  return (VAR_1);

 VAR_4 = FUNC_1(FUNC_3(VAR_3), FUNC_2(VAR_3));
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_3, VAR_4);
  return (VAR_0);
 }

 return (VAR_1);
}

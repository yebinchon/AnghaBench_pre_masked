
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 const char *VAR_3, *VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_3("SUNW,CS4231", VAR_4) == 0 ||
     (VAR_3 != ((void*)0) && FUNC_3("SUNW,CS4231", VAR_3) == 0)) {
  FUNC_0(VAR_2, "Sun Audiocs");
  return (VAR_0);
 }
 return (VAR_1);
}

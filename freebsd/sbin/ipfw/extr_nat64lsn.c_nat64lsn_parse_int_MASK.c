
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static uint32_t
FUNC_2(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 uint32_t VAR_4;

 VAR_4 = (uint32_t)FUNC_1(VAR_1, &VAR_3, 10);
 if (*VAR_3 != '\0')
  FUNC_0(VAR_0, "Invalid %s value: %s\n", VAR_2, VAR_1);
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct config_type_validator {int dummy; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*,char const*) ;
 int * FUNC_2 (int const*,char const*,size_t*) ;

__attribute__((used)) static int
FUNC_3(
   const struct config_type_validator * VAR_2,
   const nvlist_t *VAR_3, const char *VAR_4)
{
 const uint8_t *VAR_5;
 size_t VAR_6;

 if (!FUNC_1(VAR_3, VAR_4))
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_6);

 if (VAR_6 != VAR_1)
  return (VAR_0);

 if (FUNC_0(VAR_5))
  return (VAR_0);

 return (0);
}

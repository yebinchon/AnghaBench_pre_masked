
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct config_type_validator {scalar_t__ limit; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,char const*) ;
 scalar_t__ FUNC_1 (int const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const struct config_type_validator * VAR_1,
   const nvlist_t *VAR_2, const char *VAR_3)
{
 uint64_t VAR_4;

 if (!FUNC_0(VAR_2, VAR_3))
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 > VAR_1->limit)
  return (VAR_0);

 return (0);
}

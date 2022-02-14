
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct config_type_validator {scalar_t__ limit; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

__attribute__((used)) static int
FUNC_2(const struct config_type_validator * VAR_2,
   const nvlist_t *VAR_3)
{
 uint64_t VAR_4;

 if (!FUNC_0(VAR_3, VAR_0))
  return (VAR_1);

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4 > VAR_2->limit)
  return (VAR_1);
 return (0);
}

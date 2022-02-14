
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int *) ;
 int VAR_0 ;

int32_t
FUNC_2(const uuid_t *VAR_1, const uuid_t *VAR_2, uint32_t *VAR_3)
{

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_0;


 if (VAR_1 == VAR_2)
  return (1);
 if (VAR_1 == ((void*)0))
  return (FUNC_1(VAR_2, ((void*)0)));
 if (VAR_2 == ((void*)0))
  return (FUNC_1(VAR_1, ((void*)0)));


 return ((FUNC_0(VAR_1, VAR_2, sizeof(uuid_t))) ? 0 : 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static const uint32_t *
FUNC_3(netdissect_options *VAR_0,
               const uint32_t *VAR_1, int VAR_2)
{
 if (VAR_2 > 1)
  FUNC_0((VAR_0, " PRE:"));
 if (!(VAR_1 = FUNC_2(VAR_0, VAR_1, VAR_2)))
  return (0);

 if (VAR_2)
  FUNC_0((VAR_0, " POST:"));
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}

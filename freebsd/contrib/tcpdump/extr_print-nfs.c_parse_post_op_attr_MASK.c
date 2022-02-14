
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 int VAR_0 ;
 int const* FUNC_2 (int *,int const*,int,int) ;

__attribute__((used)) static const uint32_t *
FUNC_3(netdissect_options *VAR_1,
                   const uint32_t *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2[0]);
 if (!FUNC_0(&VAR_2[0]))
  return (VAR_2 + 1);
 VAR_2++;
 if (VAR_3) {
  return FUNC_2(VAR_1, VAR_2, VAR_3, 1);
 } else
  return (VAR_2 + (VAR_0 / sizeof (uint32_t)));
trunc:
 return (((void*)0));
}

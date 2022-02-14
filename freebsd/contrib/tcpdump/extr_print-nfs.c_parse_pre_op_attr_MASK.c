
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int const* FUNC_3 (int *,int const*) ;

__attribute__((used)) static const uint32_t *
FUNC_4(netdissect_options *VAR_0,
                  const uint32_t *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1[0]);
 if (!FUNC_0(&VAR_1[0]))
  return (VAR_1 + 1);
 VAR_1++;
 FUNC_2(*VAR_1, 24);
 if (VAR_2 > 1) {
  return FUNC_3(VAR_0, VAR_1);
 } else {

  return (VAR_1 + 6);
 }
trunc:
 return (((void*)0));
}

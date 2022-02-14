
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static const uint32_t *
FUNC_4(netdissect_options *VAR_1,
        register const uint32_t *VAR_2, int VAR_3)
{
 u_int VAR_4;

 if (VAR_3) {
  FUNC_1(VAR_2[0]);
  VAR_4 = FUNC_0(VAR_2) / 4;
  VAR_2++;
 } else
  VAR_4 = VAR_0 / 4;

 if (FUNC_2(*VAR_2, VAR_4 * sizeof(*VAR_2))) {
  FUNC_3(VAR_1, VAR_2, VAR_4);
  return (VAR_2 + VAR_4);
 }
trunc:
 return (((void*)0));
}

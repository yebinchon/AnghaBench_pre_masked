
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_2,
                      const uint32_t *VAR_3)
{
 FUNC_1((VAR_2, " BEARER_CAP(%s%s)",
           FUNC_0(VAR_3) & VAR_1 ? "D" : "",
           FUNC_0(VAR_3) & VAR_0 ? "A" : ""));
}

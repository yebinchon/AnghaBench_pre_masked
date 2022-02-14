
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0,
          const u_char *VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_1+0);
 uint16_t VAR_3 = FUNC_0(VAR_1+2);
 FUNC_1((VAR_0, "; BTP Dst:%u Src:%u", VAR_2, VAR_3));
}

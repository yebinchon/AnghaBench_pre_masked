
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct udphdr {int dummy; } ;
struct ip {int dummy; } ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ip const*,int const*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(netdissect_options *VAR_1, register const struct ip *VAR_2,
       register const struct udphdr *VAR_3,
       register u_int VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, (const uint8_t *)(const void *)VAR_3, VAR_4, VAR_4,
    VAR_0);
}

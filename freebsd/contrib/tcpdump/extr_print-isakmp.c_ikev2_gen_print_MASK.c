
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_char ;
struct isakmp_gen {int len; int critical; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int e ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct isakmp_gen const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct isakmp_gen*,struct isakmp_gen const*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static const u_char *
FUNC_7(netdissect_options *VAR_0, u_char VAR_1,
  const struct isakmp_gen *VAR_2)
{
 struct isakmp_gen VAR_3;

 FUNC_1(*VAR_2);
 FUNC_3(&VAR_3, VAR_2, sizeof(VAR_3));
 FUNC_4(VAR_0, FUNC_2(VAR_1), VAR_3.critical);

 FUNC_0((VAR_0," len=%d", FUNC_5(VAR_3.len) - 4));
 if (2 < VAR_0->ndo_vflag && 4 < FUNC_5(VAR_3.len)) {

  FUNC_0((VAR_0," "));
  if (!FUNC_6(VAR_0, (const uint8_t *)(VAR_2 + 1), FUNC_5(VAR_3.len) - 4))
   goto trunc;
 }
 return (const u_char *)VAR_2 + FUNC_5(VAR_3.len);
trunc:
 FUNC_0((VAR_0," [|%s]", FUNC_2(VAR_1)));
 return ((void*)0);
}

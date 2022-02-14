
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_5__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int const*,int,int ) ;

__attribute__((used)) static const uint32_t *
FUNC_5(netdissect_options *VAR_0,
        register const uint32_t *VAR_1)
{
 register uint32_t VAR_2;
 register const u_char *VAR_3;


 FUNC_1(*VAR_1);


 VAR_2 = *VAR_1++;
 FUNC_3(VAR_2);

 FUNC_2(*VAR_1, ((VAR_2 + 3) & ~3));

 VAR_3 = (const u_char *)VAR_1;

 VAR_1 += ((VAR_2 + 3) & ~3) / sizeof(*VAR_1);
 FUNC_0((VAR_0, "\""));
 if (FUNC_4(VAR_0, VAR_3, VAR_2, VAR_0->ndo_snapend)) {
  FUNC_0((VAR_0, "\""));
  goto trunc;
 }
 FUNC_0((VAR_0, "\""));

 return (VAR_1);
trunc:
 return ((void*)0);
}

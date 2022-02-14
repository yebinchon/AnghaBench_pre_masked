
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,int,int ) ;

__attribute__((used)) static const u_char *
FUNC_2(netdissect_options *VAR_0,
          register const u_char *VAR_1)
{
 register u_int VAR_2;

 if (!FUNC_0(*VAR_1, 1))
  return (((void*)0));
 VAR_2 = *VAR_1++;
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->ndo_snapend))
  return (((void*)0));
 return (VAR_1 + VAR_2);
}

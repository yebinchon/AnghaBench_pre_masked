
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int const*) ;
 int * FUNC_2 (TYPE_1__*,int const*,int const*) ;

void
FUNC_3(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{
 const u_char *VAR_3 = FUNC_1(VAR_0->ndo_snapend, VAR_1 + VAR_2);

 FUNC_0((VAR_0, ": ZMTP/1.0"));
 while (VAR_1 < VAR_3)
  VAR_1 = FUNC_2(VAR_0, VAR_1, VAR_3);
}

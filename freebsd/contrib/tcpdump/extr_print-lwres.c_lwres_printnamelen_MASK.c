
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,int ,char const*) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0,
                   const char *VAR_1)
{
 uint16_t VAR_2;
 int VAR_3;

 if (VAR_1 + 2 > (const char *)VAR_0->ndo_snapend)
  goto trunc;
 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1 + 2);
 if (VAR_3 < 0)
  goto trunc;
 return 2 + VAR_3;

  trunc:
 return -1;
}

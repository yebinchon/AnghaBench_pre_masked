
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0,
                size_t VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_2;

 if (VAR_3 + VAR_1 + 1 > (const char *)VAR_0->ndo_snapend)
  goto trunc;

 FUNC_0((VAR_0, " "));
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_0, *VAR_3++);
 VAR_3++;

 return VAR_3 - VAR_2;

  trunc:
 return -1;
}

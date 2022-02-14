
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0,
                  const char *VAR_1)
{
 const char *VAR_2;
 uint16_t VAR_3;
 int VAR_4;

 VAR_2 = VAR_1;
 if (VAR_2 + 2 > (const char *)VAR_0->ndo_snapend)
  goto trunc;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_2 + 2 + VAR_3 > (const char *)VAR_0->ndo_snapend)
  goto trunc;
 VAR_2 += 2;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1((VAR_0, "%02x", *VAR_2++));
 return VAR_2 - VAR_1;

  trunc:
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const) ;
 int * FUNC_2 (TYPE_1__*,int const*,int) ;
 int * FUNC_3 (TYPE_1__*,int const*,int*) ;

__attribute__((used)) static const uint32_t *
FUNC_4(netdissect_options *VAR_0,
                const uint32_t *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!(VAR_1 = FUNC_3(VAR_0, VAR_1, &VAR_3)))
  return (0);
 if (VAR_0->ndo_vflag)
  FUNC_0((VAR_0, " POST:"));
 if (!(VAR_1 = FUNC_2(VAR_0, VAR_1, VAR_2)))
  return (0);
 if (VAR_3)
  return VAR_1;
 if (VAR_0->ndo_vflag) {
  FUNC_1(VAR_1[1]);
  FUNC_0((VAR_0, " verf %08x%08x", VAR_1[0], VAR_1[1]));
  VAR_1 += 2;
 }
 return VAR_1;
trunc:
 return (((void*)0));
}

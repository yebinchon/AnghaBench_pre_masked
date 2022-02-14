
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 int * FUNC_3 (TYPE_1__*,int const*,int) ;
 int * FUNC_4 (TYPE_1__*,int const*,int) ;
 int * FUNC_5 (TYPE_1__*,int const*,int) ;
 int * FUNC_6 (TYPE_1__*,int const*,int*) ;

__attribute__((used)) static const uint32_t *
FUNC_7(netdissect_options *VAR_0,
                 const uint32_t *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!(VAR_1 = FUNC_6(VAR_0, VAR_1, &VAR_3)))
  return (0);
 if (VAR_3)
  VAR_1 = FUNC_4(VAR_0, VAR_1, VAR_2);
 else {
  FUNC_2(VAR_1[0]);
  if (!FUNC_0(&VAR_1[0]))
   return (VAR_1 + 1);
  VAR_1++;
  if (!(VAR_1 = FUNC_5(VAR_0, VAR_1, 1)))
   return (0);
  if (VAR_2) {
   if (!(VAR_1 = FUNC_3(VAR_0, VAR_1, VAR_2)))
    return (0);
   if (VAR_0->ndo_vflag > 1) {
    FUNC_1((VAR_0, " dir attr:"));
    VAR_1 = FUNC_4(VAR_0, VAR_1, VAR_2);
   }
  }
 }
 return (VAR_1);
trunc:
 return (((void*)0));
}

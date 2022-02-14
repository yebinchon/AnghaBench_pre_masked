
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dsa_featureflags; } ;
typedef TYPE_1__ dmu_sendarg_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int const*) ;

 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static boolean_t
FUNC_3(dmu_sendarg_t *VAR_5, const blkptr_t *VAR_6)
{
 if (!FUNC_2(VAR_6))
  return (VAR_0);




 if ((FUNC_1(VAR_6) >= VAR_4 &&
     !(VAR_5->dsa_featureflags & VAR_3)))
  return (VAR_0);




 switch (FUNC_0(VAR_6)) {
 case 128:
  if (VAR_5->dsa_featureflags & VAR_2)
   return (VAR_1);
  break;
 default:
  return (VAR_0);
 }
 return (VAR_0);
}

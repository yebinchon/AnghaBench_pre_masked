
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sa_family_t ;
typedef TYPE_1__* iffam_p ;
struct TYPE_4__ {scalar_t__ family; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static __inline iffam_p
FUNC_0(sa_family_t VAR_2)
{
 iffam_p VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_3->family == VAR_2)
   return (VAR_3);
 }
 return (((void*)0));
}

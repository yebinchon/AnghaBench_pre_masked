
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ pm_type; int pm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static __inline boolean_t
FUNC_2(pmap_t VAR_6, pt_entry_t VAR_7)
{

 if (!FUNC_1(VAR_6))
  return (VAR_5);

 FUNC_0(VAR_6->pm_type == VAR_4, ("invalid pm_type %d", VAR_6->pm_type));






 if ((VAR_7 & VAR_1) != 0)
  return (VAR_2);




 if ((VAR_7 & VAR_0) == 0 ||
     ((VAR_6->pm_flags & VAR_3) != 0))
  return (VAR_5);
 else
  return (VAR_2);
}

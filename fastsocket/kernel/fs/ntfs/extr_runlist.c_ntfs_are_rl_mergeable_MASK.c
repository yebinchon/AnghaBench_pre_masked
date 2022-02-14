
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lcn; scalar_t__ vcn; scalar_t__ length; } ;
typedef TYPE_1__ runlist_element ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(runlist_element *VAR_2,
  runlist_element *VAR_3)
{
 FUNC_0(!VAR_2);
 FUNC_0(!VAR_3);


 if ((VAR_2->lcn == VAR_1) && (VAR_3->lcn == VAR_1))
  return 1;

 if ((VAR_2->vcn + VAR_2->length) != VAR_3->vcn)
  return 0;

 if ((VAR_2->lcn >= 0) && (VAR_3->lcn >= 0) &&
   ((VAR_2->lcn + VAR_2->length) == VAR_3->lcn))
  return 1;

 if ((VAR_2->lcn == VAR_0) && (VAR_3->lcn == VAR_0))
  return 1;

 return 0;
}

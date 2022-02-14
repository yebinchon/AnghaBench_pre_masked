
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_9__ {scalar_t__ pm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

int
FUNC_5(pmap_t VAR_4, pmap_t VAR_5)
{
 int VAR_6;

 if (VAR_4->pm_type != VAR_5->pm_type ||
     VAR_4->pm_type != VAR_2 ||
     (VAR_3 & VAR_0) == 0)
  return (0);
 for (;;) {
  if (VAR_4 < VAR_5) {
   FUNC_0(VAR_4);
   FUNC_0(VAR_5);
  } else {
   FUNC_0(VAR_5);
   FUNC_0(VAR_4);
  }
  VAR_6 = FUNC_2(VAR_4, VAR_5);

  if (VAR_6 == VAR_1)
   FUNC_3(VAR_4);
  FUNC_1(VAR_5);
  FUNC_1(VAR_4);
  if (VAR_6 != VAR_1)
   break;
  FUNC_4(((void*)0));
 }
 return (VAR_6);
}

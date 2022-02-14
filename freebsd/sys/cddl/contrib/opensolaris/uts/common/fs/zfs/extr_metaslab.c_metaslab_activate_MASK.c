
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int ms_weight; int ms_activation_weight; int ms_loaded; int ms_group; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,int,int) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(metaslab_t *VAR_2, int VAR_3, uint64_t VAR_4)
{
 FUNC_0(FUNC_1(&VAR_2->ms_lock));

 if ((VAR_2->ms_weight & VAR_1) == 0) {
  int VAR_5 = FUNC_4(VAR_2);
  if (VAR_5 != 0) {
   FUNC_3(VAR_2->ms_group, VAR_2, 0);
   return (VAR_5);
  }
  if ((VAR_2->ms_weight & VAR_1) != 0) {




   return (VAR_0);
  }
  if ((VAR_5 = FUNC_2(VAR_2->ms_group, VAR_2,
      VAR_3, VAR_4)) != 0) {
   return (VAR_5);
  }

  VAR_2->ms_activation_weight = VAR_2->ms_weight;
  FUNC_3(VAR_2->ms_group, VAR_2,
      VAR_2->ms_weight | VAR_4);
 }
 FUNC_0(VAR_2->ms_loaded);
 FUNC_0(VAR_2->ms_weight & VAR_1);

 return (0);
}

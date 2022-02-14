
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int dpr_stop; int dpr_lock; int dpr_cv; } ;
typedef TYPE_1__ dt_proc_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(dt_proc_t *VAR_1, uint8_t VAR_2)
{
 FUNC_1(FUNC_0(&VAR_1->dpr_lock));
 FUNC_1(VAR_2 != VAR_0);

 if (VAR_1->dpr_stop & VAR_2) {
  VAR_1->dpr_stop |= VAR_0;
  VAR_1->dpr_stop &= ~VAR_2;

  (void) FUNC_4(&VAR_1->dpr_cv);






  FUNC_2(VAR_1);

  while (VAR_1->dpr_stop & VAR_0)
   (void) FUNC_5(&VAR_1->dpr_cv, &VAR_1->dpr_lock);

  FUNC_3(VAR_1);
 }
}

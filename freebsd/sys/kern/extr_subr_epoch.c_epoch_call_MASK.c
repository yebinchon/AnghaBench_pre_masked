
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * epoch_t ;
typedef TYPE_1__* epoch_record_t ;
typedef scalar_t__ epoch_context_t ;
typedef int ck_epoch_entry_t ;
typedef int ck_epoch_cb_t ;
struct TYPE_3__ {int er_record; } ;


 int* FUNC_0 (int ) ;
 int FUNC_1 (void (*) (scalar_t__)) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_6 (int *) ;
 int VAR_1 ;

void
FUNC_7(epoch_t VAR_2, epoch_context_t VAR_3, void (*VAR_4) (epoch_context_t))
{
 epoch_record_t VAR_5;
 ck_epoch_entry_t *VAR_6;

 VAR_6 = (void *)VAR_3;

 FUNC_1(VAR_4);

 if (FUNC_2(VAR_2 == ((void*)0)))
  goto boottime;

 if (FUNC_2(VAR_1 < 2))
  goto boottime;


 FUNC_4();
 *FUNC_0(VAR_0) += 1;
 VAR_5 = FUNC_6(VAR_2);
 FUNC_3(&VAR_5->er_record, VAR_6, (ck_epoch_cb_t *)VAR_4);
 FUNC_5();
 return;
boottime:
 VAR_4(VAR_3);
}

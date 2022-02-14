
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_17__ {scalar_t__ p_stat; int p_flag; int p_lock; TYPE_13__* p_parent; } ;
typedef TYPE_2__ proc_t ;
struct TYPE_18__ {int ftp_enabled; scalar_t__ ftp_id; int ftp_ntps; int ftp_pid; TYPE_1__* ftp_prov; } ;
typedef TYPE_3__ fasttrap_probe_t ;
typedef scalar_t__ dtrace_id_t ;
struct TYPE_16__ {scalar_t__ ftp_retired; int ftp_mtx; int ftp_rcount; } ;
struct TYPE_15__ {int p_flag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_13__* VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int,TYPE_2__**) ;
 int VAR_9 ;
 TYPE_2__* FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14(void *VAR_10, dtrace_id_t VAR_11, void *VAR_12)
{
 fasttrap_probe_t *VAR_13 = VAR_12;
 proc_t *VAR_14 = ((void*)0);
 int VAR_15, VAR_16;

 FUNC_0(VAR_13 != ((void*)0));
 FUNC_0(!VAR_13->ftp_enabled);
 FUNC_0(VAR_11 == VAR_13->ftp_id);
 FUNC_7(&VAR_13->ftp_prov->ftp_mtx);
 VAR_13->ftp_prov->ftp_rcount++;
 FUNC_8(&VAR_13->ftp_prov->ftp_mtx);






 if (VAR_13->ftp_prov->ftp_retired)
  return;
 if (FUNC_9(VAR_13->ftp_pid, VAR_2 | VAR_3, &VAR_14) != 0)
  return;







 FUNC_4();





 for (VAR_15 = 0; VAR_15 < VAR_13->ftp_ntps; VAR_15++) {
  if ((VAR_16 = FUNC_6(VAR_14, VAR_13, VAR_15)) != 0) {





   if (VAR_16 == VAR_0)
    VAR_15--;
   else
    FUNC_0(VAR_16 == VAR_1);





   while (VAR_15 >= 0) {
    FUNC_5(VAR_14, VAR_13, VAR_15);
    VAR_15--;
   }





   FUNC_2(VAR_14);






   FUNC_3();
   return;
  }
 }




 FUNC_2(VAR_14);


 VAR_13->ftp_enabled = 1;
}

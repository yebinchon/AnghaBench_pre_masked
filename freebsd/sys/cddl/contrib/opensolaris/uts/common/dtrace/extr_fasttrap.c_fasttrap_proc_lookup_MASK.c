
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_7__ {scalar_t__ ftpc_pid; scalar_t__ ftpc_acount; scalar_t__ ftpc_rcount; struct TYPE_7__* ftpc_next; int ftpc_mtx; } ;
typedef TYPE_1__ fasttrap_proc_t ;
struct TYPE_8__ {int ftb_mtx; TYPE_1__* ftb_data; } ;
typedef TYPE_2__ fasttrap_bucket_t ;
struct TYPE_9__ {TYPE_2__* fth_table; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ,int *) ;

__attribute__((used)) static fasttrap_proc_t *
FUNC_8(pid_t VAR_3)
{
 fasttrap_bucket_t *VAR_4;
 fasttrap_proc_t *VAR_5, *VAR_6;


 VAR_4 = &VAR_2.fth_table[FUNC_1(VAR_3)];
 FUNC_5(&VAR_4->ftb_mtx);

 for (VAR_5 = VAR_4->ftb_data; VAR_5 != ((void*)0); VAR_5 = VAR_5->ftpc_next) {
  if (VAR_5->ftpc_pid == VAR_3 && VAR_5->ftpc_acount != 0) {
   FUNC_5(&VAR_5->ftpc_mtx);
   FUNC_6(&VAR_4->ftb_mtx);
   VAR_5->ftpc_rcount++;
   FUNC_2(&VAR_5->ftpc_acount);
   FUNC_0(VAR_5->ftpc_acount <= VAR_5->ftpc_rcount);
   FUNC_6(&VAR_5->ftpc_mtx);

   return (VAR_5);
  }
 }





 FUNC_6(&VAR_4->ftb_mtx);

 VAR_6 = FUNC_4(sizeof (fasttrap_proc_t), VAR_0);
 VAR_6->ftpc_pid = VAR_3;
 VAR_6->ftpc_rcount = 1;
 VAR_6->ftpc_acount = 1;

 FUNC_7(&VAR_6->ftpc_mtx, "fasttrap proc mtx", VAR_1,
     ((void*)0));


 FUNC_5(&VAR_4->ftb_mtx);





 for (VAR_5 = VAR_4->ftb_data; VAR_5 != ((void*)0); VAR_5 = VAR_5->ftpc_next) {
  if (VAR_5->ftpc_pid == VAR_3 && VAR_5->ftpc_acount != 0) {
   FUNC_5(&VAR_5->ftpc_mtx);
   FUNC_6(&VAR_4->ftb_mtx);
   VAR_5->ftpc_rcount++;
   FUNC_2(&VAR_5->ftpc_acount);
   FUNC_0(VAR_5->ftpc_acount <= VAR_5->ftpc_rcount);
   FUNC_6(&VAR_5->ftpc_mtx);

   FUNC_3(VAR_6, sizeof (fasttrap_proc_t));

   return (VAR_5);
  }
 }

 VAR_6->ftpc_next = VAR_4->ftb_data;
 VAR_4->ftb_data = VAR_6;

 FUNC_6(&VAR_4->ftb_mtx);

 return (VAR_6);
}

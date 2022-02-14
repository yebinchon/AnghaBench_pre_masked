
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* vm_offset_t ;
struct thread {TYPE_2__* t_dtrace_sscr; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_vmspace; } ;
struct TYPE_12__ {void* ftss_addr; void* ftsb_addr; } ;
typedef TYPE_2__ fasttrap_scrspace_t ;
typedef TYPE_2__ fasttrap_scrblock_t ;
struct TYPE_13__ {int ftpc_mtx; int ftpc_ascr; int ftpc_fscr; int ftpc_scrblks; } ;
typedef TYPE_4__ fasttrap_proc_t ;
struct TYPE_11__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,void**,int,int ,int ,int ,int ,int ) ;

fasttrap_scrspace_t *
FUNC_8(struct thread *VAR_9, fasttrap_proc_t *VAR_10)
{
 fasttrap_scrblock_t *VAR_11;
 fasttrap_scrspace_t *VAR_12;
 struct proc *VAR_13;
 vm_offset_t VAR_14;
 int VAR_15, VAR_16;

 VAR_12 = ((void*)0);
 if (VAR_9->t_dtrace_sscr != ((void*)0)) {

  VAR_12 = (fasttrap_scrspace_t *)VAR_9->t_dtrace_sscr;
  return (VAR_12);
 }

 VAR_13 = VAR_9->td_proc;

 FUNC_5(&VAR_10->ftpc_mtx);
 if (FUNC_0(&VAR_10->ftpc_fscr)) {




  VAR_14 = 0;
  VAR_15 = FUNC_7(&VAR_13->p_vmspace->vm_map, ((void*)0), 0, &VAR_14,
      VAR_0, 0, VAR_5, VAR_6,
      VAR_6, 0);
  if (VAR_15 != VAR_2)
   goto done;

  VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_3, VAR_4);
  VAR_11->ftsb_addr = VAR_14;
  FUNC_2(&VAR_10->ftpc_scrblks, VAR_11, VAR_7);




  for (VAR_16 = 0;
      VAR_16 < VAR_0 / VAR_1; VAR_16++) {
   VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_3, VAR_4);
   VAR_12->ftss_addr = VAR_14 +
       VAR_16 * VAR_1;
   FUNC_2(&VAR_10->ftpc_fscr, VAR_12,
       VAR_8);
  }
 }





 VAR_12 = FUNC_1(&VAR_10->ftpc_fscr);
 FUNC_3(VAR_12, VAR_8);
 FUNC_2(&VAR_10->ftpc_ascr, VAR_12, VAR_8);




 VAR_9->t_dtrace_sscr = VAR_12;

done:
 FUNC_6(&VAR_10->ftpc_mtx);

 return (VAR_12);
}

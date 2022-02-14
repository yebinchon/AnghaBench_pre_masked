
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wrq_cookie {int dummy; } ;
struct tid_info {int ntids; int tid_base; int hftid_lock; int hftid_cv; int * hftid_hash_4t; } ;
struct t4_filter {int const idx; int fs; } ;
struct filter_entry {scalar_t__ valid; int const tid; int locked; int pending; int fs; } ;
struct TYPE_3__ {int abs_id; } ;
struct TYPE_4__ {int * ctrlq; TYPE_1__ fwq; } ;
struct adapter {TYPE_2__ sge; struct tid_info tids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,void*,struct wrq_cookie*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct filter_entry*,int ) ;
 int FUNC_5 (int const,int) ;
 struct filter_entry* FUNC_6 (struct adapter*,int const) ;
 int FUNC_7 (int const,void*,int const,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,int ,struct wrq_cookie*) ;

__attribute__((used)) static int
FUNC_11(struct adapter *VAR_7, struct t4_filter *VAR_8)
{
 struct tid_info *VAR_9 = &VAR_7->tids;
 void *VAR_10;
 struct filter_entry *VAR_11;
 struct wrq_cookie VAR_12;
 int VAR_13;
 const int VAR_14 = FUNC_3();
 const int VAR_15 = VAR_9->ntids + VAR_9->tid_base;

 FUNC_0(VAR_7->tids.hftid_hash_4t != ((void*)0));
 FUNC_0(VAR_7->tids.ntids > 0);

 if (VAR_8->idx < VAR_7->tids.tid_base || VAR_8->idx >= VAR_15)
  return (VAR_2);

 FUNC_8(&VAR_9->hftid_lock);
 VAR_11 = FUNC_6(VAR_7, VAR_8->idx);
 if (VAR_11 == ((void*)0) || VAR_11->valid == 0) {
  VAR_13 = VAR_2;
  goto done;
 }
 FUNC_0(VAR_11->tid == VAR_8->idx);
 if (VAR_11->locked) {
  VAR_13 = VAR_5;
  goto done;
 }
 if (VAR_11->pending) {
  VAR_13 = VAR_0;
  goto done;
 }
 VAR_10 = FUNC_10(&VAR_7->sge.ctrlq[0], FUNC_5(VAR_14, 16), &VAR_12);
 if (VAR_10 == ((void*)0)) {
  VAR_13 = VAR_4;
  goto done;
 }

 FUNC_7(VAR_8->idx, VAR_10, VAR_14, VAR_7->sge.fwq.abs_id);
 VAR_11->locked = 1;
 VAR_11->pending = 1;
 FUNC_1(&VAR_7->sge.ctrlq[0], VAR_10, &VAR_12);
 VAR_8->fs = VAR_11->fs;

 for (;;) {
  FUNC_0(VAR_11->locked);
  if (VAR_11->pending == 0) {
   if (VAR_11->valid) {
    VAR_11->locked = 0;
    VAR_13 = VAR_3;
   } else {
    VAR_13 = 0;
    FUNC_4(VAR_11, VAR_6);
   }
   break;
  }
  if (FUNC_2(&VAR_9->hftid_cv, &VAR_9->hftid_lock) != 0) {
   VAR_11->locked = 0;
   VAR_13 = VAR_1;
   break;
  }
 }
done:
 FUNC_9(&VAR_9->hftid_lock);
 return (VAR_13);
}

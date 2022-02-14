
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct wrq_cookie {int dummy; } ;
struct TYPE_8__ {int pfvf_vld; int ovlan_vld; } ;
struct TYPE_7__ {int pfvf_vld; int ovlan_vld; } ;
struct TYPE_11__ {int hash; scalar_t__ type; TYPE_2__ mask; TYPE_1__ val; } ;
struct t4_filter {int idx; TYPE_5__ fs; } ;
struct smt_entry {int dummy; } ;
struct l2t_entry {int dummy; } ;
struct filter_entry {int locked; int pending; int tid; scalar_t__ valid; TYPE_5__ fs; struct smt_entry* smt; struct l2t_entry* l2te; } ;
struct TYPE_10__ {int hftid_lock; int hftid_cv; } ;
struct TYPE_9__ {int * ctrlq; } ;
struct adapter {TYPE_4__ tids; TYPE_3__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,scalar_t__) ;
 int FUNC_3 (struct adapter*,struct filter_entry*) ;
 int FUNC_4 (int *,void*,struct wrq_cookie*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (struct filter_entry*,int ) ;
 int FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct adapter*,struct filter_entry*,int ) ;
 int * FUNC_10 (struct adapter*,TYPE_5__*,int ) ;
 struct filter_entry* FUNC_11 (int,int ,int) ;
 int FUNC_12 (struct adapter*,struct filter_entry*,int,int ,void*) ;
 int FUNC_13 (struct adapter*,struct filter_entry*,int,int ,void*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (int *,int ,struct wrq_cookie*) ;

__attribute__((used)) static int
FUNC_17(struct adapter *VAR_7, struct t4_filter *VAR_8, uint64_t VAR_9,
    struct l2t_entry *VAR_10, struct smt_entry *VAR_11)
{
 void *VAR_12;
 struct wrq_cookie VAR_13;
 struct filter_entry *VAR_14;
 int VAR_15, VAR_16 = -1;
 uint32_t VAR_17;

 FUNC_0(VAR_8->fs.hash);

 FUNC_0((VAR_8->fs.val.pfvf_vld & VAR_8->fs.val.ovlan_vld) == 0);
 FUNC_0((VAR_8->fs.mask.pfvf_vld & VAR_8->fs.mask.ovlan_vld) == 0);

 VAR_17 = FUNC_8(&VAR_8->fs);

 FUNC_14(&VAR_7->tids.hftid_lock);
 if (FUNC_10(VAR_7, &VAR_8->fs, VAR_17) != ((void*)0)) {
  VAR_15 = VAR_1;
  goto done;
 }

 VAR_14 = FUNC_11(sizeof(*VAR_14), VAR_4, VAR_6 | VAR_5);
 if (FUNC_1(VAR_14 == ((void*)0))) {
  VAR_15 = VAR_3;
  goto done;
 }
 VAR_14->fs = VAR_8->fs;
 VAR_14->l2te = VAR_10;
 VAR_14->smt = VAR_11;

 VAR_16 = FUNC_3(VAR_7, VAR_14);
 if (FUNC_1(VAR_16) == -1) {
  FUNC_6(VAR_14, VAR_4);
  VAR_15 = VAR_0;
  goto done;
 }
 FUNC_0(VAR_16 >= 0);

 VAR_12 = FUNC_16(&VAR_7->sge.ctrlq[0], FUNC_2(VAR_7, VAR_14->fs.type),
     &VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_7(VAR_7, VAR_16);
  FUNC_6(VAR_14, VAR_4);
  VAR_15 = VAR_3;
  goto done;
 }
 if (VAR_14->fs.type)
  FUNC_13(VAR_7, VAR_14, VAR_16, VAR_9, VAR_12);
 else
  FUNC_12(VAR_7, VAR_14, VAR_16, VAR_9, VAR_12);

 VAR_14->locked = 1;
 VAR_14->pending = 1;
 VAR_14->tid = -1;
 FUNC_9(VAR_7, VAR_14, VAR_17);
 FUNC_4(&VAR_7->sge.ctrlq[0], VAR_12, &VAR_13);

 for (;;) {
  FUNC_0(VAR_14->locked);
  if (VAR_14->pending == 0) {
   if (VAR_14->valid) {
    VAR_15 = 0;
    VAR_14->locked = 0;
    VAR_8->idx = VAR_14->tid;
   } else {
    VAR_15 = VAR_14->tid;
    FUNC_6(VAR_14, VAR_4);
   }
   break;
  }
  if (FUNC_5(&VAR_7->tids.hftid_cv, &VAR_7->tids.hftid_lock) != 0) {
   VAR_14->locked = 0;
   VAR_15 = VAR_2;
   break;
  }
 }
done:
 FUNC_15(&VAR_7->tids.hftid_lock);
 return (VAR_15);
}

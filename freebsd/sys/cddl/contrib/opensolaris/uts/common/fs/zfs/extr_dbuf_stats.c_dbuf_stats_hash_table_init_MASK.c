
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ks_private; int ks_ndata; int * ks_lock; } ;
typedef TYPE_1__ kstat_t ;
struct TYPE_8__ {int lock; TYPE_1__* kstat; int * hash; } ;
typedef TYPE_2__ dbuf_stats_t ;
typedef int dbuf_hash_table_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (char*,int ,char*,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_4(dbuf_hash_table_t *VAR_8)
{
 dbuf_stats_t *VAR_9 = &VAR_4;
 kstat_t *VAR_10;

 FUNC_3(&VAR_9->lock, ((void*)0), VAR_2, ((void*)0));
 VAR_9->hash = VAR_8;

 VAR_10 = FUNC_0("zfs", 0, "dbufs", "misc",
     VAR_1, 0, VAR_0);
 VAR_9->kstat = VAR_10;

 if (VAR_10) {
  VAR_10->ks_lock = &VAR_9->lock;
  VAR_10->ks_ndata = VAR_3;
  VAR_10->ks_private = VAR_9;
  FUNC_2(VAR_10, VAR_7,
      VAR_6, VAR_5);
  FUNC_1(VAR_10);
 }
}

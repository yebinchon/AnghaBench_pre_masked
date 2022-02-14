
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsrvcache {int rc_flag; scalar_t__ rc_acked; int rc_reply; int rc_sockref; } ;
struct nfsrchash_bucket {int mtx; } ;
struct TYPE_2__ {int srvcache_size; } ;


 int FUNC_0 (struct nfsrvcache*,int ) ;
 int VAR_0 ;
 struct nfsrchash_bucket* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct nfsrvcache*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct nfsrvcache*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct nfsrvcache*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_9(struct nfsrvcache *VAR_12)
{
 struct nfsrchash_bucket *VAR_13;

 FUNC_0(VAR_12, VAR_10);
 if (VAR_12->rc_flag & VAR_4) {
  FUNC_2(&VAR_7, VAR_12, VAR_11);
  VAR_6--;
 } else if (VAR_12->rc_acked != VAR_2) {
  VAR_13 = FUNC_1(VAR_12->rc_sockref);
  FUNC_6(&VAR_13->mtx);
  if (VAR_12->rc_acked == VAR_1)
   FUNC_0(VAR_12, VAR_9);
  FUNC_7(&VAR_13->mtx);
 }
 FUNC_8(VAR_12);
 if (VAR_12->rc_flag & VAR_3) {
  FUNC_5(VAR_12->rc_reply);
  if (!(VAR_12->rc_flag & VAR_4))
   FUNC_3(&VAR_5, -1);
 }
 FUNC_4(VAR_12, VAR_0);
 FUNC_3(&VAR_8, -1);
}

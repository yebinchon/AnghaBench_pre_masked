
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtx {int dummy; } ;
struct icl_conn {char const* ic_name; int ic_iser; int ic_unmapped; int ic_offload; struct mtx* ic_lock; } ;
struct TYPE_3__ {int flush_cv; int flush_lock; } ;
struct TYPE_4__ {int lock; TYPE_1__ beacon; } ;
struct iser_conn {struct icl_conn icl_conn; TYPE_2__ ib_conn; int state_mutex; int up_cv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static struct icl_conn *
FUNC_8(const char *VAR_7, struct mtx *VAR_8)
{
 struct iser_conn *VAR_9;
 struct icl_conn *VAR_10;

 FUNC_4(&VAR_6);

 VAR_9 = (struct iser_conn *)FUNC_2(&VAR_5, VAR_1, VAR_3 | VAR_4);
 if (!VAR_9) {
  FUNC_0("failed to allocate iser conn");
  FUNC_5(&VAR_6);
  return (((void*)0));
 }

 FUNC_1(&VAR_9->up_cv, "iser_cv");
 FUNC_7(&VAR_9->state_mutex, "iser_conn_state_mutex");
 FUNC_3(&VAR_9->ib_conn.beacon.flush_lock, "iser_flush_lock", ((void*)0), VAR_0);
 FUNC_1(&VAR_9->ib_conn.beacon.flush_cv, "flush_cv");
 FUNC_3(&VAR_9->ib_conn.lock, "iser_lock", ((void*)0), VAR_0);

 VAR_10 = &VAR_9->icl_conn;
 VAR_10->ic_lock = VAR_8;
 VAR_10->ic_name = VAR_7;
 VAR_10->ic_offload = FUNC_6("iser", VAR_2);
 VAR_10->ic_iser = 1;
 VAR_10->ic_unmapped = 1;

 return (VAR_10);
}

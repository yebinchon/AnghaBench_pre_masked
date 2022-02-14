
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_trans_fd {struct p9_conn* conn; } ;
struct p9_req_t {int req_list; int status; TYPE_1__* tc; } ;
struct p9_conn {scalar_t__ err; int wq; int wsched; int client; int unsent_req_list; } ;
struct p9_client {int lock; struct p9_trans_fd* trans; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct p9_conn*,int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct p9_client *VAR_6, struct p9_req_t *VAR_7)
{
 int VAR_8;
 struct p9_trans_fd *VAR_9 = VAR_6->trans;
 struct p9_conn *VAR_10 = VAR_9->conn;

 FUNC_0(VAR_0, "mux %p task %p tcall %p id %d\n", VAR_10,
      VAR_5, VAR_7->tc, VAR_7->tc->id);
 if (VAR_10->err < 0)
  return VAR_10->err;

 FUNC_4(&VAR_6->lock);
 VAR_7->status = VAR_2;
 FUNC_1(&VAR_7->req_list, &VAR_10->unsent_req_list);
 FUNC_5(&VAR_6->lock);

 if (FUNC_6(VAR_3, &VAR_10->wsched))
  VAR_8 = VAR_1;
 else
  VAR_8 = FUNC_2(VAR_10->client, ((void*)0));

 if (VAR_8 & VAR_1 && !FUNC_7(VAR_4, &VAR_10->wsched))
  FUNC_3(&VAR_10->wq);

 return 0;
}

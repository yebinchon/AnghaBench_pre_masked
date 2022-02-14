
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_conn {int wsched; int pt; int poll_pending_link; int wq; int rq; int unsent_req_list; int req_list; struct p9_client* client; int mux_list; } ;
struct p9_client {int msize; } ;


 int VAR_0 ;
 struct p9_conn* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 struct p9_conn* FUNC_5 (int,int ) ;
 int FUNC_6 (struct p9_client*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static struct p9_conn *FUNC_8(struct p9_client *VAR_10)
{
 int VAR_11;
 struct p9_conn *VAR_12;

 FUNC_3(VAR_2, "client %p msize %d\n", VAR_10,
        VAR_10->msize);
 VAR_12 = FUNC_5(sizeof(struct p9_conn), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_12->mux_list);
 VAR_12->client = VAR_10;

 FUNC_1(&VAR_12->req_list);
 FUNC_1(&VAR_12->unsent_req_list);
 FUNC_2(&VAR_12->rq, VAR_8);
 FUNC_2(&VAR_12->wq, VAR_9);
 FUNC_1(&VAR_12->poll_pending_link);
 FUNC_4(&VAR_12->pt, VAR_7);

 VAR_11 = FUNC_6(VAR_10, &VAR_12->pt);
 if (VAR_11 & VAR_3) {
  FUNC_3(VAR_2, "mux %p can read\n", VAR_12);
  FUNC_7(VAR_5, &VAR_12->wsched);
 }

 if (VAR_11 & VAR_4) {
  FUNC_3(VAR_2, "mux %p can write\n", VAR_12);
  FUNC_7(VAR_6, &VAR_12->wsched);
 }

 return VAR_12;
}

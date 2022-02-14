
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_conn {scalar_t__ err; int wq; int wsched; int unsent_req_list; scalar_t__ wsize; int rq; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct p9_conn*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct p9_conn*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct p9_conn *VAR_11)
{
 int VAR_12;

 if (VAR_11->err < 0)
  return;

 VAR_12 = FUNC_3(VAR_11->client, ((void*)0));
 if (VAR_12 < 0 || VAR_12 & (VAR_2 | VAR_3 | VAR_5)) {
  FUNC_0(VAR_1, "error mux %p err %d\n", VAR_11, VAR_12);
  if (VAR_12 >= 0)
   VAR_12 = -VAR_0;
  FUNC_2(VAR_11, VAR_12);
 }

 if (VAR_12 & VAR_4) {
  FUNC_5(VAR_7, &VAR_11->wsched);
  FUNC_0(VAR_1, "mux %p can read\n", VAR_11);
  if (!FUNC_6(VAR_8, &VAR_11->wsched)) {
   FUNC_0(VAR_1, "sched read work %p\n", VAR_11);
   FUNC_4(&VAR_11->rq);
  }
 }

 if (VAR_12 & VAR_6) {
  FUNC_5(VAR_9, &VAR_11->wsched);
  FUNC_0(VAR_1, "mux %p can write\n", VAR_11);
  if ((VAR_11->wsize || !FUNC_1(&VAR_11->unsent_req_list))
      && !FUNC_6(VAR_10, &VAR_11->wsched)) {
   FUNC_0(VAR_1, "sched write work %p\n", VAR_11);
   FUNC_4(&VAR_11->wq);
  }
 }
}

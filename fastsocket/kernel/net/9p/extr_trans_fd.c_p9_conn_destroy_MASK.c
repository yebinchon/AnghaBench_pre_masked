
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; int prev; } ;
struct p9_conn {int * client; int wq; int rq; TYPE_1__ mux_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct p9_conn*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct p9_conn*) ;
 int FUNC_3 (struct p9_conn*,int ) ;
 int FUNC_4 (struct p9_conn*) ;

__attribute__((used)) static void FUNC_5(struct p9_conn *VAR_2)
{
 FUNC_0(VAR_1, "mux %p prev %p next %p\n", VAR_2,
  VAR_2->mux_list.prev, VAR_2->mux_list.next);

 FUNC_4(VAR_2);
 FUNC_1(&VAR_2->rq);
 FUNC_1(&VAR_2->wq);

 FUNC_3(VAR_2, -VAR_0);

 VAR_2->client = ((void*)0);
 FUNC_2(VAR_2);
}

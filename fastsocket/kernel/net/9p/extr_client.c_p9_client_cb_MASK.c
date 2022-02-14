
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_req_t {TYPE_1__* tc; int wq; } ;
struct p9_client {int dummy; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct p9_client *VAR_1, struct p9_req_t *VAR_2)
{
 FUNC_0(VAR_0, " tag %d\n", VAR_2->tc->tag);
 FUNC_1(VAR_2->wq);
 FUNC_0(VAR_0, "wakeup: %d\n", VAR_2->tc->tag);
}

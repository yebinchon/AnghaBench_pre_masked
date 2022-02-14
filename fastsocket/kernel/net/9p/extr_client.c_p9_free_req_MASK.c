
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_req_t {int status; TYPE_1__* tc; } ;
struct p9_client {int tagpool; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct p9_client*,struct p9_req_t*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct p9_client *VAR_3, struct p9_req_t *VAR_4)
{
 int VAR_5 = VAR_4->tc->tag;
 FUNC_0(VAR_0, "clnt %p req %p tag: %d\n", VAR_3, VAR_4, VAR_5);

 VAR_4->status = VAR_2;
 if (VAR_5 != VAR_1 && FUNC_1(VAR_5, VAR_3->tagpool))
  FUNC_2(VAR_5, VAR_3->tagpool);
}

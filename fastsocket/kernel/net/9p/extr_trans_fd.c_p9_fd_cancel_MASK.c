
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {scalar_t__ status; int req_list; } ;
struct p9_client {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct p9_client*,struct p9_req_t*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct p9_client *VAR_5, struct p9_req_t *VAR_6)
{
 int VAR_7 = 1;

 FUNC_0(VAR_0, "client %p req %p\n", VAR_5, VAR_6);

 FUNC_2(&VAR_5->lock);

 if (VAR_6->status == VAR_4) {
  FUNC_1(&VAR_6->req_list);
  VAR_6->status = VAR_2;
  VAR_7 = 0;
 } else if (VAR_6->status == VAR_3)
  VAR_6->status = VAR_1;

 FUNC_3(&VAR_5->lock);

 return VAR_7;
}

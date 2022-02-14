
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int dummy; } ;
struct rs_svc_msg {int cmd; int status; struct rsocket* rs; } ;
struct rs_svc {int * sock; int id; scalar_t__ cnt; int run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int ,struct rs_svc*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct rs_svc_msg*,int) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,struct rs_svc_msg*,int) ;

__attribute__((used)) static int FUNC_10(struct rs_svc *VAR_4, struct rsocket *VAR_5, int VAR_6)
{
 struct rs_svc_msg VAR_7;
 int VAR_8;

 FUNC_4(&VAR_3);
 if (!VAR_4->cnt) {
  VAR_8 = FUNC_8(VAR_0, VAR_2, 0, VAR_4->sock);
  if (VAR_8)
   goto unlock;

  VAR_8 = FUNC_2(&VAR_4->id, ((void*)0), VAR_4->run, VAR_4);
  if (VAR_8) {
   VAR_8 = FUNC_0(VAR_8);
   goto closepair;
  }
 }

 VAR_7.cmd = VAR_6;
 VAR_7.status = VAR_1;
 VAR_7.rs = VAR_5;
 FUNC_9(VAR_4->sock[0], &VAR_7, sizeof VAR_7);
 FUNC_7(VAR_4->sock[0], &VAR_7, sizeof VAR_7);
 VAR_8 = FUNC_6(VAR_7.status);
 if (VAR_4->cnt)
  goto unlock;

 FUNC_3(VAR_4->id, ((void*)0));
closepair:
 FUNC_1(VAR_4->sock[0]);
 FUNC_1(VAR_4->sock[1]);
unlock:
 FUNC_5(&VAR_3);
 return VAR_8;
}

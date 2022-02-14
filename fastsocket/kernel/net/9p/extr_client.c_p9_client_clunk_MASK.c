
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int dummy; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_3 (struct p9_client*,int ,char*,int ) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;

int FUNC_6(struct p9_fid *VAR_2)
{
 int VAR_3;
 struct p9_client *VAR_4;
 struct p9_req_t *VAR_5;

 FUNC_1(VAR_0, ">>> TCLUNK fid %d\n", VAR_2->fid);
 VAR_3 = 0;
 VAR_4 = VAR_2->clnt;

 VAR_5 = FUNC_3(VAR_4, VAR_1, "d", VAR_2->fid);
 if (FUNC_0(VAR_5)) {
  VAR_3 = FUNC_2(VAR_5);
  goto error;
 }

 FUNC_1(VAR_0, "<<< RCLUNK fid %d\n", VAR_2->fid);

 FUNC_5(VAR_4, VAR_5);
 FUNC_4(VAR_2);

error:
 return VAR_3;
}

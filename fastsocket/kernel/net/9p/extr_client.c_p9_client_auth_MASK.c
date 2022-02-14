
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct p9_req_t {int qid; int rc; int fid; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int qid; int rc; int fid; } ;
struct p9_client {int dotu; } ;


 struct p9_req_t* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct p9_req_t*) ;
 int FUNC_4 (int *,struct p9_qid*,int) ;
 struct p9_req_t* FUNC_5 (struct p9_client*,int ,char*,int ,char*,char*,int ) ;
 struct p9_req_t* FUNC_6 (struct p9_client*) ;
 int FUNC_7 (struct p9_req_t*) ;
 int FUNC_8 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int ,char*,struct p9_qid*) ;

struct p9_fid *
FUNC_11(struct p9_client *VAR_3, char *VAR_4, u32 VAR_5, char *VAR_6)
{
 int VAR_7;
 struct p9_req_t *VAR_8;
 struct p9_qid VAR_9;
 struct p9_fid *VAR_10;

 FUNC_2(VAR_0, ">>> TAUTH uname %s aname %s\n", VAR_4, VAR_6);
 VAR_7 = 0;

 VAR_10 = FUNC_6(VAR_3);
 if (FUNC_1(VAR_10)) {
  VAR_7 = FUNC_3(VAR_10);
  VAR_10 = ((void*)0);
  goto error;
 }

 VAR_8 = FUNC_5(VAR_3, VAR_2, "dss?d",
   VAR_10 ? VAR_10->fid : VAR_1, VAR_4, VAR_6, VAR_5);
 if (FUNC_1(VAR_8)) {
  VAR_7 = FUNC_3(VAR_8);
  goto error;
 }

 VAR_7 = FUNC_10(VAR_8->rc, VAR_3->dotu, "Q", &VAR_9);
 if (VAR_7) {
  FUNC_9(1, VAR_8->rc);
  FUNC_8(VAR_3, VAR_8);
  goto error;
 }

 FUNC_2(VAR_0, "<<< RAUTH qid %x.%llx.%x\n",
     VAR_9.type,
     (unsigned long long)VAR_9.path,
     VAR_9.version);

 FUNC_4(&VAR_10->qid, &VAR_9, sizeof(struct p9_qid));
 FUNC_8(VAR_3, VAR_8);
 return VAR_10;

error:
 if (VAR_10)
  FUNC_7(VAR_10);
 return FUNC_0(VAR_7);
}

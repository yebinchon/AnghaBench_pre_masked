
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct p9_req_t {int fid; int qid; int rc; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int fid; int qid; int rc; } ;
struct p9_client {int dotu; } ;


 struct p9_req_t* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct p9_req_t*) ;
 int FUNC_4 (int *,struct p9_qid*,int) ;
 struct p9_req_t* FUNC_5 (struct p9_client*,int ,char*,int,int,char*,char*,int ) ;
 struct p9_req_t* FUNC_6 (struct p9_client*) ;
 int FUNC_7 (struct p9_req_t*) ;
 int FUNC_8 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int ,char*,struct p9_qid*) ;

struct p9_fid *FUNC_11(struct p9_client *VAR_3, struct p9_fid *VAR_4,
 char *VAR_5, u32 VAR_6, char *VAR_7)
{
 int VAR_8;
 struct p9_req_t *VAR_9;
 struct p9_fid *VAR_10;
 struct p9_qid VAR_11;

 FUNC_2(VAR_0, ">>> TATTACH afid %d uname %s aname %s\n",
     VAR_4 ? VAR_4->fid : -1, VAR_5, VAR_7);
 VAR_8 = 0;

 VAR_10 = FUNC_6(VAR_3);
 if (FUNC_1(VAR_10)) {
  VAR_8 = FUNC_3(VAR_10);
  VAR_10 = ((void*)0);
  goto error;
 }

 VAR_9 = FUNC_5(VAR_3, VAR_2, "ddss?d", VAR_10->fid,
   VAR_4 ? VAR_4->fid : VAR_1, VAR_5, VAR_7, VAR_6);
 if (FUNC_1(VAR_9)) {
  VAR_8 = FUNC_3(VAR_9);
  goto error;
 }

 VAR_8 = FUNC_10(VAR_9->rc, VAR_3->dotu, "Q", &VAR_11);
 if (VAR_8) {
  FUNC_9(1, VAR_9->rc);
  FUNC_8(VAR_3, VAR_9);
  goto error;
 }

 FUNC_2(VAR_0, "<<< RATTACH qid %x.%llx.%x\n",
     VAR_11.type,
     (unsigned long long)VAR_11.path,
     VAR_11.version);

 FUNC_4(&VAR_10->qid, &VAR_11, sizeof(struct p9_qid));

 FUNC_8(VAR_3, VAR_9);
 return VAR_10;

error:
 if (VAR_10)
  FUNC_7(VAR_10);
 return FUNC_0(VAR_8);
}

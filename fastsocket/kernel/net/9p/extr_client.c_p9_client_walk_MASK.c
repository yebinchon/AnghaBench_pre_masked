
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int fid; int qid; int rc; int uid; struct p9_client* clnt; } ;
struct p9_qid {int type; char* version; scalar_t__ path; } ;
struct p9_fid {int fid; int qid; int rc; int uid; struct p9_client* clnt; } ;
struct p9_client {int dotu; } ;
typedef int int16_t ;


 int VAR_0 ;
 struct p9_req_t* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_2 ;
 int FUNC_3 (struct p9_req_t*) ;
 int FUNC_4 (int *,struct p9_qid*,int) ;
 int FUNC_5 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_6 (struct p9_client*,int ,char*,int,int,int,char**) ;
 struct p9_req_t* FUNC_7 (struct p9_client*) ;
 int FUNC_8 (struct p9_req_t*) ;
 int FUNC_9 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,char*,int*,struct p9_qid**) ;

struct p9_fid *FUNC_12(struct p9_fid *VAR_3, int VAR_4, char **VAR_5,
 int VAR_6)
{
 int VAR_7;
 struct p9_client *VAR_8;
 struct p9_fid *VAR_9;
 struct p9_qid *VAR_10;
 struct p9_req_t *VAR_11;
 int16_t VAR_12, VAR_13;

 VAR_7 = 0;
 VAR_8 = VAR_3->clnt;
 if (VAR_6) {
  VAR_9 = FUNC_7(VAR_8);
  if (FUNC_1(VAR_9)) {
   VAR_7 = FUNC_3(VAR_9);
   VAR_9 = ((void*)0);
   goto error;
  }

  VAR_9->uid = VAR_3->uid;
 } else
  VAR_9 = VAR_3;


 FUNC_2(VAR_1, ">>> TWALK fids %d,%d nwname %d wname[0] %s\n",
  VAR_3->fid, VAR_9->fid, VAR_4, VAR_5 ? VAR_5[0] : ((void*)0));

 VAR_11 = FUNC_6(VAR_8, VAR_2, "ddT", VAR_3->fid, VAR_9->fid,
        VAR_4, VAR_5);
 if (FUNC_1(VAR_11)) {
  VAR_7 = FUNC_3(VAR_11);
  goto error;
 }

 VAR_7 = FUNC_11(VAR_11->rc, VAR_8->dotu, "R", &VAR_12, &VAR_10);
 if (VAR_7) {
  FUNC_10(1, VAR_11->rc);
  FUNC_9(VAR_8, VAR_11);
  goto clunk_fid;
 }
 FUNC_9(VAR_8, VAR_11);

 FUNC_2(VAR_1, "<<< RWALK nwqid %d:\n", VAR_12);

 if (VAR_12 != VAR_4) {
  VAR_7 = -VAR_0;
  goto clunk_fid;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  FUNC_2(VAR_1, "<<<     [%d] %x.%llx.%x\n",
   VAR_13, VAR_10[VAR_13].type,
   (unsigned long long)VAR_10[VAR_13].path,
   VAR_10[VAR_13].version);

 if (VAR_4)
  FUNC_4(&VAR_9->qid, &VAR_10[VAR_12 - 1], sizeof(struct p9_qid));
 else
  VAR_9->qid = VAR_3->qid;

 return VAR_9;

clunk_fid:
 FUNC_5(VAR_9);
 VAR_9 = ((void*)0);

error:
 if (VAR_9 && (VAR_9 != VAR_3))
  FUNC_8(VAR_9);

 return FUNC_0(VAR_7);
}

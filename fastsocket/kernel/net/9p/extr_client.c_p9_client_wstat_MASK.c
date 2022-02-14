
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; scalar_t__ path; int type; } ;
struct p9_wstat {int size; int n_muid; int n_gid; int n_uid; int extension; int muid; int gid; int uid; int name; scalar_t__ length; int mtime; int atime; int mode; TYPE_1__ qid; int dev; int type; } ;
struct p9_req_t {int dummy; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int dotu; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_2 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_3 (struct p9_client*,int ,char*,int ,int ,struct p9_wstat*) ;
 int FUNC_4 (struct p9_wstat*,int ) ;
 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;

int FUNC_6(struct p9_fid *VAR_2, struct p9_wstat *VAR_3)
{
 int VAR_4;
 struct p9_req_t *VAR_5;
 struct p9_client *VAR_6;

 VAR_4 = 0;
 VAR_6 = VAR_2->clnt;
 VAR_3->size = FUNC_4(VAR_3, VAR_6->dotu);
 FUNC_1(VAR_0, ">>> TWSTAT fid %d\n", VAR_2->fid);
 FUNC_1(VAR_0,
  "     sz=%x type=%x dev=%x qid=%x.%llx.%x\n"
  "     mode=%8.8x atime=%8.8x mtime=%8.8x length=%llx\n"
  "     name=%s uid=%s gid=%s muid=%s extension=(%s)\n"
  "     uid=%d gid=%d n_muid=%d\n",
  VAR_3->size, VAR_3->type, VAR_3->dev, VAR_3->qid.type,
  (unsigned long long)VAR_3->qid.path, VAR_3->qid.version, VAR_3->mode,
  VAR_3->atime, VAR_3->mtime, (unsigned long long)VAR_3->length,
  VAR_3->name, VAR_3->uid, VAR_3->gid, VAR_3->muid, VAR_3->extension,
  VAR_3->n_uid, VAR_3->n_gid, VAR_3->n_muid);

 VAR_5 = FUNC_3(VAR_6, VAR_1, "dwS", VAR_2->fid, VAR_3->size, VAR_3);
 if (FUNC_0(VAR_5)) {
  VAR_4 = FUNC_2(VAR_5);
  goto error;
 }

 FUNC_1(VAR_0, "<<< RWSTAT fid %d\n", VAR_2->fid);

 FUNC_5(VAR_6, VAR_5);
error:
 return VAR_4;
}

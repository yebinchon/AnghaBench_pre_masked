
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_qid {int dummy; } ;
struct p9_fid {int fid; int mode; int flist; int * rdir; struct p9_client* clnt; int uid; int qid; } ;
struct p9_client {int lock; int fidlist; int fidpool; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct p9_fid* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,struct p9_client*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct p9_fid*) ;
 struct p9_fid* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static struct p9_fid *FUNC_10(struct p9_client *VAR_4)
{
 int VAR_5;
 struct p9_fid *VAR_6;
 unsigned long VAR_7;

 FUNC_1(VAR_3, "clnt %p\n", VAR_4);
 VAR_6 = FUNC_4(sizeof(struct p9_fid), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_7(VAR_4->fidpool);
 if (VAR_5 < 0) {
  VAR_5 = -VAR_1;
  goto error;
 }
 VAR_6->fid = VAR_5;

 FUNC_6(&VAR_6->qid, 0, sizeof(struct p9_qid));
 VAR_6->mode = -1;
 VAR_6->uid = FUNC_2();
 VAR_6->clnt = VAR_4;
 VAR_6->rdir = ((void*)0);
 FUNC_8(&VAR_4->lock, VAR_7);
 FUNC_5(&VAR_6->flist, &VAR_4->fidlist);
 FUNC_9(&VAR_4->lock, VAR_7);

 return VAR_6;

error:
 FUNC_3(VAR_6);
 return FUNC_0(VAR_5);
}

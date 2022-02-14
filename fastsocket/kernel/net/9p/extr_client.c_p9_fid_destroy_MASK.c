
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {struct p9_fid* rdir; int flist; int fid; struct p9_client* clnt; } ;
struct p9_client {int lock; int fidpool; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct p9_fid *VAR_1)
{
 struct p9_client *VAR_2;
 unsigned long VAR_3;

 FUNC_0(VAR_0, "fid %d\n", VAR_1->fid);
 VAR_2 = VAR_1->clnt;
 FUNC_3(VAR_1->fid, VAR_2->fidpool);
 FUNC_4(&VAR_2->lock, VAR_3);
 FUNC_2(&VAR_1->flist);
 FUNC_5(&VAR_2->lock, VAR_3);
 FUNC_1(VAR_1->rdir);
 FUNC_1(VAR_1);
}

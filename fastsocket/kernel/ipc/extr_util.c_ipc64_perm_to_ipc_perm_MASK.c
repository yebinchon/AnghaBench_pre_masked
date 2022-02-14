
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_perm {int seq; int mode; int cgid; int cuid; int gid; int uid; int key; } ;
struct ipc64_perm {int seq; int mode; int cgid; int cuid; int gid; int uid; int key; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 (struct ipc64_perm *VAR_0, struct ipc_perm *VAR_1)
{
 VAR_1->key = VAR_0->key;
 FUNC_1(VAR_1->uid, VAR_0->uid);
 FUNC_0(VAR_1->gid, VAR_0->gid);
 FUNC_1(VAR_1->cuid, VAR_0->cuid);
 FUNC_0(VAR_1->cgid, VAR_0->cgid);
 VAR_1->mode = VAR_0->mode;
 VAR_1->seq = VAR_0->seq;
}

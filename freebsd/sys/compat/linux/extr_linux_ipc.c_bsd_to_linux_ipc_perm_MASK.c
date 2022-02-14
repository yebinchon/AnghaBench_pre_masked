
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_ipc64_perm {int mode; int seq; int cgid; int cuid; int gid; int uid; int key; } ;
struct ipc_perm {int mode; int seq; int cgid; int cuid; int gid; int uid; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct ipc_perm *VAR_3, struct l_ipc64_perm *VAR_4)
{

 VAR_4->key = VAR_3->key;
 VAR_4->uid = VAR_3->uid;
 VAR_4->gid = VAR_3->gid;
 VAR_4->cuid = VAR_3->cuid;
 VAR_4->cgid = VAR_3->cgid;
 VAR_4->mode = VAR_3->mode & (VAR_2|VAR_0|VAR_1);
 VAR_4->seq = VAR_3->seq;
}

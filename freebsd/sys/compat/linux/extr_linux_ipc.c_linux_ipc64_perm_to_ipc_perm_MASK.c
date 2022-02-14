
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_ipc_perm {scalar_t__ uid; scalar_t__ gid; scalar_t__ cuid; scalar_t__ cgid; scalar_t__ mode; int seq; int key; } ;
struct l_ipc64_perm {scalar_t__ uid; scalar_t__ gid; scalar_t__ cuid; scalar_t__ cgid; scalar_t__ mode; int seq; int key; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct l_ipc64_perm *VAR_1, struct l_ipc_perm *VAR_2)
{

 VAR_2->key = VAR_1->key;
 VAR_2->uid = VAR_1->uid;
 VAR_2->gid = VAR_1->gid;
 VAR_2->cuid = VAR_1->cuid;
 VAR_2->cgid = VAR_1->cgid;
 VAR_2->mode = VAR_1->mode;
 VAR_2->seq = VAR_1->seq;


 if (VAR_2->uid != VAR_1->uid || VAR_2->gid != VAR_1->gid ||
     VAR_2->cuid != VAR_1->cuid || VAR_2->cgid != VAR_1->cgid ||
     VAR_2->mode != VAR_1->mode)
  return (VAR_0);
 else
  return (0);
}

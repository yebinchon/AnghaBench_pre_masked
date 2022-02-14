
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ucred {int * cr_groups; int cr_uid; } ;
struct fuse_ticket {int tk_unique; } ;
struct fuse_in_header {int len; int opcode; int gid; int uid; int pid; int nodeid; int unique; } ;
typedef int pid_t ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;



__attribute__((used)) static inline void
FUNC_0(struct fuse_in_header *VAR_0, struct fuse_ticket *VAR_1,
    uint64_t VAR_2, enum fuse_opcode VAR_3, size_t VAR_4, pid_t VAR_5,
    struct ucred *VAR_6)
{
 VAR_0->len = sizeof(*VAR_0) + VAR_4;
 VAR_0->unique = VAR_1->tk_unique;
 VAR_0->nodeid = VAR_2;
 VAR_0->opcode = VAR_3;

 VAR_0->pid = VAR_5;
 VAR_0->uid = VAR_6->cr_uid;
 VAR_0->gid = VAR_6->cr_groups[0];
}

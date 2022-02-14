
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mount {int dummy; } ;
struct fuse_dispatcher {size_t iosize; char* indata; } ;
struct componentname {size_t cn_namelen; void* cn_nameptr; int cn_cred; int cn_thread; } ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;


 int FUNC_0 (struct fuse_dispatcher*,int,struct mount*,int ,int ,int ) ;
 int FUNC_1 (char*,void*,size_t) ;

void
FUNC_2(struct mount *VAR_0,
    uint64_t VAR_1,
    struct componentname *VAR_2,
    enum fuse_opcode VAR_3,
    void *VAR_4,
    size_t VAR_5,
    struct fuse_dispatcher *VAR_6)
{
 VAR_6->iosize = VAR_5 + VAR_2->cn_namelen + 1;

 FUNC_0(VAR_6, VAR_3, VAR_0, VAR_1, VAR_2->cn_thread, VAR_2->cn_cred);
 FUNC_1(VAR_6->indata, VAR_4, VAR_5);
 FUNC_1((char *)VAR_6->indata + VAR_5, VAR_2->cn_nameptr, VAR_2->cn_namelen);
 ((char *)VAR_6->indata)[VAR_5 + VAR_2->cn_namelen] = '\0';
}

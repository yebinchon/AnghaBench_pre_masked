
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_forget_in {int nlookup; } ;
struct fuse_dispatcher {int tick; struct fuse_forget_in* indata; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,struct mount*,int ,struct thread*,struct ucred*) ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(struct mount *VAR_1,
    struct thread *VAR_2,
    struct ucred *VAR_3,
    uint64_t VAR_4,
    uint64_t VAR_5)
{

 struct fuse_dispatcher VAR_6;
 struct fuse_forget_in *VAR_7;






 FUNC_1(&VAR_6, sizeof(*VAR_7));
 FUNC_2(&VAR_6, VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);

 VAR_7 = VAR_6.indata;
 VAR_7->nlookup = VAR_5;

 FUNC_3(VAR_6.tick, 0);
 FUNC_0(&VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct fuse_init_in {int flags; int max_readahead; int minor; int major; } ;
struct fuse_dispatcher {int tick; struct fuse_init_in* indata; } ;
struct fuse_data {int mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,int ,int ,struct thread*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_5(struct fuse_data *VAR_10, struct thread *VAR_11)
{
 struct fuse_init_in *VAR_12;
 struct fuse_dispatcher VAR_13;

 FUNC_1(&VAR_13, sizeof(*VAR_12));
 FUNC_2(&VAR_13, VAR_3, VAR_10->mp, 0, VAR_11, ((void*)0));
 VAR_12 = VAR_13.indata;
 VAR_12->major = VAR_5;
 VAR_12->minor = VAR_4;




 VAR_12->max_readahead = VAR_9;
 VAR_12->flags = VAR_0 | VAR_6 | VAR_2
  | VAR_1 | VAR_7;

 FUNC_3(VAR_13.tick, VAR_8);
 FUNC_4(VAR_13.tick, 0);
 FUNC_0(&VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int dummy; } ;
struct fuse_data {int aw_head; int aw_mtx; } ;


 int VAR_0 ;
 struct fuse_ticket* FUNC_0 (int *) ;
 int FUNC_1 (struct fuse_ticket*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline struct fuse_ticket *
FUNC_3(struct fuse_data *VAR_1)
{
 struct fuse_ticket *VAR_2;

 FUNC_2(&VAR_1->aw_mtx, VAR_0);

 if ((VAR_2 = FUNC_0(&VAR_1->aw_head)) != ((void*)0))
  FUNC_1(VAR_2);

 return (VAR_2);
}

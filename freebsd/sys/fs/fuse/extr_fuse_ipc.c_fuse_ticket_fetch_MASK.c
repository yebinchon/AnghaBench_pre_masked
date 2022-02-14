
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int dummy; } ;
struct fuse_data {int dataflags; int ticketer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fuse_data*) ;
 struct fuse_ticket* FUNC_3 (struct fuse_data*) ;
 int VAR_3 ;
 int FUNC_4 (int*,int *,int,char*,int ) ;

struct fuse_ticket *
FUNC_5(struct fuse_data *VAR_4)
{
 int VAR_5 = 0;
 struct fuse_ticket *VAR_6;

 VAR_6 = FUNC_3(VAR_4);

 if (!(VAR_4->dataflags & VAR_0)) {

  FUNC_0();
  if (!(VAR_4->dataflags & VAR_0) && VAR_4->ticketer > 2) {
   VAR_5 = FUNC_4(&VAR_4->ticketer, &VAR_3, VAR_1 | VAR_2,
       "fu_ini", 0);
   if (VAR_5)
    FUNC_2(VAR_4);
  } else
   FUNC_1();
 }
 return VAR_6;
}

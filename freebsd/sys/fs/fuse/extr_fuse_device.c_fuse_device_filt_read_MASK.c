
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_data; int kn_fflags; int kn_flags; scalar_t__ kn_hook; } ;
struct fuse_data {int ms_count; int ms_head; int ms_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct fuse_data*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_3, long VAR_4)
{
 struct fuse_data *VAR_5;
 int VAR_6;

 VAR_5 = (struct fuse_data*)VAR_3->kn_hook;
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_3(&VAR_5->ms_mtx, VAR_2);
 if (FUNC_2(VAR_5)) {
  VAR_3->kn_flags |= VAR_1;
  VAR_3->kn_fflags = VAR_0;
  VAR_3->kn_data = 1;
  VAR_6 = 1;
 } else if (FUNC_1(&VAR_5->ms_head)) {
  FUNC_0(VAR_5->ms_count >= 1);
  VAR_3->kn_data = VAR_5->ms_count;
  VAR_6 = 1;
 } else {
  VAR_6 = 0;
 }

 return (VAR_6);
}

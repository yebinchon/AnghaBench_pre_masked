
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_filter; int kn_data; struct fuse_data* kn_hook; int * kn_fop; } ;
struct TYPE_2__ {int si_note; } ;
struct fuse_data {TYPE_1__ ks_rsel; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void**) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_3, struct knote *VAR_4)
{
 struct fuse_data *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0((void **)&VAR_5);


 if (VAR_6 == 0 && VAR_4->kn_filter == VAR_1) {
  VAR_4->kn_fop = &VAR_2;
  VAR_4->kn_hook = VAR_5;
  FUNC_1(&VAR_5->ks_rsel.si_note, VAR_4, 0);
  VAR_6 = 0;
 } else if (VAR_6 == 0) {
  VAR_6 = VAR_0;
  VAR_4->kn_data = VAR_6;
 }

 return (VAR_6);
}

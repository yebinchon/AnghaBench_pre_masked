
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_3__ {int kf_pts_dev; int kf_pts_dev_freebsd11; } ;
struct TYPE_4__ {TYPE_1__ kf_pts; } ;
struct kinfo_file {int kf_path; TYPE_2__ kf_un; int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {struct tty* f_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, struct kinfo_file *VAR_2, struct filedesc *VAR_3)
{
 struct tty *VAR_4;

 VAR_2->kf_type = VAR_0;
 VAR_4 = VAR_1->f_data;
 VAR_2->kf_un.kf_pts.kf_pts_dev = FUNC_2(VAR_4);
 VAR_2->kf_un.kf_pts.kf_pts_dev_freebsd11 =
     VAR_2->kf_un.kf_pts.kf_pts_dev;
 FUNC_0(VAR_2->kf_path, FUNC_1(VAR_4), sizeof(VAR_2->kf_path));
 return (0);
}

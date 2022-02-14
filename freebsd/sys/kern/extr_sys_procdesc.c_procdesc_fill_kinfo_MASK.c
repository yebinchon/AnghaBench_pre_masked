
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct procdesc {int pd_pid; } ;
struct TYPE_3__ {int kf_pid; } ;
struct TYPE_4__ {TYPE_1__ kf_proc; } ;
struct kinfo_file {TYPE_2__ kf_un; int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {struct procdesc* f_data; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct file *VAR_1, struct kinfo_file *VAR_2,
    struct filedesc *VAR_3)
{
 struct procdesc *VAR_4;

 VAR_2->kf_type = VAR_0;
 VAR_4 = VAR_1->f_data;
 VAR_2->kf_un.kf_proc.kf_pid = VAR_4->pd_pid;
 return (0);
}

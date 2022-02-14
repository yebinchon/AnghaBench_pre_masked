
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cnt; } ;
struct pipe {TYPE_3__ pipe_buffer; scalar_t__ pipe_peer; } ;
struct TYPE_4__ {uintptr_t kf_pipe_addr; uintptr_t kf_pipe_peer; int kf_pipe_buffer_cnt; } ;
struct TYPE_5__ {TYPE_1__ kf_pipe; } ;
struct kinfo_file {TYPE_2__ kf_un; int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {scalar_t__ f_type; struct pipe* f_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct kinfo_file*,struct filedesc*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_2, struct kinfo_file *VAR_3, struct filedesc *VAR_4)
{
 struct pipe *VAR_5;

 if (VAR_2->f_type == VAR_0)
  return (FUNC_0(VAR_2, VAR_3, VAR_4));
 VAR_3->kf_type = VAR_1;
 VAR_5 = VAR_2->f_data;
 VAR_3->kf_un.kf_pipe.kf_pipe_addr = (uintptr_t)VAR_5;
 VAR_3->kf_un.kf_pipe.kf_pipe_peer = (uintptr_t)VAR_5->pipe_peer;
 VAR_3->kf_un.kf_pipe.kf_pipe_buffer_cnt = VAR_5->pipe_buffer.cnt;
 return (0);
}

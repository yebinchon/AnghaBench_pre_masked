
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cnt; } ;
struct TYPE_3__ {int cnt; } ;
struct pipe {int pipe_state; scalar_t__ pipe_present; TYPE_2__ pipe_map; TYPE_1__ pipe_buffer; struct pipe* pipe_peer; } ;
struct knote {int kn_data; int kn_flags; struct pipe* kn_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pipe*,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_4, long VAR_5)
{
 struct pipe *VAR_6 = VAR_4->kn_hook;
 struct pipe *VAR_7 = VAR_6->pipe_peer;
 int VAR_8;

 FUNC_0(VAR_6, VAR_1);
 VAR_4->kn_data = VAR_6->pipe_buffer.cnt;
 if (VAR_4->kn_data == 0)
  VAR_4->kn_data = VAR_6->pipe_map.cnt;

 if ((VAR_6->pipe_state & VAR_3) ||
     VAR_7->pipe_present != VAR_2 ||
     (VAR_7->pipe_state & VAR_3)) {
  VAR_4->kn_flags |= VAR_0;
  return (1);
 }
 VAR_8 = VAR_4->kn_data > 0;
 return VAR_8;
}

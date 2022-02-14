
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ cnt; } ;
struct pipe {scalar_t__ pipe_present; int pipe_state; TYPE_1__ pipe_buffer; } ;
struct knote {scalar_t__ kn_data; int kn_flags; struct pipe* kn_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pipe*,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_6, long VAR_7)
{
 struct pipe *VAR_8;





 VAR_8 = VAR_6->kn_hook;
 if (VAR_8->pipe_present != VAR_2 ||
     (VAR_8->pipe_state & VAR_5)) {
  VAR_6->kn_data = 0;
  VAR_6->kn_flags |= VAR_0;
  return (1);
 }
 FUNC_0(VAR_8, VAR_1);
 VAR_6->kn_data = (VAR_8->pipe_buffer.size > 0) ?
     (VAR_8->pipe_buffer.size - VAR_8->pipe_buffer.cnt) : VAR_3;
 if (VAR_8->pipe_state & VAR_4)
  VAR_6->kn_data = 0;

 return (VAR_6->kn_data >= VAR_3);
}

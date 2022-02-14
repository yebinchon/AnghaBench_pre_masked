
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; int acqsig; } ;
struct vt_window {scalar_t__ vw_pid; int * vw_proc; TYPE_3__ vw_smode; int vw_flags; TYPE_2__* vw_terminal; TYPE_1__* vw_device; } ;
struct TYPE_5__ {int consdev; } ;
struct TYPE_4__ {struct vt_window** vd_windows; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct vt_window*) ;

__attribute__((used)) static int
FUNC_6(struct vt_window *VAR_5)
{

 if (VAR_5->vw_smode.mode != VAR_3)
  return (VAR_0);
 if (VAR_5 == VAR_5->vw_device->vd_windows[VAR_2])
  FUNC_3(VAR_5->vw_terminal->consdev, VAR_0);
 if (VAR_5->vw_proc == ((void*)0) || FUNC_5(VAR_5) == VAR_0) {
  VAR_5->vw_proc = ((void*)0);
  VAR_5->vw_pid = 0;
  return (VAR_1);
 }
 VAR_5->vw_flags |= VAR_4;
 FUNC_1(VAR_5->vw_proc);
 FUNC_4(VAR_5->vw_proc, VAR_5->vw_smode.acqsig);
 FUNC_2(VAR_5->vw_proc);
 FUNC_0(1, "sending acqsig to %d\n", VAR_5->vw_pid);
 return (VAR_1);
}

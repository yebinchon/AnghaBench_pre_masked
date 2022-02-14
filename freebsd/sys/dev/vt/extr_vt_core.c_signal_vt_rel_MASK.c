
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int relsig; } ;
struct vt_window {scalar_t__ vw_pid; int * vw_proc; TYPE_1__ vw_smode; int vw_flags; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct vt_window*) ;

__attribute__((used)) static int
FUNC_5(struct vt_window *VAR_4)
{

 if (VAR_4->vw_smode.mode != VAR_2)
  return (VAR_0);
 if (VAR_4->vw_proc == ((void*)0) || FUNC_4(VAR_4) == VAR_0) {
  VAR_4->vw_proc = ((void*)0);
  VAR_4->vw_pid = 0;
  return (VAR_1);
 }
 VAR_4->vw_flags |= VAR_3;
 FUNC_1(VAR_4->vw_proc);
 FUNC_3(VAR_4->vw_proc, VAR_4->vw_smode.relsig);
 FUNC_2(VAR_4->vw_proc);
 FUNC_0(1, "sending relsig to %d\n", VAR_4->vw_pid);
 return (VAR_1);
}

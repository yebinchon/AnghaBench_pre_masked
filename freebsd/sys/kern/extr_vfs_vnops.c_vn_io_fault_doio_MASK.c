
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vp; } ;
struct TYPE_4__ {int (* doio ) (int ,struct uio*,int ,int ,struct thread*) ;int fp; } ;
struct TYPE_6__ {TYPE_2__ vop_args; TYPE_1__ fop_args; } ;
struct vn_io_fault_args {int kind; int cred; int flags; TYPE_3__ args; } ;
struct uio {int uio_rw; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,struct uio*,int ,int ) ;
 int FUNC_1 (int ,struct uio*,int ,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,struct uio*,int ,int ,struct thread*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct vn_io_fault_args *VAR_2, struct uio *VAR_3,
    struct thread *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_6 = FUNC_4();
 switch (VAR_2->kind) {
 case 129:
  VAR_5 = (VAR_2->args.fop_args.doio)(VAR_2->args.fop_args.fp,
      VAR_3, VAR_2->cred, VAR_2->flags, VAR_4);
  break;
 case 128:
  if (VAR_3->uio_rw == VAR_0) {
   VAR_5 = FUNC_0(VAR_2->args.vop_args.vp, VAR_3,
       VAR_2->flags, VAR_2->cred);
  } else if (VAR_3->uio_rw == VAR_1) {
   VAR_5 = FUNC_1(VAR_2->args.vop_args.vp, VAR_3,
       VAR_2->flags, VAR_2->cred);
  }
  break;
 default:
  FUNC_2("vn_io_fault_doio: unknown kind of io %d %d",
      VAR_2->kind, VAR_3->uio_rw);
 }
 FUNC_5(VAR_6);
 return (VAR_5);
}

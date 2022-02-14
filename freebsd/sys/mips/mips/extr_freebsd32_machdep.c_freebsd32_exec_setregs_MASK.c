
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {scalar_t__ md_tls_tcb_offset; } ;
struct thread {TYPE_2__ td_md; TYPE_1__* td_frame; } ;
struct image_params {int dummy; } ;
struct TYPE_3__ {int sp; int sr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct thread*,struct image_params*,int ) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_3, struct image_params *VAR_4, u_long VAR_5)
{
 FUNC_0(VAR_3, VAR_4, VAR_5);





 VAR_3->td_frame->sp -= 65536;




 VAR_3->td_frame->sr &= ~VAR_0;

 VAR_3->td_md.md_tls_tcb_offset = VAR_2 + VAR_1;
}

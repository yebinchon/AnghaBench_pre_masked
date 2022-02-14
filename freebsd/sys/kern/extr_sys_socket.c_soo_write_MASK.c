
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uio {TYPE_1__* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct socket {int so_options; } ;
struct file {struct socket* f_data; } ;
struct TYPE_3__ {int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ucred*,struct socket*) ;
 int FUNC_3 (struct socket*,int ,struct uio*,int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_3, struct uio *VAR_4, struct ucred *VAR_5,
    int VAR_6, struct thread *VAR_7)
{
 struct socket *VAR_8 = VAR_3->f_data;
 int VAR_9;






 VAR_9 = FUNC_3(VAR_8, 0, VAR_4, 0, 0, 0, VAR_4->uio_td);
 if (VAR_9 == VAR_0 && (VAR_8->so_options & VAR_2) == 0) {
  FUNC_0(VAR_4->uio_td->td_proc);
  FUNC_4(VAR_4->uio_td, VAR_1);
  FUNC_1(VAR_4->uio_td->td_proc);
 }
 return (VAR_9);
}

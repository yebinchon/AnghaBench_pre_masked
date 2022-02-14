
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int so_state; TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int sa_len; } ;
struct file {struct socket* f_data; } ;
typedef scalar_t__ socklen_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_peeraddr ) (struct socket*,struct sockaddr**) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct sockaddr*,int ) ;
 int FUNC_7 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_8 (struct sockaddr*) ;
 int FUNC_9 (struct socket*,struct sockaddr**) ;

int
FUNC_10(struct thread *VAR_6, int VAR_7, struct sockaddr **VAR_8,
    socklen_t *VAR_9)
{
 struct socket *VAR_10;
 struct file *VAR_11;
 socklen_t VAR_12;
 int VAR_13;

 FUNC_0(VAR_7);
 VAR_13 = FUNC_7(VAR_6, VAR_7, &VAR_5,
     &VAR_11, ((void*)0), ((void*)0));
 if (VAR_13 != 0)
  return (VAR_13);
 VAR_10 = VAR_11->f_data;
 if ((VAR_10->so_state & (VAR_4|VAR_3)) == 0) {
  VAR_13 = VAR_0;
  goto done;
 }
 *VAR_8 = ((void*)0);
 FUNC_2(VAR_10->so_vnet);
 VAR_13 = (*VAR_10->so_proto->pr_usrreqs->pru_peeraddr)(VAR_10, VAR_8);
 FUNC_1();
 if (VAR_13 != 0)
  goto bad;
 if (*VAR_8 == ((void*)0))
  VAR_12 = 0;
 else
  VAR_12 = FUNC_4(*VAR_9, (*VAR_8)->sa_len);
 *VAR_9 = VAR_12;




bad:
 if (VAR_13 != 0 && *VAR_8 != ((void*)0)) {
  FUNC_6(*VAR_8, VAR_2);
  *VAR_8 = ((void*)0);
 }
done:
 FUNC_5(VAR_11, VAR_6);
 return (VAR_13);
}

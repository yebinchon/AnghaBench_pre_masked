
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int sa_len; } ;
struct file {struct socket* f_data; } ;
typedef scalar_t__ socklen_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct sockaddr*,int ) ;
 int FUNC_7 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_8 (struct sockaddr*) ;
 int FUNC_9 (struct socket*,struct sockaddr**) ;

int
FUNC_10(struct thread *VAR_3, int VAR_4, struct sockaddr **VAR_5,
    socklen_t *VAR_6)
{
 struct socket *VAR_7;
 struct file *VAR_8;
 socklen_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_4);
 VAR_10 = FUNC_7(VAR_3, VAR_4, &VAR_2,
     &VAR_8, ((void*)0), ((void*)0));
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_7 = VAR_8->f_data;
 *VAR_5 = ((void*)0);
 FUNC_2(VAR_7->so_vnet);
 VAR_10 = (*VAR_7->so_proto->pr_usrreqs->pru_sockaddr)(VAR_7, VAR_5);
 FUNC_1();
 if (VAR_10 != 0)
  goto bad;
 if (*VAR_5 == ((void*)0))
  VAR_9 = 0;
 else
  VAR_9 = FUNC_4(*VAR_6, (*VAR_5)->sa_len);
 *VAR_6 = VAR_9;




bad:
 FUNC_5(VAR_8, VAR_3);
 if (VAR_10 != 0 && *VAR_5 != ((void*)0)) {
  FUNC_6(*VAR_5, VAR_1);
  *VAR_5 = ((void*)0);
 }
 return (VAR_10);
}

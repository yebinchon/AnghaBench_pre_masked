
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_state; scalar_t__ so_type; int so_timeo; int so_vnet; int so_error; struct protosw* so_proto; } ;
struct protosw {TYPE_1__* pr_usrreqs; } ;
struct TYPE_2__ {int (* pru_shutdown ) (struct socket*) ;int (* pru_flush ) (struct socket*,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct socket *VAR_10, int VAR_11)
{
 struct protosw *VAR_12 = VAR_10->so_proto;
 int VAR_13, VAR_14;

 if (!(VAR_11 == VAR_3 || VAR_11 == VAR_5 || VAR_11 == VAR_4))
  return (VAR_1);

 VAR_14 = 0;
 if ((VAR_10->so_state &
     (VAR_7 | VAR_8 | VAR_9)) == 0) {
  if (VAR_10->so_type != VAR_6 && !FUNC_2(VAR_10))
   return (VAR_2);
  VAR_14 = 1;
 }

 if (FUNC_2(VAR_10)) {
  if (VAR_11 != VAR_5) {
   FUNC_3(VAR_10);
   VAR_10->so_error = VAR_0;
   FUNC_4(VAR_10);
  }
  goto done;
 }

 FUNC_1(VAR_10->so_vnet);
 if (VAR_12->pr_usrreqs->pru_flush != ((void*)0))
  (*VAR_12->pr_usrreqs->pru_flush)(VAR_10, VAR_11);
 if (VAR_11 != VAR_5)
  FUNC_5(VAR_10);
 if (VAR_11 != VAR_3) {
  VAR_13 = (*VAR_12->pr_usrreqs->pru_shutdown)(VAR_10);
  FUNC_8(&VAR_10->so_timeo);
  FUNC_0();
  return ((VAR_13 == 0 && VAR_14) ? VAR_2 : VAR_13);
 }
 FUNC_8(&VAR_10->so_timeo);
 FUNC_0();

done:
 return (VAR_14 ? VAR_2 : 0);
}

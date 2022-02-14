
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {TYPE_1__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct mbuf {scalar_t__ m_len; } ;
struct TYPE_2__ {int (* pr_output ) (struct mbuf*,struct socket*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 int * FUNC_2 (struct socket*) ;
 int FUNC_3 (struct mbuf*,struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2, int VAR_3, struct mbuf *VAR_4, struct sockaddr *VAR_5,
    struct mbuf *VAR_6, struct thread *VAR_7)
{

 FUNC_0(FUNC_2(VAR_2) != ((void*)0), ("raw_usend: rp == NULL"));

 if ((VAR_3 & VAR_1) || (VAR_6 && VAR_6->m_len)) {
  if (VAR_4 != ((void*)0))
   FUNC_1(VAR_4);
  if (VAR_6 != ((void*)0))
   FUNC_1(VAR_6);
  return (VAR_0);
 }





 return ((*VAR_2->so_proto->pr_output)(VAR_4, VAR_2));
}

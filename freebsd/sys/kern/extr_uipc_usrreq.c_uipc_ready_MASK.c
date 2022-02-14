
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {struct socket* unp_socket; struct unpcb* unp_conn; } ;
struct socket {int so_rcv; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct unpcb*) ;
 scalar_t__ FUNC_3 (struct unpcb*) ;
 int FUNC_4 (struct unpcb*) ;
 struct mbuf* FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int *,struct mbuf*,int) ;
 int FUNC_7 (struct socket*) ;
 struct unpcb* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct unpcb*) ;
 scalar_t__ FUNC_10 (struct unpcb*) ;

__attribute__((used)) static int
FUNC_11(struct socket *VAR_1, struct mbuf *VAR_2, int VAR_3)
{
 struct unpcb *VAR_4, *VAR_5;
 struct socket *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_8(VAR_1);

 FUNC_2(VAR_4);
 if ((VAR_5 = VAR_4->unp_conn) == ((void*)0)) {
  FUNC_4(VAR_4);
  goto error;
 }
 if (VAR_4 != VAR_5) {
  if (FUNC_3(VAR_5) == 0) {
   FUNC_9(VAR_5);
   FUNC_4(VAR_4);
   FUNC_2(VAR_5);
   if (FUNC_10(VAR_5))
    goto error;
  } else
   FUNC_4(VAR_4);
 }
 VAR_6 = VAR_5->unp_socket;

 FUNC_0(&VAR_6->so_rcv);
 if ((VAR_7 = FUNC_6(&VAR_6->so_rcv, VAR_2, VAR_3)) == 0)
  FUNC_7(VAR_6);
 else
  FUNC_1(&VAR_6->so_rcv);

 FUNC_4(VAR_5);

 return (VAR_7);
 error:
 for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_2 = FUNC_5(VAR_2);
 return (VAR_0);
}

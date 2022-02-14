
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int * unp_addr; struct unpcb* unp_conn; } ;
struct socket {int dummy; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int sa_len; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct unpcb*) ;
 int FUNC_4 (struct unpcb*) ;
 int FUNC_5 (struct sockaddr const*,struct sockaddr*,int ) ;
 struct sockaddr* FUNC_6 (int,int ,int ) ;
 struct unpcb* FUNC_7 (struct socket*) ;
 struct sockaddr VAR_2 ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_3, struct sockaddr **VAR_4)
{
 struct unpcb *VAR_5, *VAR_6;
 const struct sockaddr *VAR_7;





 VAR_5 = FUNC_7(VAR_3);
 FUNC_0(VAR_5 != ((void*)0), ("uipc_accept: unp == NULL"));

 *VAR_4 = FUNC_6(sizeof(struct sockaddr_un), VAR_0, VAR_1);
 FUNC_1();
 VAR_6 = VAR_5->unp_conn;
 if (VAR_6 != ((void*)0) && VAR_6->unp_addr != ((void*)0)) {
  FUNC_3(VAR_6);
  VAR_7 = (struct sockaddr *) VAR_6->unp_addr;
  FUNC_5(VAR_7, *VAR_4, VAR_7->sa_len);
  FUNC_4(VAR_6);
 } else {
  VAR_7 = &VAR_2;
  FUNC_5(VAR_7, *VAR_4, VAR_7->sa_len);
 }
 FUNC_2();
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rcv; } ;
struct sockaddr_ng {int sg_len; char* sg_data; int sg_family; } ;
struct sockaddr {int dummy; } ;
struct ngsock {struct ngpcb* datasock; } ;
struct ngpcb {struct socket* ng_socket; } ;
struct mbuf {int dummy; } ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct ngsock* FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct mbuf*) ;
 scalar_t__ FUNC_8 (int *,struct sockaddr*,struct mbuf*,int *) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(hook_p VAR_4, item_p VAR_5)
{
 struct ngsock *const VAR_6 = FUNC_5(FUNC_4(VAR_4));
 struct ngpcb *const VAR_7 = VAR_6->datasock;
 struct socket *VAR_8;
 struct sockaddr_ng *VAR_9;
 char *VAR_10[VAR_2 + 4];
 int VAR_11;
 struct mbuf *VAR_12;

 FUNC_0(VAR_5, VAR_12);
 FUNC_1(VAR_5);


 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_12);
  return (0);
 }
 VAR_8 = VAR_7->ng_socket;


 VAR_11 = FUNC_10(FUNC_3(VAR_4));
 VAR_9 = (struct sockaddr_ng *) VAR_10;
 VAR_9->sg_len = VAR_11 + 3;
 VAR_9->sg_family = VAR_0;
 FUNC_6(FUNC_3(VAR_4), VAR_9->sg_data, VAR_11);
 VAR_9->sg_data[VAR_11] = '\0';


 if (FUNC_8(&VAR_8->so_rcv, (struct sockaddr *)VAR_9, VAR_12, ((void*)0)) == 0) {
  FUNC_7(VAR_12);
  VAR_3;
  return (VAR_1);
 }
 FUNC_9(VAR_8);
 return (0);
}

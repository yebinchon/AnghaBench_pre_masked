
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct socket {struct sock* sk; } ;
struct sockaddr_pn {scalar_t__ spn_family; int spn_resource; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; TYPE_1__* sk_prot; } ;
struct pn_sock {int resource; int sobject; } ;
struct TYPE_2__ {int (* bind ) (struct sock*,struct sockaddr*,int) ;int (* get_port ) (struct sock*,scalar_t__) ;int (* hash ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 struct pn_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sockaddr_pn*) ;
 int VAR_5 ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct sockaddr*,int) ;
 int FUNC_14 (struct sock*,scalar_t__) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_6, struct sockaddr *VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_6->sk;
 struct pn_sock *VAR_10 = FUNC_8(VAR_9);
 struct sockaddr_pn *VAR_11 = (struct sockaddr_pn *)VAR_7;
 int VAR_12;
 u16 VAR_13;
 u8 VAR_14;

 if (VAR_9->sk_prot->bind)
  return VAR_9->sk_prot->bind(VAR_9, VAR_7, VAR_8);

 if (VAR_8 < sizeof(struct sockaddr_pn))
  return -VAR_3;
 if (VAR_11->spn_family != VAR_0)
  return -VAR_2;

 VAR_13 = FUNC_9((struct sockaddr_pn *)VAR_7);
 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14 && FUNC_4(FUNC_12(VAR_9), VAR_14))
  return -VAR_1;

 FUNC_1(VAR_9);
 if (VAR_9->sk_state != VAR_4 || FUNC_7(VAR_10->sobject)) {
  VAR_12 = -VAR_3;
  goto out;
 }
 FUNC_0(FUNC_11(VAR_9));
 FUNC_2(&VAR_5);
 VAR_12 = VAR_9->sk_prot->get_port(VAR_9, FUNC_7(VAR_13));
 if (VAR_12)
  goto out_port;


 VAR_10->sobject = FUNC_6(VAR_14, FUNC_7(VAR_10->sobject));
 VAR_10->resource = VAR_11->spn_resource;


 VAR_9->sk_prot->hash(VAR_9);
out_port:
 FUNC_3(&VAR_5);
out:
 FUNC_10(VAR_9);
 return VAR_12;
}

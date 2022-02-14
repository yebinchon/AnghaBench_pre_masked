
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct socket {struct sock* sk; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_family; int sk_protocol; } ;
struct inode_security_struct {scalar_t__ sclass; int sid; } ;
struct TYPE_4__ {scalar_t__ family; int dport; } ;
struct TYPE_5__ {TYPE_1__ net; } ;
struct common_audit_data {TYPE_2__ u; } ;
struct TYPE_6__ {struct inode_security_struct* i_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (struct socket*) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,scalar_t__,int ,struct common_audit_data*) ;
 int VAR_9 ;
 int FUNC_3 (unsigned short) ;
 unsigned short FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned short,int *) ;
 int FUNC_6 (struct sock*,struct sockaddr*) ;
 int FUNC_7 (int ,struct socket*,int ) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_10, struct sockaddr *VAR_11, int VAR_12)
{
 struct sock *VAR_13 = VAR_10->sk;
 struct inode_security_struct *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_7(VAR_9, VAR_10, VAR_7);
 if (VAR_15)
  return VAR_15;




 VAR_14 = FUNC_1(VAR_10)->i_security;
 if (VAR_14->sclass == VAR_5 ||
     VAR_14->sclass == VAR_4) {
  struct common_audit_data VAR_16;
  struct sockaddr_in *VAR_17 = ((void*)0);
  struct sockaddr_in6 *VAR_18 = ((void*)0);
  unsigned short VAR_19;
  u32 VAR_20, VAR_21;

  if (VAR_13->sk_family == VAR_3) {
   VAR_17 = (struct sockaddr_in *)VAR_11;
   if (VAR_12 < sizeof(struct sockaddr_in))
    return -VAR_1;
   VAR_19 = FUNC_4(VAR_17->sin_port);
  } else {
   VAR_18 = (struct sockaddr_in6 *)VAR_11;
   if (VAR_12 < VAR_6)
    return -VAR_1;
   VAR_19 = FUNC_4(VAR_18->sin6_port);
  }

  VAR_15 = FUNC_5(VAR_13->sk_protocol, VAR_19, &VAR_20);
  if (VAR_15)
   goto out;

  VAR_21 = (VAR_14->sclass == VAR_5) ?
         VAR_8 : VAR_0;

  FUNC_0(&VAR_16, VAR_2);
  VAR_16.u.net.dport = FUNC_3(VAR_19);
  VAR_16.u.net.family = VAR_13->sk_family;
  VAR_15 = FUNC_2(VAR_14->sid, VAR_20, VAR_14->sclass, VAR_21, &VAR_16);
  if (VAR_15)
   goto out;
 }

 VAR_15 = FUNC_6(VAR_13, VAR_11);

out:
 return VAR_15;
}

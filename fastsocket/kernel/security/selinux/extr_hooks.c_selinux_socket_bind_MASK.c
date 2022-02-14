
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct socket {struct sock* sk; } ;
struct TYPE_13__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_6__ sin6_addr; int sin6_port; } ;
struct TYPE_9__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_family; int sk_protocol; } ;
struct inode_security_struct {int sclass; int sid; } ;
struct TYPE_10__ {int saddr; } ;
struct TYPE_8__ {scalar_t__ saddr; } ;
struct TYPE_11__ {TYPE_3__ v6info; TYPE_1__ v4info; scalar_t__ family; void* sport; } ;
struct TYPE_12__ {TYPE_4__ net; } ;
struct common_audit_data {TYPE_5__ u; } ;
struct TYPE_14__ {struct inode_security_struct* i_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__* FUNC_1 (struct socket*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int,int ,struct common_audit_data*) ;
 int VAR_10 ;
 void* FUNC_3 (unsigned short) ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 (int *,TYPE_6__*) ;
 unsigned short FUNC_6 (int ,int) ;
 unsigned short FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__,int *) ;
 int FUNC_9 (int ,unsigned short,int *) ;
 int FUNC_10 (int ,struct socket*,int ) ;

__attribute__((used)) static int FUNC_11(struct socket *VAR_11, struct sockaddr *VAR_12, int VAR_13)
{
 u16 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_10(VAR_10, VAR_11, VAR_6);
 if (VAR_15)
  goto out;






 VAR_14 = VAR_11->sk->sk_family;
 if (VAR_14 == VAR_2 || VAR_14 == VAR_3) {
  char *VAR_16;
  struct inode_security_struct *VAR_17;
  struct common_audit_data VAR_18;
  struct sockaddr_in *VAR_19 = ((void*)0);
  struct sockaddr_in6 *VAR_20 = ((void*)0);
  unsigned short VAR_21;
  struct sock *VAR_22 = VAR_11->sk;
  u32 VAR_23, VAR_24;

  VAR_17 = FUNC_1(VAR_11)->i_security;

  if (VAR_14 == VAR_2) {
   VAR_19 = (struct sockaddr_in *)VAR_12;
   VAR_21 = FUNC_7(VAR_19->sin_port);
   VAR_16 = (char *)&VAR_19->sin_addr.s_addr;
  } else {
   VAR_20 = (struct sockaddr_in6 *)VAR_12;
   VAR_21 = FUNC_7(VAR_20->sin6_port);
   VAR_16 = (char *)&VAR_20->sin6_addr.s6_addr;
  }

  if (VAR_21) {
   int VAR_25, VAR_26;

   FUNC_4(&VAR_25, &VAR_26);

   if (VAR_21 < FUNC_6(VAR_4, VAR_25) || VAR_21 > VAR_26) {
    VAR_15 = FUNC_9(VAR_22->sk_protocol,
            VAR_21, &VAR_23);
    if (VAR_15)
     goto out;
    FUNC_0(&VAR_18, VAR_1);
    VAR_18.u.net.sport = FUNC_3(VAR_21);
    VAR_18.u.net.family = VAR_14;
    VAR_15 = FUNC_2(VAR_17->sid, VAR_23,
         VAR_17->sclass,
         VAR_7, &VAR_18);
    if (VAR_15)
     goto out;
   }
  }

  switch (VAR_17->sclass) {
  case 129:
   VAR_24 = VAR_8;
   break;

  case 128:
   VAR_24 = VAR_9;
   break;

  case 130:
   VAR_24 = VAR_0;
   break;

  default:
   VAR_24 = VAR_5;
   break;
  }

  VAR_15 = FUNC_8(VAR_16, VAR_14, &VAR_23);
  if (VAR_15)
   goto out;

  FUNC_0(&VAR_18, VAR_1);
  VAR_18.u.net.sport = FUNC_3(VAR_21);
  VAR_18.u.net.family = VAR_14;

  if (VAR_14 == VAR_2)
   VAR_18.u.net.v4info.saddr = VAR_19->sin_addr.s_addr;
  else
   FUNC_5(&VAR_18.u.net.v6info.saddr, &VAR_20->sin6_addr);

  VAR_15 = FUNC_2(VAR_17->sid, VAR_23,
       VAR_17->sclass, VAR_24, &VAR_18);
  if (VAR_15)
   goto out;
 }
out:
 return VAR_15;
}

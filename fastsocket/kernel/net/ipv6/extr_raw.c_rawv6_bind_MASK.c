
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; scalar_t__ sin6_scope_id; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_bound_dev_if; } ;
struct net_device {int dummy; } ;
struct ipv6_pinfo {int saddr; int rcv_saddr; } ;
struct inet_sock {int saddr; int rcv_saddr; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,struct net_device*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_10, struct sockaddr *VAR_11, int VAR_12)
{
 struct inet_sock *VAR_13 = FUNC_3(VAR_10);
 struct ipv6_pinfo *VAR_14 = FUNC_2(VAR_10);
 struct sockaddr_in6 *VAR_15 = (struct sockaddr_in6 *) VAR_11;
 __be32 VAR_16 = 0;
 int VAR_17;
 int VAR_18;

 if (VAR_12 < VAR_8)
  return -VAR_1;
 VAR_17 = FUNC_5(&VAR_15->sin6_addr);


 if (VAR_17 == VAR_5)
  return(-VAR_0);

 FUNC_7(VAR_10);

 VAR_18 = -VAR_1;
 if (VAR_10->sk_state != VAR_9)
  goto out;


 if (VAR_17 != VAR_3) {
  struct net_device *VAR_19 = ((void*)0);

  if (VAR_17 & VAR_4) {
   if (VAR_12 >= sizeof(struct sockaddr_in6) &&
       VAR_15->sin6_scope_id) {



    VAR_10->sk_bound_dev_if = VAR_15->sin6_scope_id;
   }


   if (!VAR_10->sk_bound_dev_if)
    goto out;

   VAR_19 = FUNC_0(FUNC_9(VAR_10), VAR_10->sk_bound_dev_if);
   if (!VAR_19) {
    VAR_18 = -VAR_2;
    goto out;
   }
  }




  VAR_16 = VAR_7;
  if (!(VAR_17 & VAR_6)) {
   VAR_18 = -VAR_0;
   if (!FUNC_6(FUNC_9(VAR_10), &VAR_15->sin6_addr,
        VAR_19, 0)) {
    if (VAR_19)
     FUNC_1(VAR_19);
    goto out;
   }
  }
  if (VAR_19)
   FUNC_1(VAR_19);
 }

 VAR_13->rcv_saddr = VAR_13->saddr = VAR_16;
 FUNC_4(&VAR_14->rcv_saddr, &VAR_15->sin6_addr);
 if (!(VAR_17 & VAR_6))
  FUNC_4(&VAR_14->saddr, &VAR_15->sin6_addr);
 VAR_18 = 0;
out:
 FUNC_8(VAR_10);
 return VAR_18;
}

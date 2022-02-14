
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_iucv {int siucv_name; int siucv_user_id; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; } ;
struct iucv_sock {scalar_t__ transport; int dst_name; int dst_user_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct socket*,struct sockaddr*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 struct iucv_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct sock*,int ,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_15, struct sockaddr *VAR_16,
        int VAR_17, int VAR_18)
{
 struct sockaddr_iucv *VAR_19 = (struct sockaddr_iucv *) VAR_16;
 struct sock *VAR_20 = VAR_15->sk;
 struct iucv_sock *VAR_21 = FUNC_3(VAR_20);
 int VAR_22;

 if (VAR_16->sa_family != VAR_0 || VAR_17 < sizeof(struct sockaddr_iucv))
  return -VAR_6;

 if (VAR_20->sk_state != VAR_11 && VAR_20->sk_state != VAR_7)
  return -VAR_4;

 if (VAR_20->sk_state == VAR_11 &&
     VAR_21->transport == VAR_2)
  return -VAR_4;

 if (VAR_20->sk_type != VAR_14 && VAR_20->sk_type != VAR_13)
  return -VAR_6;

 if (VAR_20->sk_state == VAR_11) {
  VAR_22 = FUNC_4(VAR_20);
  if (FUNC_11(VAR_22))
   return VAR_22;
 }

 FUNC_7(VAR_20);


 FUNC_8(VAR_21->dst_user_id, VAR_19->siucv_user_id, 8);
 FUNC_8(VAR_21->dst_name, VAR_19->siucv_name, 8);

 if (VAR_21->transport == VAR_2)
  VAR_22 = FUNC_1(VAR_20, VAR_1);
 else
  VAR_22 = FUNC_0(VAR_15, VAR_16);
 if (VAR_22)
  goto done;

 if (VAR_20->sk_state != VAR_9)
  VAR_22 = FUNC_6(VAR_20, FUNC_5(VAR_20, VAR_9,
           VAR_10),
         FUNC_10(VAR_20, VAR_18 & VAR_12));

 if (VAR_20->sk_state == VAR_10 || VAR_20->sk_state == VAR_8)
  VAR_22 = -VAR_5;

 if (VAR_22 && VAR_21->transport == VAR_3)
  FUNC_2(VAR_20, 0);

done:
 FUNC_9(VAR_20);
 return VAR_22;
}

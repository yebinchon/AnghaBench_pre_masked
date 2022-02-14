
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_rc {int rc_channel; int rc_bdaddr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; } ;
struct rfcomm_dlc {int role_switch; int sec_level; } ;
struct TYPE_4__ {int src; int dst; } ;
struct TYPE_3__ {int role_switch; int sec_level; int channel; struct rfcomm_dlc* dlc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct sock*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct rfcomm_dlc*,int *,int *,int ) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_9, struct sockaddr *VAR_10, int VAR_11, int VAR_12)
{
 struct sockaddr_rc *VAR_13 = (struct sockaddr_rc *) VAR_10;
 struct sock *VAR_14 = VAR_9->sk;
 struct rfcomm_dlc *VAR_15 = FUNC_7(VAR_14)->dlc;
 int VAR_16 = 0;

 FUNC_0("sk %p", VAR_14);

 if (VAR_10->sa_family != VAR_0 || VAR_11 < sizeof(struct sockaddr_rc))
  return -VAR_6;

 FUNC_4(VAR_14);

 if (VAR_14->sk_state != VAR_4 && VAR_14->sk_state != VAR_1) {
  VAR_16 = -VAR_5;
  goto done;
 }

 if (VAR_14->sk_type != VAR_8) {
  VAR_16 = -VAR_6;
  goto done;
 }

 VAR_14->sk_state = VAR_2;
 FUNC_1(&FUNC_2(VAR_14)->dst, &VAR_13->rc_bdaddr);
 FUNC_7(VAR_14)->channel = VAR_13->rc_channel;

 VAR_15->sec_level = FUNC_7(VAR_14)->sec_level;
 VAR_15->role_switch = FUNC_7(VAR_14)->role_switch;

 VAR_16 = FUNC_6(VAR_15, &FUNC_2(VAR_14)->src, &VAR_13->rc_bdaddr, VAR_13->rc_channel);
 if (!VAR_16)
  VAR_16 = FUNC_3(VAR_14, VAR_3,
    FUNC_8(VAR_14, VAR_12 & VAR_7));

done:
 FUNC_5(VAR_14);
 return VAR_16;
}

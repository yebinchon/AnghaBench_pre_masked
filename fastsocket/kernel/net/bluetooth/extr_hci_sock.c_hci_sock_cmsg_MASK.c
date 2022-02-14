
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_usec; int tv_sec; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct compat_timeval {int tv_usec; int tv_sec; } ;
typedef int incoming ;
typedef int ctv ;
typedef int __u32 ;
struct TYPE_4__ {int incoming; } ;
struct TYPE_3__ {int cmsg_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct msghdr*,int ,int,int,void*) ;
 int FUNC_3 (struct sk_buff*,struct timeval*) ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_4, struct msghdr *VAR_5, struct sk_buff *VAR_6)
{
 __u32 VAR_7 = FUNC_1(VAR_4)->cmsg_mask;

 if (VAR_7 & VAR_0) {
  int VAR_8 = FUNC_0(VAR_6)->incoming;
  FUNC_2(VAR_5, VAR_3, VAR_0, sizeof(VAR_8), &VAR_8);
 }

 if (VAR_7 & VAR_1) {
  struct timeval VAR_9;
  void *VAR_10;
  int VAR_11;

  FUNC_3(VAR_6, &VAR_9);

  VAR_10 = &VAR_9;
  VAR_11 = sizeof(VAR_9);
  FUNC_2(VAR_5, VAR_3, VAR_1, VAR_11, VAR_10);
 }
}

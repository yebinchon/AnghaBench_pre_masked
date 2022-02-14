
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_allocation; } ;
struct TYPE_5__ {int path; TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_2__ dst; } ;
struct rtable {TYPE_3__ u; } ;
struct ipcm_cookie {int addr; struct ip_options* opt; } ;
struct ip_options {scalar_t__ optlen; } ;
struct inet_sock {scalar_t__ pmtudisc; } ;
struct inet_cork {scalar_t__ length; TYPE_2__* dst; int fragsize; int addr; int flags; int * opt; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct ip_options*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_4, struct inet_cork *VAR_5,
    struct ipcm_cookie *VAR_6, struct rtable **VAR_7)
{
 struct inet_sock *VAR_8 = FUNC_1(VAR_4);
 struct ip_options *VAR_9;
 struct rtable *VAR_10;




 VAR_9 = VAR_6->opt;
 if (VAR_9) {
  if (VAR_5->opt == ((void*)0)) {
   VAR_5->opt = FUNC_2(sizeof(struct ip_options) + 40,
         VAR_4->sk_allocation);
   if (FUNC_4(VAR_5->opt == ((void*)0)))
    return -VAR_1;
  }
  FUNC_3(VAR_5->opt, VAR_9, sizeof(struct ip_options) + VAR_9->optlen);
  VAR_5->flags |= VAR_2;
  VAR_5->addr = VAR_6->addr;
 }
 VAR_10 = *VAR_7;
 if (FUNC_4(!VAR_10))
  return -VAR_0;



 *VAR_7 = ((void*)0);
 VAR_5->fragsize = VAR_8->pmtudisc == VAR_3 ?
    VAR_10->u.dst.dev->mtu : FUNC_0(VAR_10->u.dst.path);
 VAR_5->dst = &VAR_10->u.dst;
 VAR_5->length = 0;

 return 0;
}

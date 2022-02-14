
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct TYPE_3__ {scalar_t__ type; struct net_device const* dev; } ;
struct packet_sock {int running; int bind_lock; TYPE_1__ prot_hook; int ifindex; scalar_t__ num; } ;
typedef struct net_device {int flags; int ifindex; } const net_device ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct sock*) ;
 struct packet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_3, struct net_device *VAR_4, __be16 VAR_5)
{
 struct packet_sock *VAR_6 = FUNC_4(VAR_3);
 const struct net_device *VAR_7;
 __be16 VAR_8;
 bool VAR_9;

 FUNC_3(VAR_3);
 FUNC_8(&VAR_6->bind_lock);

 VAR_8 = VAR_6->prot_hook.type;
 VAR_7 = VAR_6->prot_hook.dev;

 VAR_9 = VAR_8 != VAR_5 || VAR_7 != VAR_4;

 if (VAR_9) {
  if (VAR_6->running) {
   FUNC_0(VAR_3);
   VAR_6->running = 0;
   VAR_6->num = 0;
   FUNC_9(&VAR_6->bind_lock);
   FUNC_2(&VAR_6->prot_hook);
   FUNC_8(&VAR_6->bind_lock);
  }

  VAR_6->num = VAR_5;
  VAR_6->prot_hook.type = VAR_5;
  VAR_6->prot_hook.dev = VAR_4;

  VAR_6->ifindex = VAR_4 ? VAR_4->ifindex : 0;
 }

 if (VAR_5 == 0 || !VAR_9)
  goto out_unlock;

 if (!VAR_4 || (VAR_4->flags & VAR_1)) {
  FUNC_1(&VAR_6->prot_hook);
  FUNC_7(VAR_3);
  VAR_6->running = 1;
 } else {
  VAR_3->sk_err = VAR_0;
  if (!FUNC_6(VAR_3, VAR_2))
   VAR_3->sk_error_report(VAR_3);
 }

out_unlock:
 FUNC_9(&VAR_6->bind_lock);
 FUNC_5(VAR_3);
 return 0;
}

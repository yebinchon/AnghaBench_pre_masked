
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet_frags {int dummy; } ;
struct TYPE_4__ {int last_in; int lock; TYPE_3__* fragments; } ;
struct frag_queue {TYPE_1__ q; int iif; } ;
struct TYPE_5__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,struct net_device*) ;
 int FUNC_5 (TYPE_1__*,struct inet_frags*) ;
 int FUNC_6 (TYPE_1__*,struct inet_frags*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct net *VAR_6, struct frag_queue *VAR_7,
      struct inet_frags *VAR_8)
{
 struct net_device *VAR_9 = ((void*)0);

 FUNC_9(&VAR_7->q.lock);

 if (VAR_7->q.last_in & VAR_2)
  goto out;

 FUNC_5(&VAR_7->q, VAR_8);

 VAR_9 = FUNC_2(VAR_6, VAR_7->iif);
 if (!VAR_9)
  goto out;

 FUNC_7();
 FUNC_0(VAR_6, FUNC_1(VAR_9), VAR_5);
 FUNC_0(VAR_6, FUNC_1(VAR_9), VAR_4);
 FUNC_8();


 if (!(VAR_7->q.last_in & VAR_3) || !VAR_7->q.fragments)
  goto out;






 VAR_7->q.fragments->dev = VAR_9;
 FUNC_4(VAR_7->q.fragments, VAR_1, VAR_0, 0, VAR_9);
out:
 if (VAR_9)
  FUNC_3(VAR_9);
 FUNC_10(&VAR_7->q.lock);
 FUNC_6(&VAR_7->q, VAR_8);
}

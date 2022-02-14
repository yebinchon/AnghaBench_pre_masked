
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int x25_addr; } ;
struct x25_sock {int neighbour; int state; int dest_addr; TYPE_2__ source_addr; int lci; int facilities; } ;
struct x25_route {int dev; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_x25 {scalar_t__ sx25_family; int sx25_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_3__ {int x25_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (TYPE_2__*,char,int ) ;
 TYPE_1__ VAR_17 ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 struct x25_route* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct x25_route*) ;
 struct x25_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_18, struct sockaddr *VAR_19,
         int VAR_20, int VAR_21)
{
 struct sock *VAR_22 = VAR_18->sk;
 struct x25_sock *VAR_23 = FUNC_11(VAR_22);
 struct sockaddr_x25 *VAR_24 = (struct sockaddr_x25 *)VAR_19;
 struct x25_route *VAR_25;
 int VAR_26 = 0;

 FUNC_0(VAR_22);
 if (VAR_22->sk_state == VAR_12 && VAR_18->state == VAR_9) {
  VAR_18->state = VAR_8;
  goto out;
 }

 VAR_26 = -VAR_1;
 if (VAR_22->sk_state == VAR_11 && VAR_18->state == VAR_9) {
  VAR_18->state = VAR_10;
  goto out;
 }

 VAR_26 = -VAR_4;
 if (VAR_22->sk_state == VAR_12)
  goto out;

 VAR_22->sk_state = VAR_11;
 VAR_18->state = VAR_10;

 VAR_26 = -VAR_3;
 if (VAR_20 != sizeof(struct sockaddr_x25) ||
     VAR_24->sx25_family != VAR_0)
  goto out;

 VAR_26 = -VAR_5;
 VAR_25 = FUNC_6(&VAR_24->sx25_addr);
 if (!VAR_25)
  goto out;

 VAR_23->neighbour = FUNC_5(VAR_25->dev);
 if (!VAR_23->neighbour)
  goto out_put_route;

 FUNC_7(&VAR_23->facilities, VAR_23->neighbour);

 VAR_23->lci = FUNC_9(VAR_23->neighbour);
 if (!VAR_23->lci)
  goto out_put_neigh;

 VAR_26 = -VAR_3;
 if (FUNC_3(VAR_22, VAR_7))
  goto out_put_neigh;

 if (!FUNC_4(VAR_23->source_addr.x25_addr, VAR_17.x25_addr))
  FUNC_1(&VAR_23->source_addr, '\0', VAR_14);

 VAR_23->dest_addr = VAR_24->sx25_addr;


 VAR_18->state = VAR_9;
 VAR_22->sk_state = VAR_13;

 VAR_23->state = VAR_16;

 FUNC_15(VAR_22, VAR_15);

 FUNC_12(VAR_22);
 FUNC_13(VAR_22);


 VAR_26 = -VAR_2;
 if (VAR_22->sk_state != VAR_12 && (VAR_21 & VAR_6))
  goto out_put_neigh;

 VAR_26 = FUNC_14(VAR_22);
 if (VAR_26)
  goto out_put_neigh;

 VAR_18->state = VAR_8;
 VAR_26 = 0;
out_put_neigh:
 if (VAR_26)
  FUNC_8(VAR_23->neighbour);
out_put_route:
 FUNC_10(VAR_25);
out:
 FUNC_2(VAR_22);
 return VAR_26;
}

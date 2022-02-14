
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; int so_snd; int so_rcv; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_3__ {int flags; struct socket* so; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int *,int *,struct socket* const,int ) ;
 int FUNC_7 (struct socket*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(hook_p VAR_7)
{
 node_p VAR_8 = FUNC_0(VAR_7);
 const priv_p VAR_9 = FUNC_1(VAR_8);
 struct socket *const VAR_10 = VAR_9->so;


 FUNC_2(&VAR_9->so->so_rcv);
 FUNC_7(VAR_9->so, VAR_2, VAR_5, VAR_8);
 FUNC_3(&VAR_9->so->so_rcv);
 FUNC_2(&VAR_9->so->so_snd);
 FUNC_7(VAR_9->so, VAR_3, VAR_5, VAR_8);
 FUNC_3(&VAR_9->so->so_snd);
 FUNC_4(VAR_9->so);
 VAR_9->so->so_state |= VAR_4;
 FUNC_5(VAR_9->so);
 if (VAR_9->flags & VAR_0) {
  FUNC_6(VAR_8, ((void*)0), &VAR_6, VAR_10, VAR_1);
 }

 return (0);
}

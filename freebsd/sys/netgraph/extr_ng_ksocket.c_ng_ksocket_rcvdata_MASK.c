
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sa_tag {scalar_t__ id; struct sockaddr sa; } ;
struct mbuf {int m_flags; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_3__ {struct socket* so; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct mbuf*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int const) ;
 TYPE_1__* FUNC_5 (int const) ;
 int VAR_6 ;
 struct thread* VAR_7 ;
 struct mbuf* FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (struct mbuf*) ;
 scalar_t__ FUNC_8 (struct mbuf*,int ,int ,int *) ;
 int FUNC_9 (struct mbuf*,int ) ;
 int FUNC_10 (struct socket* const,struct sockaddr*,int ,struct mbuf*,int ,int ,struct thread*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_11(hook_p VAR_9, item_p VAR_10)
{
 struct thread *VAR_11 = VAR_7;
 const node_p VAR_12 = FUNC_3(VAR_9);
 const priv_p VAR_13 = FUNC_5(VAR_12);
 struct socket *const VAR_14 = VAR_13->so;
 struct sockaddr *VAR_15 = ((void*)0);
 int VAR_16;
 struct mbuf *VAR_17;



 struct sa_tag *VAR_18;


 FUNC_1(VAR_10, VAR_17);
 FUNC_2(VAR_10);
 if (((VAR_18 = (struct sa_tag *)FUNC_8(VAR_17, VAR_4,
     VAR_5, ((void*)0))) != ((void*)0)) &&
     (VAR_18->id == FUNC_4(VAR_12) || VAR_18->id == 0))
  VAR_15 = &VAR_18->sa;


 VAR_17->m_flags &= ~(VAR_1|VAR_2);


 VAR_16 = FUNC_10(VAR_14, VAR_15, 0, VAR_17, 0, 0, VAR_11);

 return (VAR_16);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngsock {int flags; TYPE_2__* datasock; } ;
struct hookpriv {int dummy; } ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_4__ {TYPE_1__* ng_socket; } ;
struct TYPE_3__ {int so_state; } ;


 int FUNC_0 (struct hookpriv*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct hookpriv* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct ngsock* FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (struct hookpriv*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(hook_p VAR_4)
{
 node_p VAR_5 = FUNC_1(VAR_4);
 struct ngsock *const VAR_6 = FUNC_5(VAR_5);
 struct hookpriv *VAR_7 = FUNC_2(VAR_4);

 FUNC_0(VAR_7, VAR_3);
 FUNC_6(VAR_7, VAR_0);

 if ((VAR_6->datasock) && (VAR_6->datasock->ng_socket)) {
  if (FUNC_4(VAR_5) == 1)
   VAR_6->datasock->ng_socket->so_state |= VAR_2;
  else
   VAR_6->datasock->ng_socket->so_state &= ~VAR_2;
 }

 if ((VAR_6->flags & VAR_1) &&
     (FUNC_4(VAR_5) == 0) && (FUNC_3(VAR_5)))
  FUNC_7(VAR_5);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngsock {TYPE_2__* datasock; } ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_4__ {TYPE_1__* ng_socket; } ;
struct TYPE_3__ {int so_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ngsock* FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(hook_p VAR_1)
{
 node_p VAR_2 = FUNC_0(VAR_1);
 struct ngsock *VAR_3 = FUNC_2(VAR_2);

 if ((VAR_3->datasock) && (VAR_3->datasock->ng_socket)) {
  if (FUNC_1(VAR_2) == 1)
   VAR_3->datasock->ng_socket->so_state |= VAR_0;
  else
   VAR_3->datasock->ng_socket->so_state &= ~VAR_0;
 }
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bits; } ;
struct ng_mppc_dir {int flushed; TYPE_1__ cfg; int key; int rc4; int * history; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {struct ng_mppc_dir xmit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_2(VAR_1);
 struct ng_mppc_dir *const VAR_3 = &VAR_2->xmit;
 VAR_3->flushed = 1;
}

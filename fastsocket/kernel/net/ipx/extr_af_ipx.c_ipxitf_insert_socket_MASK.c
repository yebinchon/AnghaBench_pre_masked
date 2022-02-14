
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ipx_interface {int if_sklist_lock; int if_sklist; } ;
struct TYPE_2__ {struct ipx_interface* intrfc; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct ipx_interface*) ;
 int FUNC_2 (struct ipx_interface*) ;
 int FUNC_3 (struct sock*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ipx_interface *VAR_0, struct sock *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->if_sklist_lock);
 FUNC_0(VAR_1)->intrfc = VAR_0;
 FUNC_3(VAR_1, &VAR_0->if_sklist);
 FUNC_5(&VAR_0->if_sklist_lock);
 FUNC_2(VAR_0);
}

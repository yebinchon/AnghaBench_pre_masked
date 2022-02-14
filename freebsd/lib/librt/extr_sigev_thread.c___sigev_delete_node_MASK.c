
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigev_node {int sn_flags; TYPE_1__* sn_tn; } ;
struct TYPE_2__ {scalar_t__ tn_refcount; int tn_thread; } ;


 int FUNC_0 (struct sigev_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sigev_node*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;

int
FUNC_3(struct sigev_node *VAR_4)
{
 FUNC_0(VAR_4, VAR_3);

 if (--VAR_4->sn_tn->tn_refcount == 0)
  FUNC_2(VAR_4->sn_tn->tn_thread, VAR_0);
 if (VAR_4->sn_flags & VAR_2)
  VAR_4->sn_flags |= VAR_1;
 else
  FUNC_1(VAR_4);
 return (0);
}

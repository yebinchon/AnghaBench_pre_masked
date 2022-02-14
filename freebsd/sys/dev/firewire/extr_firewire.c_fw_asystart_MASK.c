
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_xfer {TYPE_1__* q; int * mbuf; int flag; struct firewire_comm* fc; } ;
struct firewire_comm {int dummy; } ;
struct TYPE_2__ {int (* start ) (struct firewire_comm*) ;int queued; int q; } ;


 int VAR_0 ;
 int FUNC_0 (struct firewire_comm*) ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (int *,struct fw_xfer*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct firewire_comm*) ;

__attribute__((used)) static void
FUNC_4(struct fw_xfer *VAR_2)
{
 struct firewire_comm *VAR_3 = VAR_2->fc;


 FUNC_0(VAR_3);
 VAR_2->flag = VAR_0;
 FUNC_2(&VAR_2->q->q, VAR_2, VAR_1);



 FUNC_1(VAR_3);

 if (VAR_2->mbuf == ((void*)0))
  VAR_2->q->start(VAR_3);
 return;
}

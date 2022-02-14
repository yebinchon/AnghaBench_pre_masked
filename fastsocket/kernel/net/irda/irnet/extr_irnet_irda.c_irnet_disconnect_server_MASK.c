
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int tsap; int rname; int daddr; int saddr; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_6(irnet_socket * VAR_3,
   struct sk_buff *VAR_4)
{
  FUNC_0(VAR_0, "(self=0x%p)\n", VAR_3);


  FUNC_5(VAR_4);
  FUNC_2(((void*)0), VAR_1,
     VAR_3->saddr, VAR_3->daddr, VAR_3->rname, 0);


  FUNC_4(VAR_3->tsap);

  FUNC_1(VAR_0, "\n");
  return;
}

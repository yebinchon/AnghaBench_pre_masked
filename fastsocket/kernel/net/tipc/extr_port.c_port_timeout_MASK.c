
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ref; int connected; } ;
struct port {scalar_t__ probing_state; int probing_interval; int timer; TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 struct sk_buff* FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (struct port*,int ) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 (struct port*) ;
 int FUNC_5 (struct port*) ;
 int FUNC_6 (struct port*) ;
 int FUNC_7 (struct sk_buff*) ;
 int VAR_5 ;
 struct port* FUNC_8 (unsigned long) ;
 int FUNC_9 (struct port*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_6)
{
 struct port *VAR_7 = FUNC_8(VAR_6);
 struct sk_buff *VAR_8 = ((void*)0);

 if (!VAR_7)
  return;

 if (!VAR_7->publ.connected) {
  FUNC_9(VAR_7);
  return;
 }


 if (VAR_7->probing_state == VAR_2) {
  VAR_8 = FUNC_2(VAR_7, VAR_3);
 } else {
  VAR_8 = FUNC_1(FUNC_6(VAR_7),
        FUNC_5(VAR_7),
        VAR_7->publ.ref,
        VAR_5,
        VAR_0,
        VAR_1,
        VAR_4,
        FUNC_4(VAR_7),
        0);
  FUNC_3(VAR_7);
  VAR_7->probing_state = VAR_2;
  FUNC_0(&VAR_7->timer, VAR_7->probing_interval);
 }
 FUNC_9(VAR_7);
 FUNC_7(VAR_8);
}

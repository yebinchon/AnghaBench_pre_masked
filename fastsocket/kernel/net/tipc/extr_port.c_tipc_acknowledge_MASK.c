
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int conn_unacked; scalar_t__ connected; } ;
struct port {TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_3 ;
 struct port* FUNC_5 (int ) ;
 int FUNC_6 (struct port*) ;

void FUNC_7(u32 VAR_4, u32 VAR_5)
{
 struct port *VAR_6;
 struct sk_buff *VAR_7 = ((void*)0);

 VAR_6 = FUNC_5(VAR_4);
 if (!VAR_6)
  return;
 if (VAR_6->publ.connected) {
  VAR_6->publ.conn_unacked -= VAR_5;
  VAR_7 = FUNC_0(FUNC_3(VAR_6),
        FUNC_2(VAR_6),
        VAR_4,
        VAR_3,
        VAR_1,
        VAR_0,
        VAR_2,
        FUNC_1(VAR_6),
        VAR_5);
 }
 FUNC_6(VAR_6);
 FUNC_4(VAR_7);
}

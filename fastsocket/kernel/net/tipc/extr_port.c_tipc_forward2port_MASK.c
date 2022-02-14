
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_portid {int node; int ref; } ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {struct tipc_msg phdr; scalar_t__ connected; } ;
struct port {int sent; TYPE_1__ publ; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iovec const*,unsigned int) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,unsigned int) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_9 (struct port*) ;
 int FUNC_10 (struct port*,struct iovec const*,unsigned int,int ) ;
 int VAR_5 ;
 struct port* FUNC_11 (int ) ;
 int FUNC_12 (struct port*,unsigned int,struct iovec const*) ;

int FUNC_13(u32 VAR_6,
        struct tipc_portid const *VAR_7,
        unsigned int VAR_8,
        struct iovec const *VAR_9,
        struct tipc_portid const *VAR_10,
        unsigned int VAR_11)
{
 struct port *VAR_12;
 struct tipc_msg *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_11(VAR_6);
 if (!VAR_12 || VAR_12->publ.connected)
  return -VAR_1;

 VAR_13 = &VAR_12->publ.phdr;
 FUNC_8(VAR_13, VAR_4);
 FUNC_6(VAR_13, VAR_10->node);
 FUNC_7(VAR_13, VAR_10->ref);
 FUNC_2(VAR_13, VAR_7->node);
 FUNC_3(VAR_13, VAR_7->ref);
 FUNC_4(VAR_13, VAR_0);
 if (VAR_11 <= VAR_3)
  FUNC_5(VAR_13, VAR_11);
 VAR_12->sent++;
 if (VAR_7->node == VAR_5)
  return FUNC_12(VAR_12, VAR_8, VAR_9);
 VAR_14 = FUNC_10(VAR_12, VAR_9, VAR_8, VAR_7->node);
 if (FUNC_0(VAR_14 != -VAR_2))
  return VAR_14;
 if (FUNC_9(VAR_12)) {

  return FUNC_1(VAR_9, VAR_8);
 }
 return -VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_portid {int ref; int node; } ;
struct tipc_name {int instance; int type; } ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {struct tipc_msg phdr; scalar_t__ connected; } ;
struct port {int sent; TYPE_1__ publ; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iovec const*,scalar_t__) ;
 int FUNC_3 (struct tipc_msg*,scalar_t__) ;
 int FUNC_4 (struct tipc_msg*,scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,unsigned int) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 int FUNC_10 (struct tipc_msg*,int ) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 int FUNC_12 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_13 (struct port*) ;
 int FUNC_14 (struct port*,struct iovec const*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_6 ;
 struct port* FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct port*,scalar_t__,struct iovec const*) ;
 int FUNC_18 (struct port*,struct tipc_msg*,struct iovec const*,scalar_t__,int ) ;

int FUNC_19(u32 VAR_7,
        struct tipc_name const *VAR_8,
        u32 VAR_9,
        u32 VAR_10,
        struct iovec const *VAR_11,
        struct tipc_portid const *VAR_12,
        unsigned int VAR_13)
{
 struct port *VAR_14;
 struct tipc_msg *VAR_15;
 u32 VAR_16 = VAR_9;
 u32 VAR_17 = 0;
 int VAR_18;

 VAR_14 = FUNC_16(VAR_7);
 if (!VAR_14 || VAR_14->publ.connected)
  return -VAR_0;

 VAR_15 = &VAR_14->publ.phdr;
 FUNC_12(VAR_15, VAR_5);
 FUNC_10(VAR_15, VAR_12->node);
 FUNC_11(VAR_15, VAR_12->ref);
 FUNC_5(VAR_15, VAR_2);
 FUNC_9(VAR_15, VAR_8->type);
 FUNC_8(VAR_15, VAR_8->instance);
 FUNC_7(VAR_15, FUNC_0(VAR_9));
 if (VAR_13 <= VAR_3)
  FUNC_6(VAR_15,VAR_13);
 VAR_17 = FUNC_15(VAR_8->type, VAR_8->instance, &VAR_16);
 FUNC_3(VAR_15, VAR_16);
 FUNC_4(VAR_15, VAR_17);

 if (FUNC_1(VAR_17 || VAR_16)) {
  VAR_14->sent++;
  if (FUNC_1(VAR_16 == VAR_6))
   return FUNC_17(VAR_14, VAR_10, VAR_11);
  VAR_18 = FUNC_14(VAR_14, VAR_11, VAR_10,
         VAR_16);
  if (FUNC_1(VAR_18 != -VAR_1))
   return VAR_18;
  if (FUNC_13(VAR_14)) {

   return FUNC_2(VAR_11, VAR_10);
  }
  return -VAR_1;
 }
 return FUNC_18(VAR_14, VAR_15, VAR_11, VAR_10,
      VAR_4);
}

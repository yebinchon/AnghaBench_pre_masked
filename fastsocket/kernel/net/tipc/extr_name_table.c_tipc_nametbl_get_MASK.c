
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void const tlv_desc ;
struct tipc_name_table_query {int upbound; int lowbound; int type; int depth; } ;
struct sk_buff {scalar_t__ data; } ;
struct print_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void const*,int,int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void const*,int ,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct print_buf*,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (int ) ;
 struct sk_buff* FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (struct print_buf*,scalar_t__,int) ;
 int FUNC_12 (struct print_buf*) ;

struct sk_buff *FUNC_13(const void *VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;
 struct tipc_name_table_query *VAR_8;
 struct tlv_desc *VAR_9;
 struct print_buf VAR_10;
 int VAR_11;

 if (!FUNC_0(VAR_5, VAR_6, VAR_2))
  return FUNC_10(VAR_1);

 VAR_7 = FUNC_9(FUNC_3(VAR_0));
 if (!VAR_7)
  return ((void*)0);

 VAR_9 = (struct tlv_desc *)VAR_7->data;
 FUNC_11(&VAR_10, FUNC_1(VAR_9), VAR_0);
 VAR_8 = (struct tipc_name_table_query *)FUNC_1(VAR_5);
 FUNC_6(&VAR_4);
 FUNC_4(&VAR_10, FUNC_5(VAR_8->depth), FUNC_5(VAR_8->type),
       FUNC_5(VAR_8->lowbound), FUNC_5(VAR_8->upbound));
 FUNC_7(&VAR_4);
 VAR_11 = FUNC_12(&VAR_10);

 FUNC_8(VAR_7, FUNC_3(VAR_11));
 FUNC_2(VAR_9, VAR_3, ((void*)0), VAR_11);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct tipc_node {TYPE_1__* b_ptr; struct tipc_node** active_links; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {TYPE_1__* b_ptr; struct sk_buff** active_links; } ;
struct TYPE_4__ {scalar_t__ max_pkt; int ref; struct tipc_msg phdr; } ;
struct port {TYPE_2__ publ; int user_port; } ;
struct link {TYPE_1__* b_ptr; struct link** active_links; } ;
struct iovec {int dummy; } ;
struct TYPE_3__ {int cong_links; } ;


 int VAR_0 ;
 int FUNC_0 (struct tipc_node*) ;
 scalar_t__ FUNC_1 (struct tipc_node*) ;
 scalar_t__ FUNC_2 (struct tipc_node*) ;
 scalar_t__ FUNC_3 (struct tipc_node*) ;
 int FUNC_4 (struct tipc_node*,int ,int) ;
 int FUNC_5 (struct tipc_node*,struct tipc_node*,scalar_t__*) ;
 int FUNC_6 (struct port*,struct iovec const*,size_t const,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tipc_msg*,struct iovec const*,size_t const,scalar_t__,int,struct tipc_node**) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;
 int FUNC_13 (struct tipc_node*) ;
 struct tipc_node* FUNC_14 (size_t,size_t) ;
 int FUNC_15 (struct tipc_node*) ;
 int FUNC_16 (struct port*,struct tipc_msg*,struct iovec const*,size_t const,int ) ;
 int FUNC_17 (struct tipc_node*,int ) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct port *VAR_2,
     struct iovec const *VAR_3,
     const u32 VAR_4,
     u32 VAR_5)
{
 struct tipc_msg *VAR_6 = &VAR_2->publ.phdr;
 struct link *VAR_7;
 struct sk_buff *VAR_8;
 struct tipc_node *VAR_9;
 int VAR_10;
 u32 VAR_11 = FUNC_10(VAR_6) & 1;

again:





 VAR_10 = FUNC_8(VAR_6, VAR_3, VAR_4, VAR_2->publ.max_pkt,
   !VAR_2->user_port, &VAR_8);

 FUNC_11(&VAR_1);
 VAR_9 = FUNC_14(VAR_5, VAR_11);
 if (FUNC_1(VAR_9)) {
  FUNC_13(VAR_9);
  VAR_7 = VAR_9->active_links[VAR_11];
  if (FUNC_1(VAR_7)) {
   if (FUNC_1(VAR_8)) {
    VAR_10 = FUNC_5(VAR_7, VAR_8,
        &VAR_2->publ.max_pkt);
    if (FUNC_18(VAR_10 < 0))
     FUNC_0(VAR_8);
exit:
    FUNC_15(VAR_9);
    FUNC_12(&VAR_1);
    return VAR_10;
   }



   if (FUNC_18(VAR_10 < 0))
    goto exit;



   if (FUNC_2(VAR_7) ||
       !FUNC_7(&VAR_7->b_ptr->cong_links)) {
    VAR_10 = FUNC_4(VAR_7,
        VAR_2->publ.ref, VAR_10);
    goto exit;
   }






   VAR_2->publ.max_pkt = FUNC_3(VAR_7);
   FUNC_15(VAR_9);
   FUNC_12(&VAR_1);


   if ((FUNC_9(VAR_6) + VAR_10) <= VAR_2->publ.max_pkt)
    goto again;

   return FUNC_6(VAR_2, VAR_3,
             VAR_4, VAR_5);
  }
  FUNC_15(VAR_9);
 }
 FUNC_12(&VAR_1);



 if (VAR_8)
  return FUNC_17(VAR_8, VAR_0);
 if (VAR_10 >= 0)
  return FUNC_16(VAR_2, VAR_6, VAR_3, VAR_4,
       VAR_0);
 return VAR_10;
}

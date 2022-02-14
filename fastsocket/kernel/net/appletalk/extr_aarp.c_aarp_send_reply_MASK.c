
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; void* protocol; } ;
struct net_device {int hard_header_len; unsigned char* dev_addr; } ;
struct elapaarp {int pa_dst_node; int pa_dst_net; scalar_t__ pa_dst_zero; int hw_dst; int pa_src_node; int pa_src_net; scalar_t__ pa_src_zero; int hw_src; void* function; int pa_len; int hw_len; void* pa_type; void* hw_type; } ;
struct atalk_addr {int s_node; int s_net; } ;
struct TYPE_3__ {int header_length; int (* request ) (TYPE_1__*,struct sk_buff*,unsigned char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct elapaarp* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 int FUNC_4 (int ,char,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (TYPE_1__*,struct sk_buff*,unsigned char*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_7, struct atalk_addr *VAR_8,
       struct atalk_addr *VAR_9, unsigned char *VAR_10)
{
 struct elapaarp *VAR_11;
 int VAR_12 = VAR_7->hard_header_len + sizeof(*VAR_11) + VAR_6->header_length;
 struct sk_buff *VAR_13 = FUNC_1(VAR_12, VAR_5);

 if (!VAR_13)
  return;


 FUNC_6(VAR_13, VAR_7->hard_header_len + VAR_6->header_length);
 FUNC_7(VAR_13);
 FUNC_8(VAR_13);
 FUNC_5(VAR_13, sizeof(*VAR_11));
 VAR_13->protocol = FUNC_2(VAR_4);
 VAR_13->dev = VAR_7;
 VAR_11 = FUNC_0(VAR_13);


 VAR_11->hw_type = FUNC_2(VAR_0);
 VAR_11->pa_type = FUNC_2(VAR_4);
 VAR_11->hw_len = VAR_3;
 VAR_11->pa_len = VAR_1;
 VAR_11->function = FUNC_2(VAR_2);

 FUNC_3(VAR_11->hw_src, VAR_7->dev_addr, VAR_3);

 VAR_11->pa_src_zero = 0;
 VAR_11->pa_src_net = VAR_8->s_net;
 VAR_11->pa_src_node = VAR_8->s_node;

 if (!VAR_10)
  FUNC_4(VAR_11->hw_dst, '\0', VAR_3);
 else
  FUNC_3(VAR_11->hw_dst, VAR_10, VAR_3);

 VAR_11->pa_dst_zero = 0;
 VAR_11->pa_dst_net = VAR_9->s_net;
 VAR_11->pa_dst_node = VAR_9->s_node;


 VAR_6->request(VAR_6, VAR_13, VAR_10);
}

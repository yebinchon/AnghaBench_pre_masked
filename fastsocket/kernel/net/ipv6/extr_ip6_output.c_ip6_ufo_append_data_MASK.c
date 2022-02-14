
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct sk_buff {int ip_summed; scalar_t__ csum; scalar_t__ network_header; scalar_t__ transport_header; } ;
struct TYPE_3__ {int addr; } ;
struct rt6_info {TYPE_1__ rt6i_dst; } ;
struct frag_hdr {int identification; } ;
struct TYPE_4__ {int gso_size; int ip6_frag_id; int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct frag_hdr*,int *) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sock*,int,unsigned int,int*) ;

__attribute__((used)) static inline int FUNC_10(struct sock *VAR_4,
   int VAR_5(void *VAR_6, char *VAR_7, int VAR_8, int VAR_9,
   int VAR_10, struct sk_buff *VAR_11),
   void *VAR_12, int VAR_13, int VAR_14, int VAR_15,
   int VAR_16, int VAR_17,unsigned int VAR_18,
   struct rt6_info *VAR_19)

{
 struct sk_buff *VAR_20;
 struct frag_hdr VAR_21;
 int VAR_22;





 if ((VAR_20 = FUNC_4(&VAR_4->sk_write_queue)) == ((void*)0)) {
  VAR_20 = FUNC_9(VAR_4,
   VAR_14 + VAR_15 + VAR_16 + 20,
   (VAR_18 & VAR_2), &VAR_22);
  if (VAR_20 == ((void*)0))
   return -VAR_1;


  FUNC_6(VAR_20, VAR_14);


  FUNC_5(VAR_20,VAR_15 + VAR_16);


  FUNC_7(VAR_20);


  VAR_20->transport_header = VAR_20->network_header + VAR_15;

  VAR_20->csum = 0;

  FUNC_0(&VAR_4->sk_write_queue, VAR_20);
 } else if (FUNC_3(VAR_20)) {
  goto append;
 }

 VAR_20->ip_summed = VAR_0;




 FUNC_8(VAR_20)->gso_size = (VAR_17 - VAR_15 -
         sizeof(struct frag_hdr)) & ~7;
 FUNC_8(VAR_20)->gso_type = VAR_3;
 FUNC_1(&VAR_21, &VAR_19->rt6i_dst.addr);
 FUNC_8(VAR_20)->ip6_frag_id = VAR_21.identification;

append:
 return FUNC_2(VAR_4, VAR_20, VAR_5, VAR_12,
           (VAR_13 - VAR_16));
}

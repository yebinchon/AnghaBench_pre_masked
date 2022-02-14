
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int ip_summed; scalar_t__ csum; scalar_t__ network_header; scalar_t__ transport_header; } ;
struct TYPE_2__ {int gso_size; int gso_type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sock*,int,unsigned int,int*) ;

__attribute__((used)) static inline int FUNC_9(struct sock *VAR_3,
   struct sk_buff_head *VAR_4,
   int VAR_5(void *VAR_6, char *VAR_7, int VAR_8, int VAR_9,
          int VAR_10, struct sk_buff *VAR_11),
   void *VAR_12, int VAR_13, int VAR_14, int VAR_15,
   int VAR_16, int VAR_17, unsigned int VAR_18)
{
 struct sk_buff *VAR_19;
 int VAR_20;





 if ((VAR_19 = FUNC_3(VAR_4)) == ((void*)0)) {
  VAR_19 = FUNC_8(VAR_3,
   VAR_14 + VAR_15 + VAR_16 + 20,
   (VAR_18 & VAR_1), &VAR_20);

  if (VAR_19 == ((void*)0))
   return VAR_20;


  FUNC_5(VAR_19, VAR_14);


  FUNC_4(VAR_19, VAR_15 + VAR_16);


  FUNC_6(VAR_19);


  VAR_19->transport_header = VAR_19->network_header + VAR_15;

  VAR_19->csum = 0;


  FUNC_0(VAR_4, VAR_19);
 } else if (FUNC_2(VAR_19)) {
  goto append;
 }

 VAR_19->ip_summed = VAR_0;

 FUNC_7(VAR_19)->gso_size = VAR_17 - VAR_15;
 FUNC_7(VAR_19)->gso_type = VAR_2;

append:
 return FUNC_1(VAR_3, VAR_19, VAR_5, VAR_12,
           (VAR_13 - VAR_16));
}

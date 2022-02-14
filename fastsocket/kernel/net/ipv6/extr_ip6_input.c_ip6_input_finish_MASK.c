
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct inet6_protocol {int flags; int (* handler ) (struct sk_buff*) ;} ;
struct inet6_dev {int dummy; } ;
struct TYPE_5__ {unsigned int nhoff; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,unsigned int,int ) ;
 int * VAR_9 ;
 struct inet6_dev* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;
 struct ipv6hdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct inet6_protocol* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_1__* FUNC_16 (struct sk_buff*) ;
 int* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int*,int ) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (int *,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_23(struct sk_buff *VAR_10)
{
 const struct inet6_protocol *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;
 u8 VAR_15;
 struct inet6_dev *VAR_16;
 struct net *VAR_17 = FUNC_2(FUNC_16(VAR_10)->dev);





 FUNC_14();
resubmit:
 VAR_16 = FUNC_4(FUNC_16(VAR_10));
 if (!FUNC_11(VAR_10, FUNC_20(VAR_10)))
  goto discard;
 VAR_12 = FUNC_0(VAR_10)->nhoff;
 VAR_13 = FUNC_17(VAR_10)[VAR_12];

 VAR_14 = FUNC_12(VAR_10, VAR_13);

 VAR_15 = VAR_13 & (VAR_7 - 1);
 if ((VAR_11 = FUNC_13(VAR_9[VAR_15])) != ((void*)0)) {
  int VAR_18;

  if (VAR_11->flags & VAR_2) {
   struct ipv6hdr *VAR_19;




   FUNC_10(VAR_10);

   FUNC_19(VAR_10, FUNC_17(VAR_10),
        FUNC_18(VAR_10));
   VAR_19 = FUNC_7(VAR_10);
   if (FUNC_5(&VAR_19->daddr) &&
       !FUNC_6(VAR_10->dev, &VAR_19->daddr,
       &VAR_19->saddr) &&
       !FUNC_8(VAR_10, VAR_13))
    goto discard;
  }
  if (!(VAR_11->flags & VAR_3) &&
      !FUNC_22(((void*)0), VAR_8, VAR_10))
   goto discard;

  VAR_18 = VAR_11->handler(VAR_10);
  if (VAR_18 > 0)
   goto resubmit;
  else if (VAR_18 == 0)
   FUNC_1(VAR_17, VAR_16, VAR_4);
 } else {
  if (!VAR_14) {
   if (FUNC_22(((void*)0), VAR_8, VAR_10)) {
    FUNC_1(VAR_17, VAR_16,
       VAR_6);
    FUNC_3(VAR_10, VAR_0,
         VAR_1, VAR_12,
         VAR_10->dev);
   }
  } else
   FUNC_1(VAR_17, VAR_16, VAR_4);
  FUNC_9(VAR_10);
 }
 FUNC_15();
 return 0;

discard:
 FUNC_1(VAR_17, VAR_16, VAR_5);
 FUNC_15();
 FUNC_9(VAR_10);
 return 0;
}

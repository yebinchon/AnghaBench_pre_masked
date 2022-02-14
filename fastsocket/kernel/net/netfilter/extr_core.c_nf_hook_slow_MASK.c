
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct sk_buff*) ;
 struct list_head** VAR_10 ;
 unsigned int FUNC_2 (struct list_head*,struct sk_buff*,unsigned int,struct net_device*,struct net_device*,struct list_head**,int (*) (struct sk_buff*),int) ;
 int FUNC_3 (struct sk_buff*,struct list_head*,size_t,unsigned int,struct net_device*,struct net_device*,int (*) (struct sk_buff*),unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(u_int8_t VAR_11, unsigned int VAR_12, struct sk_buff *VAR_13,
   struct net_device *VAR_14,
   struct net_device *VAR_15,
   int (*VAR_16)(struct sk_buff *),
   int VAR_17)
{
 struct list_head *VAR_18;
 unsigned int VAR_19;
 int VAR_20 = 0;


 FUNC_4();

 VAR_18 = &VAR_10[VAR_11][VAR_12];
next_hook:
 VAR_19 = FUNC_2(&VAR_10[VAR_11][VAR_12], VAR_13, VAR_12, VAR_14,
        VAR_15, &VAR_18, VAR_16, VAR_17);
 if (VAR_19 == VAR_3 || VAR_19 == VAR_6) {
  VAR_20 = 1;
 } else if ((VAR_19 & VAR_8) == VAR_4) {
  FUNC_1(VAR_13);
  VAR_20 = FUNC_0(VAR_19);
  if (VAR_20 == 0)
   VAR_20 = -VAR_1;
 } else if ((VAR_19 & VAR_8) == VAR_5) {
  VAR_20 = FUNC_3(VAR_13, VAR_18, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16,
          VAR_19 >> VAR_9);
  if (VAR_20 < 0) {
   if (VAR_20 == -VAR_0)
    goto next_hook;
   if (VAR_20 == -VAR_2 &&
      (VAR_19 & VAR_7))
    goto next_hook;
   FUNC_1(VAR_13);
  }
  VAR_20 = 0;
 }
 FUNC_5();
 return VAR_20;
}

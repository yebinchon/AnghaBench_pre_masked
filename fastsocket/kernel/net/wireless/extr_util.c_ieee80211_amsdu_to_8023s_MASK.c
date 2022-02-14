
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {unsigned int* data; int len; int priority; int dev; } ;
struct ethhdr {unsigned int h_proto; unsigned int* h_dest; unsigned int* h_source; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef unsigned int __be16 ;


 unsigned int FUNC_0 (unsigned int const,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int VAR_3 ;
 struct sk_buff* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (unsigned int*,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned int const*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (unsigned int*,unsigned int*,int) ;
 unsigned int FUNC_9 (unsigned int) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 unsigned int* FUNC_11 (struct sk_buff*,int) ;
 unsigned int* FUNC_12 (struct sk_buff*,unsigned int) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 int FUNC_14 (struct sk_buff*) ;

void FUNC_15(struct sk_buff *VAR_5, struct sk_buff_head *VAR_6,
         const u8 *VAR_7, enum nl80211_iftype VAR_8,
         const unsigned int VAR_9,
         bool VAR_10)
{
 struct sk_buff *VAR_11 = ((void*)0);
 u16 VAR_12;
 u8 *VAR_13;
 const struct ethhdr *VAR_14;
 int VAR_15, VAR_16;
 u8 VAR_17[VAR_0], VAR_18[VAR_0];

 if (VAR_10) {
  VAR_16 = FUNC_6(VAR_5, VAR_7, VAR_8);
  if (VAR_16)
   goto out;


  VAR_14 = (struct ethhdr *) FUNC_10(VAR_5, sizeof(struct ethhdr));
  if (!VAR_14)
   goto out;
 } else {
  VAR_14 = (struct ethhdr *) VAR_5->data;
 }

 while (VAR_5 != VAR_11) {
  u8 VAR_19;
  __be16 VAR_20 = VAR_14->h_proto;
  unsigned int VAR_21 = sizeof(struct ethhdr) + FUNC_9(VAR_20);

  VAR_15 = VAR_5->len;
  FUNC_8(VAR_17, VAR_14->h_dest, VAR_0);
  FUNC_8(VAR_18, VAR_14->h_source, VAR_0);

  VAR_19 = (4 - VAR_21) & 0x3;

  if (VAR_21 > VAR_15)
   goto purge;

  FUNC_10(VAR_5, sizeof(struct ethhdr));

  if (VAR_15 <= VAR_21 + VAR_19)
   VAR_11 = VAR_5;
  else {
   unsigned int VAR_22 = FUNC_0(VAR_9, 4);




   VAR_11 = FUNC_3(VAR_22 + VAR_21 + 2);
   if (!VAR_11)
    goto purge;

   FUNC_13(VAR_11, VAR_22 + sizeof(struct ethhdr) + 2);
   FUNC_8(FUNC_12(VAR_11, FUNC_9(VAR_20)), VAR_5->data,
    FUNC_9(VAR_20));

   VAR_14 = (struct ethhdr *)FUNC_10(VAR_5, FUNC_9(VAR_20) +
       VAR_19);
   if (!VAR_14) {
    FUNC_4(VAR_11);
    goto purge;
   }
  }

  FUNC_14(VAR_11);
  VAR_11->dev = VAR_5->dev;
  VAR_11->priority = VAR_5->priority;

  VAR_13 = VAR_11->data;
  VAR_12 = (VAR_13[6] << 8) | VAR_13[7];

  if (FUNC_7((FUNC_5(VAR_13, VAR_4) &&
       VAR_12 != VAR_1 && VAR_12 != VAR_2) ||
      FUNC_5(VAR_13, VAR_3))) {


   FUNC_10(VAR_11, 6);
   FUNC_8(FUNC_11(VAR_11, VAR_0), VAR_18, VAR_0);
   FUNC_8(FUNC_11(VAR_11, VAR_0), VAR_17, VAR_0);
  } else {
   FUNC_8(FUNC_11(VAR_11, sizeof(__be16)), &VAR_20,
    sizeof(__be16));
   FUNC_8(FUNC_11(VAR_11, VAR_0), VAR_18, VAR_0);
   FUNC_8(FUNC_11(VAR_11, VAR_0), VAR_17, VAR_0);
  }
  FUNC_2(VAR_6, VAR_11);
 }

 return;

 purge:
 FUNC_1(VAR_6);
 out:
 FUNC_4(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef unsigned long u16 ;
struct sk_buff {int dummy; } ;
struct rate_info {int flags; int nss; int mcs; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_0 (struct rate_info*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,unsigned long) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,unsigned long) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct sk_buff *VAR_17, struct rate_info *VAR_18,
     int VAR_19)
{
 struct nlattr *VAR_20;
 u32 VAR_21;
 u16 VAR_22;

 VAR_20 = FUNC_2(VAR_17, VAR_19);
 if (!VAR_20)
  return 0;


 VAR_21 = FUNC_0(VAR_18);

 VAR_22 = VAR_21 < (1UL << 16) ? VAR_21 : 0;
 if (VAR_21 > 0 &&
     FUNC_5(VAR_17, VAR_5, VAR_21))
  return 0;
 if (VAR_22 > 0 &&
     FUNC_4(VAR_17, VAR_4, VAR_22))
  return 0;

 if (VAR_18->flags & VAR_14) {
  if (FUNC_6(VAR_17, VAR_6, VAR_18->mcs))
   return 0;
  if (VAR_18->flags & VAR_11 &&
      FUNC_3(VAR_17, VAR_1))
   return 0;
  if (VAR_18->flags & VAR_15 &&
      FUNC_3(VAR_17, VAR_7))
   return 0;
 } else if (VAR_18->flags & VAR_16) {
  if (FUNC_6(VAR_17, VAR_8, VAR_18->mcs))
   return 0;
  if (FUNC_6(VAR_17, VAR_9, VAR_18->nss))
   return 0;
  if (VAR_18->flags & VAR_11 &&
      FUNC_3(VAR_17, VAR_1))
   return 0;
  if (VAR_18->flags & VAR_13 &&
      FUNC_3(VAR_17, VAR_3))
   return 0;
  if (VAR_18->flags & VAR_12 &&
      FUNC_3(VAR_17, VAR_2))
   return 0;
  if (VAR_18->flags & VAR_10 &&
      FUNC_3(VAR_17, VAR_0))
   return 0;
  if (VAR_18->flags & VAR_15 &&
      FUNC_3(VAR_17, VAR_7))
   return 0;
 }

 FUNC_1(VAR_17, VAR_20);
 return 1;
}

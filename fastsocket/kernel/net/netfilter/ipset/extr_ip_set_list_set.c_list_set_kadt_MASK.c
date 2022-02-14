
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct set_elem {scalar_t__ id; } ;
struct list_set {scalar_t__ size; int timeout; } ;
struct ip_set {struct list_set* data; } ;
typedef enum ipset_adt { ____Placeholder_ipset_adt } ipset_adt ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;

 int FUNC_0 (scalar_t__,struct sk_buff const*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,struct sk_buff const*,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,struct sk_buff const*,int ,int ,int ) ;
 struct set_elem* FUNC_3 (struct list_set*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct list_set*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ip_set *VAR_2, const struct sk_buff *VAR_3,
       enum ipset_adt VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct list_set *VAR_8 = VAR_2->data;
 struct set_elem *VAR_9;
 u32 VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_8->size; VAR_10++) {
  VAR_9 = FUNC_3(VAR_8, VAR_10);
  if (VAR_9->id == VAR_1)
   return 0;
  if (FUNC_5(VAR_8->timeout) && FUNC_4(VAR_8, VAR_10))
   continue;
  switch (VAR_4) {
  case 128:
   VAR_11 = FUNC_2(VAR_9->id, VAR_3, VAR_5, VAR_6, VAR_7);
   if (VAR_11 > 0)
    return VAR_11;
   break;
  case 130:
   VAR_11 = FUNC_0(VAR_9->id, VAR_3, VAR_5, VAR_6, VAR_7);
   if (VAR_11 == 0)
    return VAR_11;
   break;
  case 129:
   VAR_11 = FUNC_1(VAR_9->id, VAR_3, VAR_5, VAR_6, VAR_7);
   if (VAR_11 == 0)
    return VAR_11;
   break;
  default:
   break;
  }
 }
 return -VAR_0;
}

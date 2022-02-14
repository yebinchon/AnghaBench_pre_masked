
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct iovec const*,int) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (struct sk_buff*,struct tipc_msg*,int) ;
 int FUNC_8 (struct sk_buff*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline int FUNC_10(struct tipc_msg *VAR_4,
       struct iovec const *VAR_5, u32 VAR_6,
       int VAR_7, int VAR_8, struct sk_buff** VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10 = FUNC_4(VAR_5, VAR_6);
 if (FUNC_9(VAR_10 > VAR_3)) {
  *VAR_9 = ((void*)0);
  return -VAR_1;
 }

 VAR_13 = VAR_12 = FUNC_5(VAR_4);
 VAR_11 = VAR_12 + VAR_10;
 FUNC_6(VAR_4, VAR_11);
 if (FUNC_9(VAR_11 > VAR_7)) {
  *VAR_9 = ((void*)0);
  return VAR_10;
 }

 *VAR_9 = FUNC_0(VAR_11);
 if (!(*VAR_9))
  return -VAR_2;
 FUNC_7(*VAR_9, VAR_4, VAR_12);
 for (VAR_14 = 1, VAR_15 = 0; VAR_14 && (VAR_15 < VAR_6); VAR_15++) {
  if (FUNC_3(VAR_8))
   VAR_14 = !FUNC_2((*VAR_9)->data + VAR_13,
           VAR_5[VAR_15].iov_base,
           VAR_5[VAR_15].iov_len);
  else
   FUNC_8(*VAR_9, VAR_13,
             VAR_5[VAR_15].iov_base,
             VAR_5[VAR_15].iov_len);
  VAR_13 += VAR_5[VAR_15].iov_len;
 }
 if (FUNC_3(VAR_14))
  return VAR_10;

 FUNC_1(*VAR_9);
 *VAR_9 = ((void*)0);
 return -VAR_0;
}

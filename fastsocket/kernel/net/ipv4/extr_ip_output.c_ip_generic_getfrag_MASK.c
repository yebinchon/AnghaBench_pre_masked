
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum; } ;
struct iovec {int dummy; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (char*,struct iovec*,int,int,int *) ;
 scalar_t__ FUNC_2 (char*,struct iovec*,int,int) ;

int
FUNC_3(void *VAR_2, char *VAR_3, int VAR_4, int VAR_5, int VAR_6, struct sk_buff *VAR_7)
{
 struct iovec *VAR_8 = VAR_2;

 if (VAR_7->ip_summed == VAR_0) {
  if (FUNC_2(VAR_3, VAR_8, VAR_4, VAR_5) < 0)
   return -VAR_1;
 } else {
  __wsum VAR_9 = 0;
  if (FUNC_1(VAR_3, VAR_8, VAR_4, VAR_5, &VAR_9) < 0)
   return -VAR_1;
  VAR_7->csum = FUNC_0(VAR_7->csum, VAR_9, VAR_6);
 }
 return 0;
}

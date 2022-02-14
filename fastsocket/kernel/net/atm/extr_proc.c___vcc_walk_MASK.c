
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct hlist_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct sock* VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (struct hlist_head*) ;
 scalar_t__ FUNC_1 (struct sock*,int) ;
 scalar_t__ FUNC_2 (struct hlist_head*) ;
 struct sock* FUNC_3 (struct hlist_head*) ;
 struct sock* FUNC_4 (struct sock*) ;
 struct hlist_head* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct sock **VAR_3, int VAR_4, int *VAR_5, loff_t VAR_6)
{
 struct sock *VAR_7 = *VAR_3;

 if (VAR_7 == VAR_0) {
  for (*VAR_5 = 0; *VAR_5 < VAR_1; ++*VAR_5) {
   struct hlist_head *VAR_8 = &VAR_2[*VAR_5];

   VAR_7 = FUNC_2(VAR_8) ? ((void*)0) : FUNC_0(VAR_8);
   if (VAR_7)
    break;
  }
  VAR_6--;
 }
try_again:
 for (; VAR_7; VAR_7 = FUNC_4(VAR_7)) {
  VAR_6 -= FUNC_1(VAR_7, VAR_4);
  if (VAR_6 < 0)
   goto out;
 }
 if (!VAR_7 && ++*VAR_5 < VAR_1) {
  VAR_7 = FUNC_3(&VAR_2[*VAR_5]);
  goto try_again;
 }
 VAR_7 = VAR_0;
out:
 *VAR_3 = VAR_7;
 return (VAR_6 < 0);
}

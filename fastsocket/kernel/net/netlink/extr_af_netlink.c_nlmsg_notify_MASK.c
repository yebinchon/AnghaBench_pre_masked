
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int users; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int,unsigned int,int ) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int) ;

int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2, u32 VAR_3,
   unsigned int VAR_4, int VAR_5, gfp_t VAR_6)
{
 int VAR_7 = 0;

 if (VAR_4) {
  int VAR_8 = 0;

  if (VAR_5) {
   FUNC_0(&VAR_2->users);
   VAR_8 = VAR_3;
  }



  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_8, VAR_4, VAR_6);
 }

 if (VAR_5) {
  int VAR_9;

  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3);
  if (!VAR_7 || VAR_7 == -VAR_0)
   VAR_7 = VAR_9;
 }

 return VAR_7;
}

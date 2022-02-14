
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * ht; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 TYPE_1__ VAR_1 ;
 struct sock* FUNC_1 (int *) ;

int FUNC_2(struct sk_buff *VAR_2, int VAR_3)
{
 struct sock *VAR_4;

 VAR_4 = FUNC_1(&VAR_1.ht[VAR_3 & (VAR_0 - 1)]);
 if (VAR_4 && !FUNC_0(VAR_2, VAR_3))
  VAR_4 = ((void*)0);

 return VAR_4 != ((void*)0);
}

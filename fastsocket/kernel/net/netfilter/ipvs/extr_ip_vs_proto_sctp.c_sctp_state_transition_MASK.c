
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_conn {int lock; } ;


 int FUNC_0 (struct ip_vs_protocol*,struct ip_vs_conn*,int,struct sk_buff const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct ip_vs_conn *VAR_0, int VAR_1,
  const struct sk_buff *VAR_2, struct ip_vs_protocol *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_0->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);

 return VAR_4;
}

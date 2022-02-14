
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct can_filter {int can_mask; int can_id; } ;


 int FUNC_0 (struct net_device*,int ,int ,int ,struct sock*,char*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ,struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct sock *VAR_2,
         struct can_filter *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, VAR_3[VAR_6].can_id,
          VAR_3[VAR_6].can_mask,
          VAR_0, VAR_2, "raw");
  if (VAR_5) {

   while (--VAR_6 >= 0)
    FUNC_1(VAR_1, VAR_3[VAR_6].can_id,
        VAR_3[VAR_6].can_mask,
        VAR_0, VAR_2);
   break;
  }
 }

 return VAR_5;
}

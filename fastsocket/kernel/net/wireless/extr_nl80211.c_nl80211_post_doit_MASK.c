
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {struct wireless_dev* netdev; } ;
struct sk_buff {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct wireless_dev** user_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct genl_ops *VAR_2, struct sk_buff *VAR_3,
         struct genl_info *VAR_4)
{
 if (VAR_4->user_ptr[0])
  FUNC_0(VAR_4->user_ptr[0]);
 if (VAR_4->user_ptr[1]) {
  if (VAR_2->internal_flags & VAR_1) {
   struct wireless_dev *VAR_5 = VAR_4->user_ptr[1];

   if (VAR_5->netdev)
    FUNC_1(VAR_5->netdev);
  } else {
   FUNC_1(VAR_4->user_ptr[1]);
  }
 }
 if (VAR_2->internal_flags & VAR_0)
  FUNC_2();
}

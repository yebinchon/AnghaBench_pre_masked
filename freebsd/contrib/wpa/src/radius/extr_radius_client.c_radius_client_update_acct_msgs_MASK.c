
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg_list {scalar_t__ msg_type; size_t shared_secret_len; int msg; int const* shared_secret; struct radius_msg_list* next; } ;
struct radius_client_data {struct radius_msg_list* msgs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const*,size_t) ;

__attribute__((used)) static void FUNC_1(struct radius_client_data *VAR_1,
        const u8 *VAR_2,
        size_t VAR_3)
{
 struct radius_msg_list *VAR_4;

 if (!VAR_1)
  return;

 for (VAR_4 = VAR_1->msgs; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->msg_type == VAR_0) {
   VAR_4->shared_secret = VAR_2;
   VAR_4->shared_secret_len = VAR_3;
   FUNC_0(VAR_4->msg, VAR_2,
            VAR_3);
  }
 }
}

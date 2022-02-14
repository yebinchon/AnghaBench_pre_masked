
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg_list {scalar_t__ msg_type; struct radius_msg_list* next; int addr; } ;
struct radius_client_data {int num_msgs; struct radius_msg_list* msgs; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int const*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct radius_msg_list*) ;

void FUNC_3(struct radius_client_data *VAR_4,
         const u8 *VAR_5)
{
 struct radius_msg_list *VAR_6, *VAR_7, *VAR_8;

 VAR_7 = ((void*)0);
 VAR_6 = VAR_4->msgs;
 while (VAR_6) {
  if (VAR_6->msg_type == VAR_3 &&
      FUNC_1(VAR_6->addr, VAR_5, VAR_0) == 0) {
   FUNC_0(VAR_4->ctx, VAR_5,
           VAR_2,
           VAR_1,
           "Removing pending RADIUS authentication"
           " message for removed client");

   if (VAR_7)
    VAR_7->next = VAR_6->next;
   else
    VAR_4->msgs = VAR_6->next;

   VAR_8 = VAR_6;
   VAR_6 = VAR_6->next;
   FUNC_2(VAR_8);
   VAR_4->num_msgs--;
   continue;
  }

  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
 }
}

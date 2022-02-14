
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ msg_type; struct radius_msg_list* next; } ;
struct radius_client_data {struct radius_msg_list* msgs; int num_msgs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct radius_client_data*,int *) ;
 int FUNC_1 (struct radius_msg_list*) ;
 int VAR_1 ;

void FUNC_2(struct radius_client_data *VAR_2, int VAR_3)
{
 struct radius_msg_list *VAR_4, *VAR_5, *VAR_6;

 if (!VAR_2)
  return;

 VAR_5 = ((void*)0);
 VAR_4 = VAR_2->msgs;

 while (VAR_4) {
  if (!VAR_3 || VAR_4->msg_type == VAR_0) {
   if (VAR_5)
    VAR_5->next = VAR_4->next;
   else
    VAR_2->msgs = VAR_4->next;

   VAR_6 = VAR_4;
   VAR_4 = VAR_4->next;
   FUNC_1(VAR_6);
   VAR_2->num_msgs--;
  } else {
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->next;
  }
 }

 if (VAR_2->msgs == ((void*)0))
  FUNC_0(VAR_1, VAR_2, ((void*)0));
}

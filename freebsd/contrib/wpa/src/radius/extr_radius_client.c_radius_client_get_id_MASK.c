
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct radius_msg_list {struct radius_msg_list* next; int addr; int msg; } ;
struct radius_client_data {struct radius_msg_list* msgs; int ctx; int next_radius_identifier; } ;
struct TYPE_2__ {scalar_t__ identifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (struct radius_msg_list*) ;
 TYPE_1__* FUNC_2 (int ) ;

u8 FUNC_3(struct radius_client_data *VAR_2)
{
 struct radius_msg_list *VAR_3, *VAR_4, *VAR_5;
 u8 VAR_6 = VAR_2->next_radius_identifier++;



 VAR_3 = VAR_2->msgs;
 VAR_4 = ((void*)0);
 while (VAR_3) {
  if (FUNC_2(VAR_3->msg)->identifier == VAR_6) {
   FUNC_0(VAR_2->ctx, VAR_3->addr,
           VAR_1,
           VAR_0,
           "Removing pending RADIUS message, "
           "since its id (%d) is reused", VAR_6);
   if (VAR_4)
    VAR_4->next = VAR_3->next;
   else
    VAR_2->msgs = VAR_3->next;
   VAR_5 = VAR_3;
  } else {
   VAR_5 = ((void*)0);
   VAR_4 = VAR_3;
  }
  VAR_3 = VAR_3->next;

  if (VAR_5)
   FUNC_1(VAR_5);
 }

 return VAR_6;
}

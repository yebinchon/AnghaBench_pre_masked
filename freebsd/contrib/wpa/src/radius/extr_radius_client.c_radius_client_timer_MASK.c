
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ next_try; scalar_t__ msg_type; scalar_t__ attempts; struct radius_msg_list* next; } ;
struct radius_client_data {int auth_sock; int acct_sock; size_t num_msgs; int ctx; struct radius_msg_list* msgs; } ;
struct os_reltime {scalar_t__ sec; } ;
typedef scalar_t__ os_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (void (*) (void*,void*),struct radius_client_data*,int *) ;
 int FUNC_1 (scalar_t__,int ,void (*) (void*,void*),struct radius_client_data*,int *) ;
 int FUNC_2 (int ,int *,int ,int ,char*,long) ;
 int FUNC_3 (struct os_reltime*) ;
 int FUNC_4 (struct radius_client_data*) ;
 int FUNC_5 (struct radius_client_data*) ;
 int FUNC_6 (struct radius_msg_list*) ;
 scalar_t__ FUNC_7 (struct radius_client_data*,struct radius_msg_list*,scalar_t__) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(void *VAR_7, void *VAR_8)
{
 struct radius_client_data *VAR_9 = VAR_7;
 struct os_reltime VAR_10;
 os_time_t VAR_11;
 struct radius_msg_list *VAR_12, *VAR_13, *VAR_14;
 int VAR_15 = 0, VAR_16 = 0;
 size_t VAR_17;
 int VAR_18;

 VAR_12 = VAR_9->msgs;
 if (!VAR_12)
  return;

 FUNC_3(&VAR_10);

 while (VAR_12) {
  if (VAR_10.sec >= VAR_12->next_try) {
   VAR_18 = VAR_12->msg_type == VAR_5 ? VAR_9->auth_sock :
    VAR_9->acct_sock;
   if (VAR_12->attempts > VAR_6 ||
       (VAR_18 < 0 && VAR_12->attempts > 0)) {
    if (VAR_12->msg_type == VAR_3 ||
        VAR_12->msg_type == VAR_4)
     VAR_16++;
    else
     VAR_15++;
   }
  }
  VAR_12 = VAR_12->next;
 }

 if (VAR_15)
  FUNC_5(VAR_9);

 if (VAR_16)
  FUNC_4(VAR_9);

 VAR_12 = VAR_9->msgs;
 VAR_11 = 0;

 VAR_13 = ((void*)0);
 while (VAR_12) {
  VAR_17 = VAR_9->num_msgs;
  if (VAR_10.sec >= VAR_12->next_try &&
      FUNC_7(VAR_9, VAR_12, VAR_10.sec)) {
   if (VAR_13)
    VAR_13->next = VAR_12->next;
   else
    VAR_9->msgs = VAR_12->next;

   VAR_14 = VAR_12;
   VAR_12 = VAR_12->next;
   FUNC_6(VAR_14);
   VAR_9->num_msgs--;
   continue;
  }

  if (VAR_17 != VAR_9->num_msgs) {
   FUNC_8(VAR_2,
       "RADIUS: Message removed from queue - restart from beginning");
   VAR_12 = VAR_9->msgs;
   VAR_13 = ((void*)0);
   continue;
  }

  if (VAR_11 == 0 || VAR_12->next_try < VAR_11)
   VAR_11 = VAR_12->next_try;

  VAR_13 = VAR_12;
  VAR_12 = VAR_12->next;
 }

 if (VAR_9->msgs) {
  if (VAR_11 < VAR_10.sec)
   VAR_11 = VAR_10.sec;
  FUNC_0(FUNC_9, VAR_9, ((void*)0));
  FUNC_1(VAR_11 - VAR_10.sec, 0,
           FUNC_9, VAR_9, ((void*)0));
  FUNC_2(VAR_9->ctx, ((void*)0), VAR_1,
          VAR_0, "Next RADIUS client "
          "retransmit in %ld seconds",
          (long int) (VAR_11 - VAR_10.sec));
 }
}

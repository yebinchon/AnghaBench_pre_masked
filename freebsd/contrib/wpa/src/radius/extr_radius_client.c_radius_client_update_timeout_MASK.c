
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ next_try; struct radius_msg_list* next; } ;
struct radius_client_data {int ctx; struct radius_msg_list* msgs; } ;
struct os_reltime {scalar_t__ sec; } ;
typedef scalar_t__ os_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct radius_client_data*,int *) ;
 int FUNC_1 (scalar_t__,int ,int ,struct radius_client_data*,int *) ;
 int FUNC_2 (int ,int *,int ,int ,char*,long) ;
 int FUNC_3 (struct os_reltime*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct radius_client_data *VAR_3)
{
 struct os_reltime VAR_4;
 os_time_t VAR_5;
 struct radius_msg_list *VAR_6;

 FUNC_0(VAR_2, VAR_3, ((void*)0));

 if (VAR_3->msgs == ((void*)0)) {
  return;
 }

 VAR_5 = 0;
 for (VAR_6 = VAR_3->msgs; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_5 == 0 || VAR_6->next_try < VAR_5)
   VAR_5 = VAR_6->next_try;
 }

 FUNC_3(&VAR_4);
 if (VAR_5 < VAR_4.sec)
  VAR_5 = VAR_4.sec;
 FUNC_1(VAR_5 - VAR_4.sec, 0, VAR_2, VAR_3,
          ((void*)0));
 FUNC_2(VAR_3->ctx, ((void*)0), VAR_1,
         VAR_0, "Next RADIUS client retransmit in"
         " %ld seconds", (long int) (VAR_5 - VAR_4.sec));
}

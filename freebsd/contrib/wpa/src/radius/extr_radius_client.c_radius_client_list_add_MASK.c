
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ sec; } ;
struct radius_msg_list {size_t shared_secret_len; int attempts; int accu_attempts; int next_wait; struct radius_msg_list* next; scalar_t__ first_try; scalar_t__ next_try; TYPE_1__ last_attempt; int const* shared_secret; int msg_type; struct radius_msg* msg; int addr; } ;
struct radius_msg {int dummy; } ;
struct radius_client_data {scalar_t__ num_msgs; struct radius_msg_list* msgs; } ;
typedef int RadiusType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int const*,int ) ;
 struct radius_msg_list* FUNC_3 (int) ;
 int FUNC_4 (struct radius_msg_list*) ;
 int FUNC_5 (struct radius_client_data*) ;
 int FUNC_6 (struct radius_msg*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(struct radius_client_data *VAR_5,
       struct radius_msg *VAR_6,
       RadiusType VAR_7,
       const u8 *VAR_8,
       size_t VAR_9, const u8 *VAR_10)
{
 struct radius_msg_list *VAR_11, *VAR_12;

 if (FUNC_0()) {


  FUNC_6(VAR_6);
  return;
 }

 VAR_11 = FUNC_3(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_7(VAR_1, "RADIUS: Failed to add packet into retransmit list");
  FUNC_6(VAR_6);
  return;
 }

 if (VAR_10)
  FUNC_2(VAR_11->addr, VAR_10, VAR_0);
 VAR_11->msg = VAR_6;
 VAR_11->msg_type = VAR_7;
 VAR_11->shared_secret = VAR_8;
 VAR_11->shared_secret_len = VAR_9;
 FUNC_1(&VAR_11->last_attempt);
 VAR_11->first_try = VAR_11->last_attempt.sec;
 VAR_11->next_try = VAR_11->first_try + VAR_2;
 VAR_11->attempts = 1;
 VAR_11->accu_attempts = 1;
 VAR_11->next_wait = VAR_2 * 2;
 if (VAR_11->next_wait > VAR_4)
  VAR_11->next_wait = VAR_4;
 VAR_11->next = VAR_5->msgs;
 VAR_5->msgs = VAR_11;
 FUNC_5(VAR_5);

 if (VAR_5->num_msgs >= VAR_3) {
  FUNC_7(VAR_1, "RADIUS: Removing the oldest un-ACKed packet due to retransmit list limits");
  VAR_12 = ((void*)0);
  while (VAR_11->next) {
   VAR_12 = VAR_11;
   VAR_11 = VAR_11->next;
  }
  if (VAR_12) {
   VAR_12->next = ((void*)0);
   FUNC_4(VAR_11);
  }
 } else
  VAR_5->num_msgs++;
}

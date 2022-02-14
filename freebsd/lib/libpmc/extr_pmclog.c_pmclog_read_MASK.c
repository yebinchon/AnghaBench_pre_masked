
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmclog_parse_state {scalar_t__ ps_state; scalar_t__ ps_len; int ps_fd; int ps_data; int ps_buffer; } ;
struct pmclog_ev {scalar_t__ pl_state; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct pmclog_parse_state*,int *,scalar_t__*,struct pmclog_ev*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;

int
FUNC_3(void *VAR_8, struct pmclog_ev *VAR_9)
{
 int VAR_10;
 ssize_t VAR_11;
 struct pmclog_parse_state *VAR_12;

 VAR_12 = (struct pmclog_parse_state *) VAR_8;

 if (VAR_12->ps_state == VAR_1) {
  VAR_9->pl_state = VAR_4;
  return -1;
 }





 if (VAR_12->ps_len == 0) {
  VAR_9->pl_state = VAR_6;







  if (VAR_12->ps_fd != VAR_5) {
  refill:
   VAR_11 = FUNC_2(VAR_12->ps_fd, VAR_12->ps_buffer,
       VAR_2);

   if (VAR_11 <= 0) {
    if (VAR_11 == 0)
     VAR_9->pl_state = VAR_3;
    else if (VAR_7 != VAR_0)
     VAR_9->pl_state = VAR_4;
    return -1;
   }

   VAR_12->ps_len = VAR_11;
   VAR_12->ps_data = VAR_12->ps_buffer;
  } else {
   return -1;
  }
 }

 FUNC_0(VAR_12->ps_len > 0);



 VAR_10 = FUNC_1(VAR_12, &VAR_12->ps_data, &VAR_12->ps_len, VAR_9);




 if (VAR_10 < 0 && VAR_9->pl_state == VAR_6 &&
     VAR_12->ps_fd != -1) {
  FUNC_0(VAR_12->ps_len == 0);
  goto refill;
 }

 return VAR_10;
}

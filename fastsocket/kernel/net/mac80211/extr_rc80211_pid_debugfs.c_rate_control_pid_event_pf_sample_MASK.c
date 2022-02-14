
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rc_pid_event_data {void* der_err; void* int_err; void* prop_err; void* pf_sample; } ;
struct rc_pid_event_buffer {int dummy; } ;
typedef void* s32 ;


 int VAR_0 ;
 int FUNC_0 (struct rc_pid_event_buffer*,int ,union rc_pid_event_data*) ;

void FUNC_1(struct rc_pid_event_buffer *VAR_1,
          s32 VAR_2, s32 VAR_3,
          s32 VAR_4, s32 VAR_5)
{
 union rc_pid_event_data VAR_6;

 VAR_6.pf_sample = VAR_2;
 VAR_6.prop_err = VAR_3;
 VAR_6.int_err = VAR_4;
 VAR_6.der_err = VAR_5;
 FUNC_0(VAR_1, VAR_0, &VAR_6);
}

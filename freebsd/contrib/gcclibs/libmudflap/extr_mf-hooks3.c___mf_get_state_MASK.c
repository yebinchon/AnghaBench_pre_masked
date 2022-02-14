
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mf_thread_data {int state; } ;
typedef enum __mf_state_enum { ____Placeholder___mf_state_enum } __mf_state_enum ;


 struct mf_thread_data* FUNC_0 (int ) ;
 int VAR_0 ;

enum __mf_state_enum
FUNC_1 (void)
{
  struct mf_thread_data *VAR_1 = FUNC_0 (0);
  if (VAR_1)
    return VAR_1->state;
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct wait_bit_key {int dummy; } ;


 int VAR_0 ;
 struct wait_bit_key FUNC_0 (void*,int) ;
 int FUNC_1 (int *,int ,int,struct wait_bit_key*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(wait_queue_head_t *VAR_1, void *VAR_2, int VAR_3)
{
 struct wait_bit_key VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1, VAR_0, 1, &VAR_4);
}

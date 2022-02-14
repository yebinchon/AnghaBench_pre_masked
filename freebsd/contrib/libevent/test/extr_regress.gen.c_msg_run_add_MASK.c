
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int dummy; } ;
struct msg {scalar_t__ run_length; scalar_t__ run_num_allocated; int run_set; struct run** run_data; } ;


 scalar_t__ FUNC_0 (struct msg*) ;
 struct run* FUNC_1 () ;

struct run*
FUNC_2(struct msg *VAR_0)
{
  if (++VAR_0->run_length >= VAR_0->run_num_allocated) {
    if (FUNC_0(VAR_0)<0)
      goto error;
  }
  VAR_0->run_data[VAR_0->run_length - 1] = FUNC_1();
  if (VAR_0->run_data[VAR_0->run_length - 1] == ((void*)0))
    goto error;
  VAR_0->run_set = 1;
  return (VAR_0->run_data[VAR_0->run_length - 1]);
error:
  --VAR_0->run_length;
  return (((void*)0));
}

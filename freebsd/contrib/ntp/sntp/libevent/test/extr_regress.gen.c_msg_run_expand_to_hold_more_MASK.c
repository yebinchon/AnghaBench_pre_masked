
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int dummy; } ;
struct msg {int run_num_allocated; struct run** run_data; } ;


 scalar_t__ FUNC_0 (struct run**,int) ;

__attribute__((used)) static int
FUNC_1(struct msg *VAR_0)
{
  int VAR_1 = VAR_0->run_num_allocated;
  struct run** VAR_2 = ((void*)0);
  VAR_1 = !VAR_1 ? 1 : VAR_1 << 1;
  VAR_2 = (struct run**) FUNC_0(VAR_0->run_data,
      VAR_1 * sizeof(struct run*));
  if (VAR_2 == ((void*)0))
    return -1;
  VAR_0->run_data = VAR_2;
  VAR_0->run_num_allocated = VAR_1;
  return 0;}

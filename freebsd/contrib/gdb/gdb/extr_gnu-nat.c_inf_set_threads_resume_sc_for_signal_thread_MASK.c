
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ signal_thread; } ;


 int FUNC_0 (struct inf*,scalar_t__,int ) ;

int
FUNC_1 (struct inf *VAR_0)
{
  if (VAR_0->signal_thread)
    {
      FUNC_0 (VAR_0, VAR_0->signal_thread, 0);
      return 1;
    }
  else
    return 0;
}

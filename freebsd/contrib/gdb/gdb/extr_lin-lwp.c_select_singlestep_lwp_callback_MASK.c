
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {scalar_t__ status; scalar_t__ step; } ;



__attribute__((used)) static int
FUNC_0 (struct lwp_info *VAR_0, void *VAR_1)
{
  if (VAR_0->step && VAR_0->status != 0)
    return 1;
  else
    return 0;
}

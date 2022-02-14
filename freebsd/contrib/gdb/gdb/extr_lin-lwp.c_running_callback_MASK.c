
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {scalar_t__ stopped; scalar_t__ status; scalar_t__ resumed; } ;



__attribute__((used)) static int
FUNC_0 (struct lwp_info *VAR_0, void *VAR_1)
{
  return (VAR_0->stopped == 0 || (VAR_0->status != 0 && VAR_0->resumed));
}

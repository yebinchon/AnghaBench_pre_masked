
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cv {char const* cv_description; scalar_t__ cv_waiters; } ;



void
FUNC_0(struct cv *VAR_0, const char *VAR_1)
{

 VAR_0->cv_description = VAR_1;
 VAR_0->cv_waiters = 0;
}

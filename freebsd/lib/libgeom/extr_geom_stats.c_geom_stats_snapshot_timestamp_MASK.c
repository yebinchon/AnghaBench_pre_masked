
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct snapshot {struct timespec time; } ;



void
FUNC_0(void *VAR_0, struct timespec *VAR_1)
{
 struct snapshot *VAR_2;

 VAR_2 = VAR_0;
 *VAR_1 = VAR_2->time;
}

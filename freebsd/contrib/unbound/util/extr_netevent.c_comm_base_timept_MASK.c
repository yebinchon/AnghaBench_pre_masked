
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct timeval {int dummy; } ;
struct comm_base {TYPE_1__* eb; } ;
struct TYPE_2__ {struct timeval now; int secs; } ;



void
FUNC_0(struct comm_base* VAR_0, time_t** VAR_1, struct timeval** VAR_2)
{
 *VAR_1 = &VAR_0->eb->secs;
 *VAR_2 = &VAR_0->eb->now;
}

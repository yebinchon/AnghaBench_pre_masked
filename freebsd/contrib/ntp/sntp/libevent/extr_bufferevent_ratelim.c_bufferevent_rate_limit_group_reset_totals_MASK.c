
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_rate_limit_group {scalar_t__ total_written; scalar_t__ total_read; } ;



void
FUNC_0(struct bufferevent_rate_limit_group *VAR_0)
{
 VAR_0->total_read = VAR_0->total_written = 0;
}

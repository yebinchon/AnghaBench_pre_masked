
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bictcp {int delayed_ack; scalar_t__ epoch_start; scalar_t__ last_time; scalar_t__ last_cwnd; scalar_t__ last_max_cwnd; scalar_t__ cnt; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct bictcp *VAR_1)
{
 VAR_1->cnt = 0;
 VAR_1->last_max_cwnd = 0;
 VAR_1->last_cwnd = 0;
 VAR_1->last_time = 0;
 VAR_1->epoch_start = 0;
 VAR_1->delayed_ack = 2 << VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct westwood {int rtt_min; int rtt; scalar_t__ reset_rtt_min; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct westwood *VAR_0)
{
 if (VAR_0->reset_rtt_min) {
  VAR_0->rtt_min = VAR_0->rtt;
  VAR_0->reset_rtt_min = 0;
 } else
  VAR_0->rtt_min = FUNC_0(VAR_0->rtt, VAR_0->rtt_min);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct loopback_pcm {unsigned int pcm_rate_shift; scalar_t__ period_size_frac; scalar_t__ irq_pos; int period_update_pending; unsigned long pcm_bps; TYPE_1__ timer; int pcm_period_size; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct loopback_pcm*,int ) ;
 unsigned int FUNC_2 (struct loopback_pcm*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct loopback_pcm *VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 != VAR_1->pcm_rate_shift) {
  VAR_1->pcm_rate_shift = VAR_3;
  VAR_1->period_size_frac = FUNC_1(VAR_1, VAR_1->pcm_period_size);
 }
 if (VAR_1->period_size_frac <= VAR_1->irq_pos) {
  VAR_1->irq_pos %= VAR_1->period_size_frac;
  VAR_1->period_update_pending = 1;
 }
 VAR_2 = VAR_1->period_size_frac - VAR_1->irq_pos;
 VAR_2 = (VAR_2 + VAR_1->pcm_bps - 1) / VAR_1->pcm_bps;
 VAR_1->timer.expires = VAR_0 + VAR_2;
 FUNC_0(&VAR_1->timer);
}

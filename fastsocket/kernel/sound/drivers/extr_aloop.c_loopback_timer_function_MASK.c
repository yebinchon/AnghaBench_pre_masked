
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_pcm {TYPE_1__* substream; scalar_t__ period_update_pending; int cable; } ;
struct TYPE_2__ {int stream; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct loopback_pcm*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct loopback_pcm *VAR_1 = (struct loopback_pcm *)VAR_0;
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1->cable);
 if (VAR_2 & (1 << VAR_1->substream->stream)) {
  FUNC_1(VAR_1);
  if (VAR_1->period_update_pending) {
   VAR_1->period_update_pending = 0;
   FUNC_2(VAR_1->substream);
  }
 }
}

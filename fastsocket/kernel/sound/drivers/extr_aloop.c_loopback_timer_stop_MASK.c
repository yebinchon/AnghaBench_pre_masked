
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct loopback_pcm {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(struct loopback_pcm *VAR_0)
{
 FUNC_0(&VAR_0->timer);
 VAR_0->timer.expires = 0;
}

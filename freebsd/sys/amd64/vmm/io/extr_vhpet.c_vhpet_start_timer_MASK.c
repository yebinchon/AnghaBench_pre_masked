
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vhpet {int freq_sbt; TYPE_1__* timer; } ;
typedef int sbintime_t ;
struct TYPE_2__ {scalar_t__ comprate; int compval; int callout_sbt; int arg; int callout; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vhpet*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct vhpet *VAR_3, int VAR_4, uint32_t VAR_5, sbintime_t VAR_6)
{
 sbintime_t VAR_7, VAR_8;

 if (VAR_3->timer[VAR_4].comprate != 0)
  FUNC_1(VAR_3, VAR_4, VAR_5);
 else {






 }

 VAR_7 = (VAR_3->timer[VAR_4].compval - VAR_5) * VAR_3->freq_sbt;
 VAR_8 = VAR_7 >> VAR_1;
 VAR_3->timer[VAR_4].callout_sbt = VAR_6 + VAR_7;
 FUNC_0(&VAR_3->timer[VAR_4].callout, VAR_3->timer[VAR_4].callout_sbt,
     VAR_8, VAR_2, &VAR_3->timer[VAR_4].arg, VAR_0);
}

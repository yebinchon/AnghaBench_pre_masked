
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct consdev {int cn_flags; } ;
struct TYPE_2__ {struct consdev* cnd_cn; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void
FUNC_0(struct consdev *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2[VAR_6].cnd_cn == VAR_4)
   break;
 }
 if (VAR_5) {
  if (VAR_6 < VAR_0)
   VAR_3 |= (1 << VAR_6);
  VAR_4->cn_flags &= ~VAR_1;
 } else {
  if (VAR_6 < VAR_0)
   VAR_3 &= ~(1 << VAR_6);
  VAR_4->cn_flags |= VAR_1;
 }
}

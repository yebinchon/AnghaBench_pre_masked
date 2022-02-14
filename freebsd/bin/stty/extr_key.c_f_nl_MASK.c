
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_oflag; int c_iflag; } ;
struct info {int set; TYPE_1__ t; scalar_t__ off; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct info *VAR_2)
{

 if (VAR_2->off) {
  VAR_2->t.c_iflag |= VAR_0;
  VAR_2->t.c_oflag |= VAR_1;
 } else {
  VAR_2->t.c_iflag &= ~VAR_0;
  VAR_2->t.c_oflag &= ~VAR_1;
 }
 VAR_2->set = 1;
}

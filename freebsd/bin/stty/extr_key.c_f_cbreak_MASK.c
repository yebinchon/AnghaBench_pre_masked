
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_iflag; int c_lflag; int c_oflag; } ;
struct info {int set; TYPE_1__ t; scalar_t__ off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct info*) ;

void
FUNC_1(struct info *VAR_7)
{

 if (VAR_7->off)
  FUNC_0(VAR_7);
 else {
  VAR_7->t.c_iflag |= VAR_0|VAR_5|VAR_3;
  VAR_7->t.c_oflag |= VAR_6;
  VAR_7->t.c_lflag |= VAR_4|VAR_2;
  VAR_7->t.c_lflag &= ~VAR_1;
  VAR_7->set = 1;
 }
}

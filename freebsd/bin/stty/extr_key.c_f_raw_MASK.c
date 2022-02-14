
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; } ;
struct info {int set; TYPE_1__ t; scalar_t__ off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct info*) ;

void
FUNC_2(struct info *VAR_3)
{

 if (VAR_3->off)
  FUNC_1(VAR_3);
 else {
  FUNC_0(&VAR_3->t);
  VAR_3->t.c_cflag &= ~(VAR_1|VAR_2);
  VAR_3->t.c_cflag |= VAR_0;
  VAR_3->set = 1;
 }
}

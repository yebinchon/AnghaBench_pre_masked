
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int * buf; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;

void
FUNC_3(int VAR_5, int VAR_6)
{
 if (VAR_6) {
  FUNC_2();
  VAR_1->buf = FUNC_0(VAR_0 + 1);
 }
 if (VAR_1->fd > 0)
  FUNC_1(VAR_1->fd);
 VAR_1->fd = VAR_5;
 if (VAR_1->buf == ((void*)0))
  VAR_1->buf = FUNC_0(VAR_0 + 1);
 VAR_2 = VAR_3 = 0;
 VAR_4 = 1;
}

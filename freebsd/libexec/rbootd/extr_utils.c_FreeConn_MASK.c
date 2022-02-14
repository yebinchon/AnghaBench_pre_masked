
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bootfd; } ;
typedef TYPE_1__ RMPCONN ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(RMPCONN *VAR_1)
{



 if (VAR_1->bootfd >= 0) {
  (void) FUNC_0(VAR_1->bootfd);
  VAR_1->bootfd = -1;
 }

 if (VAR_0 == ((void*)0))
  VAR_1 = VAR_0;
 else
  FUNC_1((char *)VAR_1);
}

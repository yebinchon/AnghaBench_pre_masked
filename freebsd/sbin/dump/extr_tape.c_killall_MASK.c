
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pid; scalar_t__ sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_1__* VAR_2 ;

void
FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2[VAR_3].pid > 0) {
   (void) FUNC_0(VAR_2[VAR_3].pid, VAR_0);
   VAR_2[VAR_3].sent = 0;
  }
}

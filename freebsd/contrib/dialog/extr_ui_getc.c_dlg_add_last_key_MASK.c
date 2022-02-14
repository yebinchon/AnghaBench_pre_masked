
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ last_key; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(int VAR_2)
{
    if (VAR_0.last_key) {
 if (VAR_2 >= 0) {
     if (VAR_2 > 0) {
  FUNC_4(-1);
     } else {
  if (FUNC_2())
      FUNC_0();
  FUNC_4(-2);
     }
 } else {
     char VAR_3[80];
     FUNC_3(VAR_3, "%d", VAR_1);
     FUNC_1(VAR_3);
     if (VAR_2 == -1)
  FUNC_0();
 }
    }
}

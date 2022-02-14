
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_5)
{
     FUNC_1(VAR_0, "trapped signal %d", VAR_5);
     FUNC_0(VAR_4, "trapped signal %d\n", VAR_5);

     switch(VAR_5) {
     case 131:
   VAR_3->flags |= VAR_1;
   break;

     case 128:
   VAR_3->flags |= VAR_2;
   break;

     case 130:
     case 129:
     default:
   return;
     }
}

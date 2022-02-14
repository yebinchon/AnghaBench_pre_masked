
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_2__ {int nsess; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(module_t VAR_2, int VAR_3, void *VAR_4)
{
     int VAR_5 = 0;

     FUNC_0(8);

     switch(VAR_3) {
     case 131:
   VAR_5 = FUNC_1();
   break;

     case 130:
   if(VAR_1->nsess) {
        FUNC_4("iscsi module busy(nsess=%d), cannot unload", VAR_1->nsess);
        FUNC_3(VAR_0, "iscsi module busy, cannot unload");
   }
   return VAR_1->nsess;

     case 129:
   break;

     case 128:
   FUNC_2();
   break;

     default:
   break;
     }
     return (VAR_5);
}

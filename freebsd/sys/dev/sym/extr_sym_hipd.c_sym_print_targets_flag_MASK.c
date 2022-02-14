
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* hcb_p ;
struct TYPE_6__ {int myaddr; TYPE_1__* target; } ;
struct TYPE_5__ {int usrflags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(hcb_p VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0, VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++) {
  if (VAR_5 == VAR_1->myaddr)
   continue;
  if (VAR_1->target[VAR_5].usrflags & VAR_2) {
   if (!VAR_4++)
    FUNC_0("%s: %s disabled for targets",
     FUNC_1(VAR_1), VAR_3);
   FUNC_0(" %d", VAR_5);
  }
 }
 if (VAR_4)
  FUNC_0(".\n");
}

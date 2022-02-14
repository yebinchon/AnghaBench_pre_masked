
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hpriv_p ;
struct TYPE_4__ {int* timeSent; int ato; int hook; int node; int rackTimer; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int,int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(hpriv_p VAR_3)
{
 int VAR_4, VAR_5;



 VAR_4 = (VAR_3->timeSent[0] + VAR_3->ato) - FUNC_2();
 if (VAR_4 < 0)
  VAR_4 = 0;


 VAR_5 = FUNC_0(VAR_4 * VAR_1, VAR_0) + 1;
 FUNC_1(&VAR_3->rackTimer, VAR_3->node, VAR_3->hook,
     VAR_5, VAR_2, VAR_3, 0);
}

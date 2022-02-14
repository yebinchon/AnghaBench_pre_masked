
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hpriv_p ;
struct TYPE_4__ {int rtt; int hook; int node; int sackTimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int,int ,TYPE_1__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(hpriv_p VAR_5)
{
 int VAR_6, VAR_7;


 VAR_6 = (VAR_5->rtt >> 2);
 if (VAR_6 < VAR_1)
  VAR_6 = VAR_1;
 else if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;


 VAR_7 = FUNC_0(VAR_6 * VAR_3, VAR_2);
 FUNC_1(&VAR_5->sackTimer, VAR_5->node, VAR_5->hook,
     VAR_7, VAR_4, VAR_5, 0);
}

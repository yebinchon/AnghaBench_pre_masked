
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_3__ {size_t ostate; int self; } ;
typedef TYPE_1__ Channel ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,size_t,size_t) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(Channel *VAR_2, u_int VAR_3)
{
 if (VAR_2->ostate > VAR_0 || VAR_3 > VAR_0)
  FUNC_1("chan_set_ostate: bad state %d -> %d", VAR_2->ostate, VAR_3);
 FUNC_0("channel %d: output %s -> %s", VAR_2->self, VAR_1[VAR_2->ostate],
     VAR_1[VAR_3]);
 VAR_2->ostate = VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int evtchn; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct xencons_priv *VAR_2)
{
 VAR_2->intf = FUNC_0(FUNC_1(FUNC_3()), VAR_0,
     VAR_1);
 VAR_2->evtchn = FUNC_2();
}

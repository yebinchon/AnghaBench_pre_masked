
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sid; } ;
struct sel_netif {TYPE_1__ nsec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sel_netif* FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;

int FUNC_5(int VAR_0, u32 *VAR_1)
{
 struct sel_netif *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2 != ((void*)0))) {
  *VAR_1 = VAR_2->nsec.sid;
  FUNC_2();
  return 0;
 }
 FUNC_2();

 return FUNC_4(VAR_0, VAR_1);
}

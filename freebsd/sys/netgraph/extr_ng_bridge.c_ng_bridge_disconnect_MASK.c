
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int link_p ;
typedef int hook_p ;
struct TYPE_4__ {int persistent; int numLinks; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__* const,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(hook_p VAR_1)
{
 const priv_p VAR_2 = FUNC_4(FUNC_0(VAR_1));
 link_p VAR_3 = FUNC_1(VAR_1);


 FUNC_6(VAR_2, VAR_3);


 FUNC_5(VAR_3, VAR_0);
 VAR_2->numLinks--;


 if ((FUNC_3(FUNC_0(VAR_1)) == 0)
     && (FUNC_2(FUNC_0(VAR_1)))
     && !VAR_2->persistent) {
  FUNC_7(FUNC_0(VAR_1));
 }
 return (0);
}

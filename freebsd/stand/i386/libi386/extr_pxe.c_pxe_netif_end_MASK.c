
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Status; } ;
typedef TYPE_1__ t_PXENV_UNDI_CLOSE ;
struct netif {int dummy; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct netif *VAR_1)
{
 t_PXENV_UNDI_CLOSE *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 if (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_2, sizeof(*VAR_2));
  FUNC_4(VAR_0, VAR_2);
  if (VAR_2->Status != 0)
   FUNC_3("undi close failed: %x\n", VAR_2->Status);
  FUNC_1(VAR_2, sizeof(*VAR_2));
 }
}

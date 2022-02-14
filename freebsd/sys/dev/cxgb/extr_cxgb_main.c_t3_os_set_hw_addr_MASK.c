
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_1__* port; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_4__ {int hw_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,int *,char*) ;

void
FUNC_2(adapter_t *VAR_2, int VAR_3, u8 VAR_4[])
{






 if (VAR_1)
  FUNC_1("set_hw_addr on idx %d addr %6D\n", VAR_3, VAR_4, ":");
 FUNC_0(VAR_4, VAR_2->port[VAR_3].hw_addr, VAR_0);
}

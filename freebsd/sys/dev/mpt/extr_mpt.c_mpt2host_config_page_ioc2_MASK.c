
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Reserved3; } ;
typedef int CONFIG_PAGE_IOC_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_2 ;

void
FUNC_2(CONFIG_PAGE_IOC_2 *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_3, VAR_2[VAR_4].Reserved3);
 }
}

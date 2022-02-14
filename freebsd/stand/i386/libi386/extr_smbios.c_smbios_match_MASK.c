
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int product; int maker; int bios_vendor; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(const char* VAR_1, const char* VAR_2,
    const char* VAR_3)
{

 FUNC_1(((void*)0));
 return (FUNC_0(VAR_1, VAR_0.bios_vendor) &&
     FUNC_0(VAR_2, VAR_0.maker) &&
     FUNC_0(VAR_3, VAR_0.product));
}

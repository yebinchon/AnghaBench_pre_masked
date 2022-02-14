
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ echotoggle; scalar_t__ modenegotiated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(void)
{
    int VAR_17 = 0;

    if (FUNC_1(VAR_8))
 VAR_17 |= VAR_0;

    if (VAR_16)
 VAR_17 |= VAR_2;

    if ((VAR_13 & 1) || FUNC_2(VAR_7))
 VAR_17 |= VAR_3;

    if (VAR_13 & 2)
 VAR_17 |= VAR_4;
    if (FUNC_0(VAR_7))
 VAR_17 |= VAR_5;
    if (FUNC_2(VAR_9))
 VAR_17 |= VAR_15;
    return(VAR_17);
}

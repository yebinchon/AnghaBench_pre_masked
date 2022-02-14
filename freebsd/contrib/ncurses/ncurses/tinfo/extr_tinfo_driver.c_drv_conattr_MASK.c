
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_5__ {scalar_t__ _coloron; } ;
struct TYPE_4__ {TYPE_2__* csp; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_2__ SCREEN ;


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
 int VAR_11 ;
 int FUNC_0 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static chtype
FUNC_1(TERMINAL_CONTROL_BLOCK * VAR_22)
{
    SCREEN *VAR_23 = VAR_22->csp;
    chtype VAR_24 = VAR_7;

    FUNC_0();
    if (VAR_12)
 VAR_24 |= VAR_0;

    if (VAR_13)
 VAR_24 |= VAR_1;

    if (VAR_14)
 VAR_24 |= VAR_2;

    if (VAR_15)
 VAR_24 |= VAR_4;

    if (VAR_18)
 VAR_24 |= VAR_9;

    if (VAR_20)
 VAR_24 |= VAR_10;

    if (VAR_17)
 VAR_24 |= VAR_8;

    if (VAR_19)
 VAR_24 |= VAR_5;

    if (VAR_21)
 VAR_24 |= VAR_11;

    if (VAR_23 && VAR_23->_coloron)
 VAR_24 |= VAR_3;






    return (VAR_24);
}

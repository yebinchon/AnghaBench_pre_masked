
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int attr_t ;
typedef int WORD ;
struct TYPE_2__ {int* pairs; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static WORD
FUNC_4(TERMINAL_CONTROL_BLOCK * VAR_8, WORD VAR_9, attr_t VAR_10)
{
    if (VAR_10 & VAR_1) {
 int VAR_11;
 SCREEN *VAR_12;

 FUNC_0();
 FUNC_3();
 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11 > 0 && VAR_11 < VAR_7 && VAR_8 != 0 && VAR_12 != 0) {
     WORD VAR_13;
     VAR_13 = FUNC_2(VAR_8)->pairs[VAR_11];
     VAR_9 = (VAR_9 & 0xff00) | VAR_13;
 }
    }

    if (VAR_10 & VAR_3)
 VAR_9 = ((VAR_9 & 0xff00) | (((VAR_9 & 0x07) << 4) | ((VAR_9 & 0x70) >> 4)));

    if (VAR_10 & VAR_4)
 VAR_9 = ((VAR_9 & 0xff00) | (((VAR_9 & 0x07) << 4) | ((VAR_9 & 0x70) >> 4))
        | VAR_5);

    if (VAR_10 & VAR_0)
 VAR_9 |= VAR_6;

    if (VAR_10 & VAR_2)
 VAR_9 |= VAR_5;

    return VAR_9;
}

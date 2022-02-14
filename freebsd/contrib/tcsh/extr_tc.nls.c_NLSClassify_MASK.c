
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;

int
FUNC_3(Char VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14;

    if ((VAR_11 & 0x80) != 0)
 return VAR_3;

    if (!VAR_13) {
 if (VAR_11 >= 0x10000)
     return VAR_4;
    }
    if (FUNC_0(VAR_11) && (VAR_11 & VAR_0) < 0x100) {
 if (VAR_11 == '\n')
     return VAR_8;
 if (VAR_11 == '\t')
     return VAR_9;
 return VAR_2;
    }
    VAR_14 = FUNC_2(VAR_11);
    if (VAR_13) {
 if (VAR_14 > 0)
     return VAR_14;
 if (VAR_14 == 0)
     return 1;
    }
    if ((VAR_14 > 0 && !(FUNC_0(VAR_11) && (VAR_11 & VAR_0) < 0x100)) || (FUNC_1(VAR_11) && !VAR_12))
 return VAR_14;
    return VAR_3;
}

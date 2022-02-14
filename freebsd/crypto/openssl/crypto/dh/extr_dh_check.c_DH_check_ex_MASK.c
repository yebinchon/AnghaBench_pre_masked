
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int const*,int*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const DH *VAR_15)
{
    int VAR_16 = 0;

    if (!FUNC_0(VAR_15, &VAR_16))
        return 0;

    if ((VAR_16 & VAR_6) != 0)
        FUNC_1(VAR_5, VAR_12);
    if ((VAR_16 & VAR_4) != 0)
        FUNC_1(VAR_5, VAR_11);
    if ((VAR_16 & VAR_1) != 0)
        FUNC_1(VAR_5, VAR_8);
    if ((VAR_16 & VAR_0) != 0)
        FUNC_1(VAR_5, VAR_7);
    if ((VAR_16 & VAR_14) != 0)
        FUNC_1(VAR_5, VAR_13);
    if ((VAR_16 & VAR_2) != 0)
        FUNC_1(VAR_5, VAR_9);
    if ((VAR_16 & VAR_3) != 0)
        FUNC_1(VAR_5, VAR_10);

    return VAR_16 == 0;
}

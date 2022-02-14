
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(ENGINE *VAR_9, unsigned int VAR_10)
{
    if ((VAR_10 & VAR_0) && !FUNC_5(VAR_9))
        return 0;
    if ((VAR_10 & VAR_2) && !FUNC_6(VAR_9))
        return 0;

    if ((VAR_10 & VAR_8) && !FUNC_4(VAR_9))
        return 0;


    if ((VAR_10 & VAR_3) && !FUNC_1(VAR_9))
        return 0;


    if ((VAR_10 & VAR_1) && !FUNC_0(VAR_9))
        return 0;


    if ((VAR_10 & VAR_4) && !FUNC_2(VAR_9))
        return 0;

    if ((VAR_10 & VAR_7) && !FUNC_3(VAR_9))
        return 0;
    if ((VAR_10 & VAR_6)
        && !FUNC_8(VAR_9))
        return 0;
    if ((VAR_10 & VAR_5)
        && !FUNC_7(VAR_9))
        return 0;
    return 1;
}

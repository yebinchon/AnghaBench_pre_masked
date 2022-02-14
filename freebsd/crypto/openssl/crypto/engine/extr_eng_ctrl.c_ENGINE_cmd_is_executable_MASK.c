
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int,int *,int *) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(ENGINE *VAR_6, int VAR_7)
{
    int VAR_8;
    if ((VAR_8 =
         FUNC_0(VAR_6, VAR_3, VAR_7, ((void*)0), ((void*)0))) < 0) {
        FUNC_1(VAR_4,
                  VAR_5);
        return 0;
    }
    if (!(VAR_8 & VAR_0) &&
        !(VAR_8 & VAR_1) &&
        !(VAR_8 & VAR_2))
        return 0;
    return 1;
}

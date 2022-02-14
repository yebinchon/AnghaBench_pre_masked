
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 unsigned short FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(ENGINE *VAR_9)
{

    unsigned short VAR_10;
    FUNC_7();

    if (!FUNC_4(VAR_9, VAR_7)
        || !FUNC_6(VAR_9, VAR_8)
        || !FUNC_2(VAR_9, VAR_4)
        || !FUNC_5(VAR_9, VAR_6)
        || !FUNC_3(VAR_9, VAR_5)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }






    for(VAR_10 = 0; VAR_10 < FUNC_8(VAR_2); VAR_10++) {
        if (FUNC_9(VAR_2[VAR_10]) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
    }

    if (!FUNC_1(VAR_9, VAR_3)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int BIO_ADDR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

int FUNC_8(int VAR_5, BIO_ADDR *VAR_6, int VAR_7)
{
    socklen_t VAR_8;
    int VAR_9;
    BIO_ADDR VAR_10;
    BIO_ADDR *VAR_11 = VAR_6 == ((void*)0) ? &VAR_10 : VAR_6;

    VAR_8 = sizeof(*VAR_11);
    VAR_9 = FUNC_5(VAR_5,
                           FUNC_0(VAR_11), &VAR_8);
    if (VAR_9 == -1) {
        if (!FUNC_1(VAR_9)) {
            FUNC_4(VAR_4, FUNC_7());
            FUNC_3(VAR_0, VAR_1);
        }
        return VAR_3;
    }

    if (!FUNC_2(VAR_9, (VAR_7 & VAR_2) != 0)) {
        FUNC_6(VAR_9);
        return VAR_3;
    }

    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on ;
typedef int BIO_ADDR ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int ,int ,void const*,int) ;

int FUNC_7(int VAR_9, const BIO_ADDR *VAR_10, int VAR_11)
{

    int VAR_12 = 1;


    if (VAR_9 == -1) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }






    if (VAR_11 & VAR_4) {
        if (FUNC_6(VAR_9, VAR_5, VAR_6,
                       (const void *)&VAR_12, sizeof(VAR_12)) != 0) {
            FUNC_3(VAR_8, FUNC_5());
            FUNC_2(VAR_0, VAR_3);
            return 0;
        }
    }


    if (FUNC_4(VAR_9, FUNC_0(VAR_10), FUNC_1(VAR_10)) != 0) {
        FUNC_3(VAR_7, FUNC_5());
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_ADDRINFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned char*,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*,int *,int ,scalar_t__,int ,int **) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,char*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(const char *VAR_5, unsigned char *VAR_6)
{
    BIO_ADDRINFO *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (FUNC_5() != 1)
        return 0;

    if (FUNC_4(VAR_5, ((void*)0), VAR_2, VAR_0, VAR_4, &VAR_7)) {
        size_t VAR_9;

        if (FUNC_1(VAR_7) != VAR_0) {
            FUNC_6(VAR_1,
                   VAR_3);
        } else if (FUNC_3(FUNC_0(VAR_7), ((void*)0), &VAR_9)) {




            if (FUNC_8(VAR_9 == 4))
                VAR_8 = FUNC_3(FUNC_0(VAR_7), VAR_6, &VAR_9);
        }
        FUNC_2(VAR_7);
    } else {
        FUNC_7(2, "host=", VAR_5);
    }

    return VAR_8;
}

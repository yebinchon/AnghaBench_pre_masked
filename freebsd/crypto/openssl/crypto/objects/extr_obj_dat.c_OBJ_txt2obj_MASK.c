
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned char**,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (unsigned char*,int,char const*,int) ;
 int * FUNC_9 (int *,unsigned char const**,int) ;

ASN1_OBJECT *FUNC_10(const char *VAR_5, int VAR_6)
{
    int VAR_7 = VAR_1;
    ASN1_OBJECT *VAR_8;
    unsigned char *VAR_9;
    unsigned char *VAR_10;
    const unsigned char *VAR_11;
    int VAR_12, VAR_13;

    if (!VAR_6) {
        if (((VAR_7 = FUNC_4(VAR_5)) != VAR_1) ||
            ((VAR_7 = FUNC_2(VAR_5)) != VAR_1))
            return FUNC_3(VAR_7);
    }


    VAR_12 = FUNC_8(((void*)0), 0, VAR_5, -1);
    if (VAR_12 <= 0) {




        return ((void*)0);
    }

    VAR_13 = FUNC_0(0, VAR_12, VAR_3);
    if (VAR_13 < 0)
        return ((void*)0);

    if ((VAR_9 = FUNC_7(VAR_13)) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_0);
        return ((void*)0);
    }

    VAR_10 = VAR_9;

    FUNC_1(&VAR_10, 0, VAR_12, VAR_3, VAR_4);

    FUNC_8(VAR_10, VAR_12, VAR_5, -1);

    VAR_11 = VAR_9;
    VAR_8 = FUNC_9(((void*)0), &VAR_11, VAR_13);
    FUNC_6(VAR_9);
    return VAR_8;
}

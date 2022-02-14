
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int length; unsigned char* data; int type; } ;
typedef int RSA ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned int) ;
 unsigned char* FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,unsigned char**) ;

int FUNC_6(int VAR_6,
                               const unsigned char *VAR_7, unsigned int VAR_8,
                               unsigned char *VAR_9, unsigned int *VAR_10,
                               RSA *VAR_11)
{
    ASN1_OCTET_STRING VAR_12;
    int VAR_13, VAR_14, VAR_15 = 1;
    unsigned char *VAR_16, *VAR_17;

    VAR_12.type = VAR_5;
    VAR_12.length = VAR_8;
    VAR_12.data = (unsigned char *)VAR_7;

    VAR_13 = FUNC_5(&VAR_12, ((void*)0));
    VAR_14 = FUNC_3(VAR_11);
    if (VAR_13 > (VAR_14 - VAR_3)) {
        FUNC_4(VAR_1,
               VAR_4);
        return 0;
    }
    VAR_17 = FUNC_1((unsigned int)VAR_14 + 1);
    if (VAR_17 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return 0;
    }
    VAR_16 = VAR_17;
    FUNC_5(&VAR_12, &VAR_16);
    VAR_13 = FUNC_2(VAR_13, VAR_17, VAR_9, VAR_11, VAR_2);
    if (VAR_13 <= 0)
        VAR_15 = 0;
    else
        *VAR_10 = VAR_13;

    FUNC_0(VAR_17, (unsigned int)VAR_14 + 1);
    return VAR_15;
}

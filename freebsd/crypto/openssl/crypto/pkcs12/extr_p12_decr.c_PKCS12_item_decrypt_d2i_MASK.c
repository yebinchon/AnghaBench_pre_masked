
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int length; int data; } ;
typedef int FILE ;
typedef TYPE_1__ ASN1_OCTET_STRING ;
typedef int ASN1_ITEM ;


 void* FUNC_0 (int *,unsigned char const**,int,int const*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int const*,char const*,int,int ,int ,unsigned char**,int*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (unsigned char const*,int,int,int *) ;
 int FUNC_8 (char*,char*,int ) ;

void *FUNC_9(const X509_ALGOR *VAR_3, const ASN1_ITEM *VAR_4,
                              const char *VAR_5, int VAR_6,
                              const ASN1_OCTET_STRING *VAR_7, int VAR_8)
{
    unsigned char *VAR_9;
    const unsigned char *VAR_10;
    void *VAR_11;
    int VAR_12;

    if (!FUNC_3(VAR_3, VAR_5, VAR_6, VAR_7->data, VAR_7->length,
                          &VAR_9, &VAR_12, 0)) {
        FUNC_4(VAR_0,
                  VAR_2);
        return ((void*)0);
    }
    VAR_10 = VAR_9;
    VAR_11 = FUNC_0(((void*)0), &VAR_10, VAR_12, VAR_4);
    if (VAR_8)
        FUNC_1(VAR_9, VAR_12);
    if (!VAR_11)
        FUNC_4(VAR_0, VAR_1);
    FUNC_2(VAR_9);
    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* peername; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int FUNC_0 (char*) ;

void FUNC_1(X509_VERIFY_PARAM *VAR_0,
                                     X509_VERIFY_PARAM *VAR_1)
{
    char *VAR_2 = (VAR_1 != ((void*)0)) ? VAR_1->peername : ((void*)0);

    if (VAR_0->peername != VAR_2) {
        FUNC_0(VAR_0->peername);
        VAR_0->peername = VAR_2;
    }
    if (VAR_1)
        VAR_1->peername = ((void*)0);
}

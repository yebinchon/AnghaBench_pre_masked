
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA_METHOD ;
typedef int DH_METHOD ;


 int * FUNC_0 () ;
 char* FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 char* FUNC_5 (int const*) ;
 int FUNC_6 (char*,...) ;

int
FUNC_7(void *VAR_0, int VAR_1, char **VAR_2)
{

    FUNC_2();

    {
 const RSA_METHOD *VAR_3 = FUNC_4();
 if (VAR_3 != ((void*)0))
     FUNC_6("rsa: %s\n", FUNC_5(VAR_3));
    }
    {
 const DH_METHOD *VAR_4 = FUNC_0();
 if (VAR_4 != ((void*)0))
     FUNC_6("dh: %s\n", FUNC_1(VAR_4));
    }





    {
 FUNC_6("ecdsa: hcrypto null\n");
    }

    {
 int VAR_5 = FUNC_3();
 FUNC_6("rand: %s\n", VAR_5 == 1 ? "ok" : "not available");
    }

    return 0;
}

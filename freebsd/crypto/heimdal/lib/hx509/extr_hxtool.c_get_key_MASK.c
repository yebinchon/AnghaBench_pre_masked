
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_private_key ;
typedef int RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (unsigned char*) ;
 size_t FUNC_9 (int *,unsigned char**) ;
 unsigned char* FUNC_10 (size_t) ;
 int FUNC_11 (unsigned char*,int ,size_t) ;
 int FUNC_12 (char const*,int *) ;
 int FUNC_13 (char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_14 (char const*,char*) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_0, const char *VAR_1, int VAR_2,
 hx509_private_key *VAR_3)
{
    int VAR_4;

    if (VAR_1) {
 BIGNUM *VAR_5;
 RSA *VAR_6;
 unsigned char *VAR_7, *VAR_8;
 size_t VAR_9;
 int VAR_10 = 1024;

 if (VAR_0 == ((void*)0))
     FUNC_7(1, "no key argument, don't know here to store key");

 if (FUNC_14(VAR_1, "rsa") != 0)
     FUNC_7(1, "can only handle rsa keys for now");

 VAR_5 = FUNC_1();
 FUNC_2(VAR_5, 0x10001);

 if (VAR_2)
     VAR_10 = VAR_2;

 VAR_6 = FUNC_5();
 if(VAR_6 == ((void*)0))
     FUNC_7(1, "RSA_new failed");

 VAR_4 = FUNC_4(VAR_6, VAR_10, VAR_5, ((void*)0));
 if(VAR_4 != 1)
     FUNC_7(1, "RSA_new failed");

 FUNC_0(VAR_5);

 VAR_9 = FUNC_9(VAR_6, ((void*)0));

 VAR_7 = VAR_8 = FUNC_10(VAR_9);
 if (VAR_8 == ((void*)0))
     FUNC_7(1, "out of memory");

 FUNC_9(VAR_6, &VAR_8);

 FUNC_13(VAR_0, VAR_7, VAR_9);
 FUNC_11(VAR_7, 0, VAR_9);
 FUNC_8(VAR_7);

 FUNC_3(VAR_6);

    } else if (VAR_0 == ((void*)0))
 FUNC_6(1, "no private key");

    VAR_4 = FUNC_12(VAR_0, VAR_3);
    if (VAR_4)
 FUNC_6(1, "read_private_key");
}

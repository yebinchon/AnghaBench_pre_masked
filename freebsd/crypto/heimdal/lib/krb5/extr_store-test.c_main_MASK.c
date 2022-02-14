
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_principal ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,char*,char*,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(int VAR_3, char **VAR_4)
{
    int VAR_5 = 0;
    krb5_storage *VAR_6;
    krb5_context VAR_7;
    krb5_principal VAR_8;


    FUNC_3(&VAR_7);

    VAR_6 = FUNC_5();
    FUNC_7(VAR_6, 0x01020304);
    VAR_5 += FUNC_0("Integer", VAR_6, "\x1\x2\x3\x4", 4);

    VAR_6 = FUNC_5();
    FUNC_6(VAR_6, VAR_2);
    FUNC_7(VAR_6, 0x01020304);
    VAR_5 += FUNC_0("Integer (LE)", VAR_6, "\x4\x3\x2\x1", 4);

    VAR_6 = FUNC_5();
    FUNC_6(VAR_6, VAR_0);
    FUNC_7(VAR_6, 0x01020304);
    VAR_5 += FUNC_0("Integer (BE)", VAR_6, "\x1\x2\x3\x4", 4);

    VAR_6 = FUNC_5();
    FUNC_6(VAR_6, VAR_1);
    FUNC_7(VAR_6, 0x01020304);
    {
 int VAR_9 = 1;
 void *VAR_10;
 if(*(char*)&VAR_9)
     VAR_10 = "\x4\x3\x2\x1";
 else
     VAR_10 = "\x1\x2\x3\x4";
 VAR_5 += FUNC_0("Integer (host)", VAR_6, VAR_10, 4);
    }

    VAR_6 = FUNC_5();
    FUNC_4(VAR_7, &VAR_8, "TEST", "foobar", ((void*)0));
    FUNC_8(VAR_6, VAR_8);
    FUNC_2(VAR_7, VAR_8);
    VAR_5 += FUNC_0("Principal", VAR_6, "\x0\x0\x0\x1"
      "\x0\x0\x0\x1"
      "\x0\x0\x0\x4TEST"
      "\x0\x0\x0\x6""foobar", 26);

    FUNC_1(VAR_7);

    return VAR_5 ? 1 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int * data; int length; } ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (char const*,int ,struct ntlm_buf*) ;
 int FUNC_7 (struct ntlm_buf*) ;
 int * FUNC_8 (int ) ;

int
FUNC_9(const char *VAR_2, struct ntlm_buf *VAR_3)
{
    struct ntlm_buf VAR_4;
    EVP_MD_CTX *VAR_5;
    int VAR_6;

    VAR_3->data = FUNC_8(VAR_1);
    if (VAR_3->data == ((void*)0))
 return VAR_0;
    VAR_3->length = VAR_1;

    VAR_6 = FUNC_6(VAR_2, 0, &VAR_4);
    if (VAR_6) {
 FUNC_7(VAR_3);
 return VAR_6;
    }

    VAR_5 = FUNC_3();
    if (VAR_5 == ((void*)0)) {
 FUNC_7(VAR_3);
 FUNC_7(&VAR_4);
 return VAR_0;
    }

    FUNC_1(VAR_5, FUNC_5(), ((void*)0));
    FUNC_2(VAR_5, VAR_4.data, VAR_4.length);
    FUNC_0(VAR_5, VAR_3->data, ((void*)0));
    FUNC_4(VAR_5);

    FUNC_7(&VAR_4);
    return 0;
}

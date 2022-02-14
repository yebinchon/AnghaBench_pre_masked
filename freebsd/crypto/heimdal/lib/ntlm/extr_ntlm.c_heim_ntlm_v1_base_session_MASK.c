
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int * data; scalar_t__ length; } ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,void*,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct ntlm_buf*) ;
 int * FUNC_7 (scalar_t__) ;

int
FUNC_8(void *VAR_2, size_t VAR_3,
     struct ntlm_buf *VAR_4)
{
    EVP_MD_CTX *VAR_5;

    VAR_4->length = VAR_1;
    VAR_4->data = FUNC_7(VAR_4->length);
    if (VAR_4->data == ((void*)0)) {
 VAR_4->length = 0;
 return VAR_0;
    }

    VAR_5 = FUNC_3();
    if (VAR_5 == ((void*)0)) {
 FUNC_6(VAR_4);
 return VAR_0;
    }
    FUNC_1(VAR_5, FUNC_5(), ((void*)0));
    FUNC_2(VAR_5, VAR_2, VAR_3);
    FUNC_0(VAR_5, VAR_4->data, ((void*)0));
    FUNC_4(VAR_5);

    return 0;
}

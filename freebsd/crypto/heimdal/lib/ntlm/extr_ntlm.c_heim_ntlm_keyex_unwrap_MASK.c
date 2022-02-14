
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {scalar_t__ length; int * data; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int ,int *,int *,int *,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct ntlm_buf*) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ntlm_buf*,int ,int) ;

int
FUNC_8(struct ntlm_buf *VAR_4,
         struct ntlm_buf *VAR_5,
         struct ntlm_buf *VAR_6)
{
    EVP_CIPHER_CTX *VAR_7;

    FUNC_7(VAR_6, 0, sizeof(*VAR_6));

    if (VAR_4->length != VAR_3)
 return VAR_2;

    VAR_6->length = VAR_3;
    VAR_6->data = FUNC_6(VAR_6->length);
    if (VAR_6->data == ((void*)0)) {
 VAR_6->length = 0;
 return VAR_0;
    }
    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0)) {
 FUNC_5(VAR_6);
 return VAR_0;
    }

    if (FUNC_3(VAR_7, FUNC_4(), ((void*)0), VAR_4->data, ((void*)0), 0) != 1) {
 FUNC_0(VAR_7);
 FUNC_5(VAR_6);
 return VAR_1;
    }

    FUNC_2(VAR_7, VAR_6->data, VAR_5->data, VAR_6->length);
    FUNC_0(VAR_7);

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int length; int * data; } ;
typedef int HMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,unsigned int*) ;
 int FUNC_4 (int *,void*,size_t,int ,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_6 (struct ntlm_buf*) ;
 int * FUNC_7 (int) ;

int
FUNC_8(void *VAR_2, size_t VAR_3,
     struct ntlm_buf *VAR_4,
     struct ntlm_buf *VAR_5)
{
    unsigned int VAR_6;
    HMAC_CTX *VAR_7;

    if (VAR_4->length <= 16)
        return VAR_1;

    VAR_5->data = FUNC_7(16);
    if (VAR_5->data == ((void*)0))
 return VAR_0;
    VAR_5->length = 16;


    VAR_7 = FUNC_2();
    if (VAR_7 == ((void*)0)) {
 FUNC_6(VAR_5);
 return VAR_0;
    }
    FUNC_4(VAR_7, VAR_2, VAR_3, FUNC_0(), ((void*)0));
    FUNC_5(VAR_7, VAR_4->data, 16);
    FUNC_3(VAR_7, VAR_5->data, &VAR_6);
    FUNC_1(VAR_7);

    return 0;
}

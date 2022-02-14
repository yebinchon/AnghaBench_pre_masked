
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int data; int length; } ;
typedef int HMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,unsigned int*) ;
 int FUNC_4 (int *,void const*,size_t,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char const*,int,struct ntlm_buf*) ;
 int FUNC_7 (int ) ;

int
FUNC_8(const void *VAR_1, size_t VAR_2,
       const char *VAR_3,
       const char *VAR_4,
       unsigned char VAR_5[16])
{
    int VAR_6;
    unsigned int VAR_7;
    HMAC_CTX *VAR_8;

    VAR_8 = FUNC_2();
    if (VAR_8 == ((void*)0))
 return VAR_0;
    FUNC_4(VAR_8, VAR_1, VAR_2, FUNC_0(), ((void*)0));
    {
 struct ntlm_buf VAR_9;

 VAR_6 = FUNC_6(VAR_3, 1, &VAR_9);
 if (VAR_6)
     goto out;
 FUNC_5(VAR_8, VAR_9.data, VAR_9.length);
 FUNC_7(VAR_9.data);

 VAR_6 = FUNC_6(VAR_4, 1, &VAR_9);
 if (VAR_6)
     goto out;
 FUNC_5(VAR_8, VAR_9.data, VAR_9.length);
 FUNC_7(VAR_9.data);
    }
    FUNC_3(VAR_8, VAR_5, &VAR_7);
 out:
    FUNC_1(VAR_8);

    return VAR_6;
}

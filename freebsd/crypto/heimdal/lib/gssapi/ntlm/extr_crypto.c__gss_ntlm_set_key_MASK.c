
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlmv2_key {unsigned char* signkey; int sealkey; int * signsealkey; scalar_t__ seq; } ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,...) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int,unsigned char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_7 (char const*) ;

void
FUNC_8(struct ntlmv2_key *VAR_4, int VAR_5, int VAR_6,
    unsigned char *VAR_7, size_t VAR_8)
{
    unsigned char VAR_9[16];
    EVP_MD_CTX *VAR_10;
    const char *VAR_11;
    const char *VAR_12;

    if (VAR_5) {
 VAR_11 = VAR_1;
 VAR_12 = VAR_0;
    } else {
 VAR_11 = VAR_3;
 VAR_12 = VAR_2;
    }

    VAR_4->seq = 0;

    VAR_10 = FUNC_3();
    FUNC_1(VAR_10, FUNC_5(), ((void*)0));
    FUNC_2(VAR_10, VAR_7, VAR_8);
    FUNC_2(VAR_10, VAR_11, FUNC_7(VAR_11) + 1);
    FUNC_0(VAR_10, VAR_4->signkey, ((void*)0));

    FUNC_1(VAR_10, FUNC_5(), ((void*)0));
    FUNC_2(VAR_10, VAR_7, VAR_8);
    FUNC_2(VAR_10, VAR_12, FUNC_7(VAR_12) + 1);
    FUNC_0(VAR_10, VAR_9, ((void*)0));
    FUNC_4(VAR_10);

    FUNC_6(&VAR_4->sealkey, 16, VAR_9);
    if (VAR_6)
 VAR_4->signsealkey = &VAR_4->sealkey;
}

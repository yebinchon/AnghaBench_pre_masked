
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; int * ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int faketag ;
typedef int aad ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,unsigned char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,int *,int *,int *,int ) ;
 int FUNC_4 (int *,unsigned char*,int*,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned char*,int*) ;
 int FUNC_6 (int *,int *,int *,int *,int ) ;
 int FUNC_7 (int *,unsigned char*,int*,unsigned char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_8(void *VAR_6)
{
    loopargs_t *VAR_7 = *(loopargs_t **) VAR_6;
    unsigned char *VAR_8 = VAR_7->buf;
    EVP_CIPHER_CTX *VAR_9 = VAR_7->ctx;
    int VAR_10, VAR_11;
    unsigned char VAR_12[13] = { 0xcc };
    unsigned char VAR_13[16] = { 0xcc };

    int VAR_14 = VAR_4 * 4 * VAR_3[0] / VAR_3[VAR_5];

    if (VAR_1) {
        for (VAR_11 = 0; FUNC_0(VAR_14); VAR_11++) {
            FUNC_3(VAR_9, ((void*)0), ((void*)0), ((void*)0), VAR_2);
            FUNC_1(VAR_9, VAR_0,
                                sizeof(VAR_13), VAR_13);
            FUNC_4(VAR_9, ((void*)0), &VAR_10, VAR_12, sizeof(VAR_12));
            FUNC_4(VAR_9, VAR_8, &VAR_10, VAR_8, VAR_3[VAR_5]);
            FUNC_2(VAR_9, VAR_8 + VAR_10, &VAR_10);
        }
    } else {
        for (VAR_11 = 0; FUNC_0(VAR_14); VAR_11++) {
            FUNC_6(VAR_9, ((void*)0), ((void*)0), ((void*)0), VAR_2);
            FUNC_7(VAR_9, ((void*)0), &VAR_10, VAR_12, sizeof(VAR_12));
            FUNC_7(VAR_9, VAR_8, &VAR_10, VAR_8, VAR_3[VAR_5]);
            FUNC_5(VAR_9, VAR_8 + VAR_10, &VAR_10);
        }
    }
    return VAR_11;
}

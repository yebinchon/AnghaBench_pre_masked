
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; unsigned char* buf2; size_t sigsize; int ** eddsa_ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char*,size_t*,unsigned char*,int) ;
 int VAR_0 ;
 int ** VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
    loopargs_t *VAR_4 = *(loopargs_t **) VAR_3;
    unsigned char *VAR_5 = VAR_4->buf;
    EVP_MD_CTX **VAR_6 = VAR_4->eddsa_ctx;
    unsigned char *VAR_7 = VAR_4->buf2;
    size_t *VAR_8 = &VAR_4->sigsize;
    int VAR_9, VAR_10;

    for (VAR_10 = 0; FUNC_1(VAR_1[VAR_2][0]); VAR_10++) {
        VAR_9 = FUNC_3(VAR_6[VAR_2], VAR_7, VAR_8, VAR_5, 20);
        if (VAR_9 == 0) {
            FUNC_0(VAR_0, "EdDSA sign failure\n");
            FUNC_2(VAR_0);
            VAR_10 = -1;
            break;
        }
    }
    return VAR_10;
}

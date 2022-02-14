
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; int * hctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int HMAC_CTX ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,unsigned char*,int *) ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int FUNC_3 (int *,unsigned char*,int ) ;
 int VAR_1 ;
 int ** VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_4(void *VAR_5)
{
    loopargs_t *VAR_6 = *(loopargs_t **) VAR_5;
    unsigned char *VAR_7 = VAR_6->buf;
    HMAC_CTX *VAR_8 = VAR_6->hctx;
    unsigned char VAR_9[VAR_1];
    int VAR_10;

    for (VAR_10 = 0; FUNC_0(VAR_2[VAR_0][VAR_4]); VAR_10++) {
        FUNC_2(VAR_8, ((void*)0), 0, ((void*)0), ((void*)0));
        FUNC_3(VAR_8, VAR_7, VAR_3[VAR_4]);
        FUNC_1(VAR_8, VAR_9, ((void*)0));
    }
    return VAR_10;
}

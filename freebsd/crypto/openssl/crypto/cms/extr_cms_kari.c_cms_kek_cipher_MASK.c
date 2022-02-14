
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pctx; int ctx; } ;
typedef TYPE_1__ CMS_KeyAgreeRecipientInfo ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,unsigned char*,int *,int) ;
 int FUNC_3 (int ,unsigned char*,int*,unsigned char const*,size_t) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t*) ;
 int FUNC_6 (unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(unsigned char **VAR_1, size_t *VAR_2,
                          const unsigned char *VAR_3, size_t VAR_4,
                          CMS_KeyAgreeRecipientInfo *VAR_5, int VAR_6)
{

    unsigned char VAR_7[VAR_0];
    size_t VAR_8;
    int VAR_9 = 0;
    unsigned char *VAR_10 = ((void*)0);
    int VAR_11;
    VAR_8 = FUNC_0(VAR_5->ctx);
    if (VAR_8 > VAR_0)
        return 0;

    if (FUNC_5(VAR_5->pctx, VAR_7, &VAR_8) <= 0)
        goto err;

    if (!FUNC_2(VAR_5->ctx, ((void*)0), ((void*)0), VAR_7, ((void*)0), VAR_6))
        goto err;

    if (!FUNC_3(VAR_5->ctx, ((void*)0), &VAR_11, VAR_3, VAR_4))
        goto err;
    VAR_10 = FUNC_8(VAR_11);
    if (VAR_10 == ((void*)0))
        goto err;
    if (!FUNC_3(VAR_5->ctx, VAR_10, &VAR_11, VAR_3, VAR_4))
        goto err;
    *VAR_1 = VAR_10;
    *VAR_2 = (size_t)VAR_11;
    VAR_9 = 1;

 err:
    FUNC_6(VAR_7, VAR_8);
    if (!VAR_9)
        FUNC_7(VAR_10);
    FUNC_1(VAR_5->ctx);

    FUNC_4(VAR_5->pctx);
    VAR_5->pctx = ((void*)0);
    return VAR_9;
}

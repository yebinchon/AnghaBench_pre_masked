
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; int * gcm_ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int GCM128_CONTEXT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 size_t VAR_0 ;
 int ** VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
    loopargs_t *VAR_5 = *(loopargs_t **) VAR_4;
    unsigned char *VAR_6 = VAR_5->buf;
    GCM128_CONTEXT *VAR_7 = VAR_5->gcm_ctx;
    int VAR_8;
    for (VAR_8 = 0; FUNC_0(VAR_1[VAR_0][VAR_3]); VAR_8++)
        FUNC_1(VAR_7, VAR_6, VAR_2[VAR_3]);
    return VAR_8;
}

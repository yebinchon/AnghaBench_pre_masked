
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; unsigned char* buf2; unsigned int siglen; int ** rsa_key; } ;
typedef TYPE_1__ loopargs_t ;
typedef int RSA ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,unsigned char*,int,unsigned char*,unsigned int*,int *) ;
 int VAR_1 ;
 int ** VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_4(void *VAR_4)
{
    loopargs_t *VAR_5 = *(loopargs_t **) VAR_4;
    unsigned char *VAR_6 = VAR_5->buf;
    unsigned char *VAR_7 = VAR_5->buf2;
    unsigned int *VAR_8 = &VAR_5->siglen;
    RSA **VAR_9 = VAR_5->rsa_key;
    int VAR_10, VAR_11;
    for (VAR_11 = 0; FUNC_1(VAR_2[VAR_3][0]); VAR_11++) {
        VAR_10 = FUNC_3(VAR_0, VAR_6, 36, VAR_7, VAR_8, VAR_9[VAR_3]);
        if (VAR_10 == 0) {
            FUNC_0(VAR_1, "RSA sign failure\n");
            FUNC_2(VAR_1);
            VAR_11 = -1;
            break;
        }
    }
    return VAR_11;
}

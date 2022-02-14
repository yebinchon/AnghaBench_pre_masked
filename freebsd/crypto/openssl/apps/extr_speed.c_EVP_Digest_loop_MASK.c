
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; } ;
typedef TYPE_1__ loopargs_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,unsigned char*,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_2(void *VAR_5)
{
    loopargs_t *VAR_6 = *(loopargs_t **) VAR_5;
    unsigned char *VAR_7 = VAR_6->buf;
    unsigned char VAR_8[VAR_0];
    int VAR_9;

    int VAR_10 = VAR_3 * 4 * VAR_2[0] / VAR_2[VAR_4];


    for (VAR_9 = 0; FUNC_0(VAR_10); VAR_9++) {
        if (!FUNC_1(VAR_7, VAR_2[VAR_4], VAR_8, ((void*)0), VAR_1, ((void*)0)))
            return -1;
    }
    return VAR_9;
}

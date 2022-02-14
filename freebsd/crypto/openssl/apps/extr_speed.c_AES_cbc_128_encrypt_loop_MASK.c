
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; } ;
typedef TYPE_1__ loopargs_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static int FUNC_2(void *VAR_7)
{
    loopargs_t *VAR_8 = *(loopargs_t **) VAR_7;
    unsigned char *VAR_9 = VAR_8->buf;
    int VAR_10;
    for (VAR_10 = 0; FUNC_1(VAR_3[VAR_1][VAR_6]); VAR_10++)
        FUNC_0(VAR_9, VAR_9,
                        (size_t)VAR_5[VAR_6], &VAR_2, VAR_4, VAR_0);
    return VAR_10;
}

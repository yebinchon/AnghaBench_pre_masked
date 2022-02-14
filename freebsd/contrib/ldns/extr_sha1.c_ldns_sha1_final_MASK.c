
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int* state; int buffer; } ;
typedef TYPE_1__ ldns_sha1_ctx ;


 unsigned int VAR_0 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

void
FUNC_2(unsigned char VAR_1[VAR_0], ldns_sha1_ctx *VAR_2)
{
    unsigned int VAR_3;
    unsigned char VAR_4[8];

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        VAR_4[VAR_3] = (unsigned char)((VAR_2->count >>
            ((7 - (VAR_3 & 7)) * 8)) & 255);
    }
    FUNC_1(VAR_2, (unsigned char *)"\200", 1);
    while ((VAR_2->count & 504) != 448) {
        FUNC_1(VAR_2, (unsigned char *)"\0", 1);
    }
    FUNC_1(VAR_2, VAR_4, 8);

    if (VAR_1 != ((void*)0))
        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
            VAR_1[VAR_3] = (unsigned char)((VAR_2->state[VAR_3 >> 2] >>
                ((3 - (VAR_3 & 3)) * 8)) & 255);
      }



}

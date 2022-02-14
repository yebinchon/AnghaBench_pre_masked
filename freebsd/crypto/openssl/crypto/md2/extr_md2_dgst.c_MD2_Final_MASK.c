
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char UCHAR ;
struct TYPE_5__ {unsigned char* data; int* state; int* cksm; int num; } ;
typedef int MD2_INT ;
typedef TYPE_1__ MD2_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;

int FUNC_2(unsigned char *VAR_1, MD2_CTX *VAR_2)
{
    int VAR_3, VAR_4;
    register UCHAR *VAR_5;
    register MD2_INT *VAR_6, *VAR_7;

    VAR_5 = VAR_2->data;
    VAR_6 = VAR_2->state;
    VAR_7 = VAR_2->cksm;
    VAR_4 = VAR_0 - VAR_2->num;
    for (VAR_3 = VAR_2->num; VAR_3 < VAR_0; VAR_3++)
        VAR_5[VAR_3] = (UCHAR) VAR_4;

    FUNC_1(VAR_2, VAR_5);

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        VAR_5[VAR_3] = (UCHAR) VAR_7[VAR_3];
    FUNC_1(VAR_2, VAR_5);

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
        VAR_1[VAR_3] = (UCHAR) (VAR_6[VAR_3] & 0xff);
    FUNC_0(VAR_2, sizeof(*VAR_2));
    return 1;
}

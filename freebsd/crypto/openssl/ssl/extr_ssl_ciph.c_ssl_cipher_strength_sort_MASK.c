
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* cipher; scalar_t__ active; } ;
struct TYPE_7__ {int strength_bits; } ;
typedef TYPE_2__ CIPHER_ORDER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int,TYPE_2__**,TYPE_2__**) ;

__attribute__((used)) static int FUNC_4(CIPHER_ORDER **VAR_3,
                                    CIPHER_ORDER **VAR_4)
{
    int32_t VAR_5;
    int VAR_6, *VAR_7;
    CIPHER_ORDER *VAR_8;






    VAR_5 = 0;
    VAR_8 = *VAR_3;
    while (VAR_8 != ((void*)0)) {
        if (VAR_8->active && (VAR_8->cipher->strength_bits > VAR_5))
            VAR_5 = VAR_8->cipher->strength_bits;
        VAR_8 = VAR_8->next;
    }

    VAR_7 = FUNC_1(sizeof(int) * (VAR_5 + 1));
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_2, VAR_1);
        return 0;
    }




    VAR_8 = *VAR_3;
    while (VAR_8 != ((void*)0)) {
        if (VAR_8->active)
            VAR_7[VAR_8->cipher->strength_bits]++;
        VAR_8 = VAR_8->next;
    }




    for (VAR_6 = VAR_5; VAR_6 >= 0; VAR_6--)
        if (VAR_7[VAR_6] > 0)
            FUNC_3(0, 0, 0, 0, 0, 0, 0, VAR_0, VAR_6, VAR_3,
                                  VAR_4);

    FUNC_0(VAR_7);
    return 1;
}

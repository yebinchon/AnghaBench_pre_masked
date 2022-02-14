
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int istream_t ;
struct TYPE_5__ {size_t* previous_offsets; int ll_dtable; int ml_dtable; int of_dtable; int literals_dtable; void* dictionary_id; } ;
typedef TYPE_1__ dictionary_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*,size_t) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__* const,int *) ;
 int FUNC_9 (TYPE_1__* const,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_10(dictionary_t *const VAR_4, const void *VAR_5,
                             size_t VAR_6) {
    const u8 *VAR_7 = (const u8 *)VAR_5;
    FUNC_9(VAR_4, 0, sizeof(dictionary_t));
    if (VAR_5 == ((void*)0)) {
        FUNC_5();
    }
    if (VAR_6 < 8) {
        FUNC_0();
    }

    istream_t VAR_8 = FUNC_2(VAR_7, VAR_6);

    const u32 VAR_9 = FUNC_3(&VAR_8, 32);
    if (VAR_9 != 0xEC30A437) {

        FUNC_4(&VAR_8, 32);
        FUNC_8(VAR_4, &VAR_8);
        return;
    }

    VAR_4->dictionary_id = FUNC_3(&VAR_8, 32);
    FUNC_6(&VAR_4->literals_dtable, &VAR_8);
    FUNC_7(&VAR_4->of_dtable, &VAR_8, VAR_3, VAR_0);
    FUNC_7(&VAR_4->ml_dtable, &VAR_8, VAR_2, VAR_0);
    FUNC_7(&VAR_4->ll_dtable, &VAR_8, VAR_1, VAR_0);


    VAR_4->previous_offsets[0] = FUNC_3(&VAR_8, 32);
    VAR_4->previous_offsets[1] = FUNC_3(&VAR_8, 32);
    VAR_4->previous_offsets[2] = FUNC_3(&VAR_8, 32);



    for (int VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        if (VAR_4->previous_offsets[VAR_10] > VAR_6) {
            FUNC_1("Dictionary corrupted");
        }
    }




    FUNC_8(VAR_4, &VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int ostream_t ;
typedef int istream_t ;
struct TYPE_8__ {int symbols; } ;
struct TYPE_7__ {TYPE_3__ literals_dtable; } ;
typedef TYPE_1__ frame_context_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t FUNC_2 (TYPE_3__*,int *,int *) ;
 size_t FUNC_3 (TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int * const,size_t) ;
 size_t FUNC_8 (int * const,int) ;
 size_t VAR_0 ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int * FUNC_10 (size_t) ;

__attribute__((used)) static size_t FUNC_11(frame_context_t *const VAR_1,
                                         istream_t *const VAR_2,
                                         u8 **const VAR_3,
                                         const int VAR_4,
                                         const int VAR_5) {
    size_t VAR_6, VAR_7;

    int VAR_8 = 4;
    switch (VAR_5) {
    case 0:


        VAR_8 = 1;


    case 1:


        VAR_6 = FUNC_8(VAR_2, 10);
        VAR_7 = FUNC_8(VAR_2, 10);
        break;
    case 2:


        VAR_6 = FUNC_8(VAR_2, 14);
        VAR_7 = FUNC_8(VAR_2, 14);
        break;
    case 3:


        VAR_6 = FUNC_8(VAR_2, 18);
        VAR_7 = FUNC_8(VAR_2, 18);
        break;
    default:

        FUNC_5();
    }
    if (VAR_6 > VAR_0) {
        FUNC_1();
    }

    *VAR_3 = FUNC_10(VAR_6);
    if (!*VAR_3) {
        FUNC_0();
    }

    ostream_t VAR_9 = FUNC_6(*VAR_3, VAR_6);
    istream_t VAR_10 = FUNC_7(VAR_2, VAR_7);

    if (VAR_4 == 2) {




        FUNC_4(&VAR_1->literals_dtable);
        FUNC_9(&VAR_1->literals_dtable, &VAR_10);
    } else {

        if (!VAR_1->literals_dtable.symbols) {
            FUNC_1();
        }
    }

    size_t VAR_11;
    if (VAR_8 == 1) {
        VAR_11 = FUNC_2(&VAR_1->literals_dtable, &VAR_9, &VAR_10);
    } else {
        VAR_11 = FUNC_3(&VAR_1->literals_dtable, &VAR_9, &VAR_10);
    }

    if (VAR_11 != VAR_6) {
        FUNC_1();
    }

    return VAR_6;
}

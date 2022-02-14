
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int (* print_cb ) (char const*,size_t,void*) ;scalar_t__ chunks; scalar_t__ bytes; void* print_cb_arg; } ;
typedef TYPE_1__ MEM_LEAK ;


 int FUNC_0 (char*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_10 (char*) ;

int FUNC_11(int (*VAR_10) (const char *VAR_11, size_t VAR_12, void *VAR_13),
                        void *VAR_14)
{
    MEM_LEAK VAR_15;


    FUNC_6();

    if (!FUNC_7(&VAR_5, VAR_3))
        return -1;

    FUNC_5(VAR_0);

    VAR_15.print_cb = VAR_10;
    VAR_15.print_cb_arg = VAR_14;
    VAR_15.bytes = 0;
    VAR_15.chunks = 0;
    if (VAR_7 != ((void*)0))
        FUNC_8(VAR_7, VAR_9, &VAR_15);

    if (VAR_15.chunks != 0) {
        char VAR_16[256];

        FUNC_0(VAR_16, sizeof(VAR_16), "%ld bytes leaked in %d chunks\n",
                     VAR_15.bytes, VAR_15.chunks);
        VAR_10(VAR_16, FUNC_10(VAR_16), VAR_14);
    } else {






        int VAR_17;

        FUNC_4(VAR_6);





        VAR_17 = VAR_8;
        VAR_8 = VAR_1;

        FUNC_9(VAR_7);
        VAR_7 = ((void*)0);

        VAR_8 = VAR_17;
        FUNC_3(VAR_6);
    }
    FUNC_5(VAR_1);


    FUNC_1(&VAR_2);
    FUNC_2(VAR_6);
    FUNC_2(VAR_4);
    VAR_6 = ((void*)0);
    VAR_4 = ((void*)0);

    return VAR_15.chunks == 0 ? 1 : 0;
}

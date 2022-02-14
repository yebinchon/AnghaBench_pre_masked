
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int ml_state; int ml_table; int of_state; int of_table; int ll_state; int ll_table; } ;
typedef TYPE_1__ sequence_states_t ;
typedef int sequence_command_t ;
typedef int istream_t ;
typedef scalar_t__ i64 ;
struct TYPE_6__ {int ml_dtable; int of_dtable; int ll_dtable; } ;
typedef TYPE_2__ frame_context_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int const* const,scalar_t__*) ;
 int* FUNC_2 (int *,size_t const) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int ,int) ;
 int FUNC_6 (TYPE_1__*,int const* const,scalar_t__*) ;
 int FUNC_7 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(frame_context_t *const VAR_3, istream_t *VAR_4,
                                 sequence_command_t *const VAR_5,
                                 const size_t VAR_6) {
    u8 VAR_7 = FUNC_4(VAR_4, 8);

    if ((VAR_7 & 3) != 0) {

        FUNC_0();
    }
    FUNC_5(&VAR_3->ll_dtable, VAR_4, VAR_0,
                     (VAR_7 >> 6) & 3);

    FUNC_5(&VAR_3->of_dtable, VAR_4, VAR_2,
                     (VAR_7 >> 4) & 3);

    FUNC_5(&VAR_3->ml_dtable, VAR_4, VAR_1,
                     (VAR_7 >> 2) & 3);


    sequence_states_t VAR_8;


    {
        VAR_8.ll_table = VAR_3->ll_dtable;
        VAR_8.of_table = VAR_3->of_dtable;
        VAR_8.ml_table = VAR_3->ml_dtable;
    }

    const size_t VAR_9 = FUNC_3(VAR_4);
    const u8 *const VAR_10 = FUNC_2(VAR_4, VAR_9);



    const int VAR_11 = 8 - FUNC_7(VAR_10[VAR_9 - 1]);

    i64 VAR_12 = (i64)(VAR_9 * 8 - (size_t)VAR_11);







    FUNC_1(&VAR_8.ll_table, &VAR_8.ll_state, VAR_10, &VAR_12);
    FUNC_1(&VAR_8.of_table, &VAR_8.of_state, VAR_10, &VAR_12);
    FUNC_1(&VAR_8.ml_table, &VAR_8.ml_state, VAR_10, &VAR_12);

    for (size_t VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {

        VAR_5[VAR_13] = FUNC_6(&VAR_8, VAR_10, &VAR_12);
    }

    if (VAR_12 != 0) {
        FUNC_0();
    }
}

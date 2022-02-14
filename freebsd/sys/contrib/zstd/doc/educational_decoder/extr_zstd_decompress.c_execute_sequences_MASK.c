
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {size_t literal_length; size_t match_length; } ;
typedef TYPE_1__ sequence_command_t ;
typedef int ostream_t ;
typedef int istream_t ;
struct TYPE_8__ {size_t current_total_output; int * previous_offsets; } ;
typedef TYPE_2__ frame_context_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int const* const,size_t const) ;
 size_t FUNC_2 (TYPE_1__ const,int * const) ;
 scalar_t__ FUNC_3 (size_t,int *,int * const) ;
 int FUNC_4 (TYPE_2__* const,size_t const,size_t const,size_t,int * const) ;

__attribute__((used)) static void FUNC_5(frame_context_t *const VAR_0, ostream_t *const VAR_1,
                              const u8 *const VAR_2,
                              const size_t VAR_3,
                              const sequence_command_t *const VAR_4,
                              const size_t VAR_5) {
    istream_t VAR_6 = FUNC_1(VAR_2, VAR_3);

    u64 *const VAR_7 = VAR_0->previous_offsets;
    size_t VAR_8 = VAR_0->current_total_output;

    for (size_t VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        const sequence_command_t VAR_10 = VAR_4[VAR_9];
        {
            const u32 VAR_11 = FUNC_3(VAR_10.literal_length, &VAR_6, VAR_1);
            VAR_8 += VAR_11;
        }

        size_t const VAR_12 = FUNC_2(VAR_10, VAR_7);

        size_t const VAR_13 = VAR_10.match_length;

        FUNC_4(VAR_0, VAR_12, VAR_13, VAR_8, VAR_1);

        VAR_8 += VAR_13;
    }


    {
        size_t VAR_14 = FUNC_0(&VAR_6);
        FUNC_3(VAR_14, &VAR_6, VAR_1);
        VAR_8 += VAR_14;
    }

    VAR_0->current_total_output = VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sequence_command_t ;
typedef int istream_t ;
typedef int frame_context_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int * const,int *,int *,size_t) ;
 int * FUNC_3 (size_t) ;

__attribute__((used)) static size_t FUNC_4(frame_context_t *const VAR_0, istream_t *VAR_1,
                               sequence_command_t **const VAR_2) {







    size_t VAR_3;





    u8 VAR_4 = FUNC_1(VAR_1, 8);
    if (VAR_4 == 0) {


        *VAR_2 = ((void*)0);
        return 0;
    } else if (VAR_4 < 128) {

        VAR_3 = VAR_4;
    } else if (VAR_4 < 255) {

        VAR_3 = ((VAR_4 - 128) << 8) + FUNC_1(VAR_1, 8);
    } else {

        VAR_3 = FUNC_1(VAR_1, 16) + 0x7F00;
    }

    *VAR_2 = FUNC_3(VAR_3 * sizeof(sequence_command_t));
    if (!*VAR_2) {
        FUNC_0();
    }

    FUNC_2(VAR_0, VAR_1, *VAR_2, VAR_3);
    return VAR_3;
}

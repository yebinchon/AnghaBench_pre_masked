
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int istream_t ;
struct TYPE_5__ {int* previous_offsets; int header; } ;
typedef TYPE_1__ frame_context_t ;
typedef int dictionary_t ;


 int FUNC_0 (TYPE_1__* const,int const* const) ;
 int FUNC_1 (TYPE_1__* const,int ,int) ;
 int FUNC_2 (int *,int * const) ;

__attribute__((used)) static void FUNC_3(frame_context_t *const VAR_0,
                               istream_t *const VAR_1,
                               const dictionary_t *const VAR_2) {

    FUNC_1(VAR_0, 0, sizeof(frame_context_t));


    FUNC_2(&VAR_0->header, VAR_1);


    VAR_0->previous_offsets[0] = 1;
    VAR_0->previous_offsets[1] = 4;
    VAR_0->previous_offsets[2] = 8;


    FUNC_0(VAR_0, VAR_2);
}

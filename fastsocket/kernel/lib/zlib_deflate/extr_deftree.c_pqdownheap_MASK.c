
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* heap; int heap_len; int depth; } ;
typedef TYPE_1__ deflate_state ;
typedef int ct_data ;


 scalar_t__ FUNC_0 (int *,int,int,int ) ;

__attribute__((used)) static void FUNC_1(
 deflate_state *VAR_0,
 ct_data *VAR_1,
 int VAR_2
)
{
    int VAR_3 = VAR_0->heap[VAR_2];
    int VAR_4 = VAR_2 << 1;
    while (VAR_4 <= VAR_0->heap_len) {

        if (VAR_4 < VAR_0->heap_len &&
            FUNC_0(VAR_1, VAR_0->heap[VAR_4+1], VAR_0->heap[VAR_4], VAR_0->depth)) {
            VAR_4++;
        }

        if (FUNC_0(VAR_1, VAR_3, VAR_0->heap[VAR_4], VAR_0->depth)) break;


        VAR_0->heap[VAR_2] = VAR_0->heap[VAR_4]; VAR_2 = VAR_4;


        VAR_4 <<= 1;
    }
    VAR_0->heap[VAR_2] = VAR_3;
}

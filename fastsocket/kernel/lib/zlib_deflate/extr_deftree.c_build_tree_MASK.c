
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ush ;
typedef scalar_t__ uch ;
struct TYPE_15__ {int max_code; TYPE_1__* stat_desc; TYPE_4__* dyn_tree; } ;
typedef TYPE_2__ tree_desc ;
struct TYPE_16__ {size_t heap_len; size_t heap_max; int* heap; int bl_count; TYPE_4__* bl_tree; scalar_t__* depth; int static_len; int opt_len; } ;
typedef TYPE_3__ deflate_state ;
struct TYPE_17__ {int Freq; scalar_t__ Dad; scalar_t__ Len; } ;
typedef TYPE_4__ ct_data ;
struct TYPE_14__ {int elems; TYPE_4__* static_tree; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,size_t) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(
 deflate_state *VAR_3,
 tree_desc *VAR_4
)
{
    ct_data *VAR_5 = VAR_4->dyn_tree;
    const ct_data *VAR_6 = VAR_4->stat_desc->static_tree;
    int VAR_7 = VAR_4->stat_desc->elems;
    int VAR_8, VAR_9;
    int VAR_10 = -1;
    int VAR_11;





    VAR_3->heap_len = 0, VAR_3->heap_max = VAR_0;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        if (VAR_5[VAR_8].Freq != 0) {
            VAR_3->heap[++(VAR_3->heap_len)] = VAR_10 = VAR_8;
            VAR_3->depth[VAR_8] = 0;
        } else {
            VAR_5[VAR_8].Len = 0;
        }
    }






    while (VAR_3->heap_len < 2) {
        VAR_11 = VAR_3->heap[++(VAR_3->heap_len)] = (VAR_10 < 2 ? ++VAR_10 : 0);
        VAR_5[VAR_11].Freq = 1;
        VAR_3->depth[VAR_11] = 0;
        VAR_3->opt_len--; if (VAR_6) VAR_3->static_len -= VAR_6[VAR_11].Len;

    }
    VAR_4->max_code = VAR_10;




    for (VAR_8 = VAR_3->heap_len/2; VAR_8 >= 1; VAR_8--) FUNC_4(VAR_3, VAR_5, VAR_8);




    VAR_11 = VAR_7;
    do {
        FUNC_5(VAR_3, VAR_5, VAR_8);
        VAR_9 = VAR_3->heap[VAR_1];

        VAR_3->heap[--(VAR_3->heap_max)] = VAR_8;
        VAR_3->heap[--(VAR_3->heap_max)] = VAR_9;


        VAR_5[VAR_11].Freq = VAR_5[VAR_8].Freq + VAR_5[VAR_9].Freq;
        VAR_3->depth[VAR_11] = (uch) (FUNC_3(VAR_3->depth[VAR_8], VAR_3->depth[VAR_9]) + 1);
        VAR_5[VAR_8].Dad = VAR_5[VAR_9].Dad = (ush)VAR_11;







        VAR_3->heap[VAR_1] = VAR_11++;
        FUNC_4(VAR_3, VAR_5, VAR_1);

    } while (VAR_3->heap_len >= 2);

    VAR_3->heap[--(VAR_3->heap_max)] = VAR_3->heap[VAR_1];




    FUNC_1(VAR_3, (tree_desc *)VAR_4);


    FUNC_2 ((ct_data *)VAR_5, VAR_10, VAR_3->bl_count);
}

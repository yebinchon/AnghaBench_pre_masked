
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int use_height; TYPE_1__* list; } ;
struct TYPE_7__ {int top_index; } ;
typedef TYPE_2__ ALL_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_5(ALL_DATA * VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->list[VAR_2].top_index;
    int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
    int VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_2);

    if (VAR_4 < VAR_5) {
 VAR_3 = VAR_1;
    } else if ((VAR_4 - VAR_5) >= VAR_0->use_height) {
 VAR_3 = FUNC_3(VAR_0, VAR_4 + 1 - VAR_0->use_height, VAR_2);
    }
    if (VAR_4 < VAR_0->use_height) {
 VAR_3 = FUNC_3(VAR_0, 0, VAR_2);
    }
    FUNC_0(("# fix_top_item(cur_item %d, %s) ->top_item %d\n",
        VAR_1, FUNC_2(VAR_2), VAR_3));
    FUNC_4(VAR_0, VAR_3, VAR_2);
}

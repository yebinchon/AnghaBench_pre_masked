
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulg ;
struct TYPE_5__ {int window_size; int w_size; size_t level; long block_start; scalar_t__ ins_h; scalar_t__ match_available; scalar_t__ prev_length; scalar_t__ match_length; scalar_t__ lookahead; scalar_t__ strstart; int max_chain_length; int nice_match; int good_match; int max_lazy_match; } ;
typedef TYPE_1__ deflate_state ;
struct TYPE_6__ {int max_chain; int nice_length; int good_length; int max_lazy; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_1(
 deflate_state *VAR_2
)
{
    VAR_2->window_size = (ulg)2L*VAR_2->w_size;

    FUNC_0(VAR_2);



    VAR_2->max_lazy_match = VAR_1[VAR_2->level].max_lazy;
    VAR_2->good_match = VAR_1[VAR_2->level].good_length;
    VAR_2->nice_match = VAR_1[VAR_2->level].nice_length;
    VAR_2->max_chain_length = VAR_1[VAR_2->level].max_chain;

    VAR_2->strstart = 0;
    VAR_2->block_start = 0L;
    VAR_2->lookahead = 0;
    VAR_2->match_length = VAR_2->prev_length = VAR_0-1;
    VAR_2->match_available = 0;
    VAR_2->ins_h = 0;
}

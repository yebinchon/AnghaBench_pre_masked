
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int ush ;
typedef int ulg ;
typedef int uch ;
struct internal_state {int dummy; } ;
struct TYPE_7__ {scalar_t__ overlay_memory; scalar_t__ head_memory; scalar_t__ prev_memory; scalar_t__ window_memory; int deflate_memory; } ;
typedef TYPE_2__ deflate_workspace ;
struct TYPE_8__ {int noheader; int w_bits; int w_size; int w_mask; int hash_bits; int hash_size; int hash_mask; int hash_shift; int lit_bufsize; int pending_buf_size; int level; int strategy; scalar_t__ method; int * pending_buf; int * l_buf; int * d_buf; int * head; int * prev; scalar_t__* window; TYPE_1__* strm; } ;
typedef TYPE_3__ deflate_state ;
struct TYPE_6__ {struct internal_state* state; scalar_t__ workspace; int * msg; } ;
typedef int Pos ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(
 z_streamp VAR_6,
 int VAR_7,
 int VAR_8,
 int VAR_9,
 int VAR_10,
 int VAR_11
)
{
    deflate_state *VAR_12;
    int VAR_13 = 0;
    deflate_workspace *VAR_14;

    ush *VAR_15;




    if (VAR_6 == ((void*)0)) return VAR_5;

    VAR_6->msg = ((void*)0);

    if (VAR_7 == VAR_2) VAR_7 = 6;

    VAR_14 = (deflate_workspace *) VAR_6->workspace;

    if (VAR_9 < 0) {
        VAR_13 = 1;
        VAR_9 = -VAR_9;
    }
    if (VAR_10 < 1 || VAR_10 > VAR_0 || VAR_8 != VAR_3 ||
        VAR_9 < 9 || VAR_9 > 15 || VAR_7 < 0 || VAR_7 > 9 ||
 VAR_11 < 0 || VAR_11 > VAR_4) {
        return VAR_5;
    }
    VAR_12 = (deflate_state *) &(VAR_14->deflate_memory);
    VAR_6->state = (struct internal_state *)VAR_12;
    VAR_12->strm = VAR_6;

    VAR_12->noheader = VAR_13;
    VAR_12->w_bits = VAR_9;
    VAR_12->w_size = 1 << VAR_12->w_bits;
    VAR_12->w_mask = VAR_12->w_size - 1;

    VAR_12->hash_bits = VAR_10 + 7;
    VAR_12->hash_size = 1 << VAR_12->hash_bits;
    VAR_12->hash_mask = VAR_12->hash_size - 1;
    VAR_12->hash_shift = ((VAR_12->hash_bits+VAR_1-1)/VAR_1);

    VAR_12->window = (Byte *) VAR_14->window_memory;
    VAR_12->prev = (Pos *) VAR_14->prev_memory;
    VAR_12->head = (Pos *) VAR_14->head_memory;

    VAR_12->lit_bufsize = 1 << (VAR_10 + 6);

    VAR_15 = (ush *) VAR_14->overlay_memory;
    VAR_12->pending_buf = (uch *) VAR_15;
    VAR_12->pending_buf_size = (ulg)VAR_12->lit_bufsize * (sizeof(ush)+2L);

    VAR_12->d_buf = VAR_15 + VAR_12->lit_bufsize/sizeof(ush);
    VAR_12->l_buf = VAR_12->pending_buf + (1+sizeof(ush))*VAR_12->lit_bufsize;

    VAR_12->level = VAR_7;
    VAR_12->strategy = VAR_11;
    VAR_12->method = (Byte)VAR_8;

    return FUNC_0(VAR_6);
}

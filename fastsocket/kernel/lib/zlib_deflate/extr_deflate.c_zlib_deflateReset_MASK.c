
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_7__ {scalar_t__ noheader; int last_flush; int status; int pending_buf; int pending_out; scalar_t__ pending; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_6__ {int adler; int * state; int data_type; int * msg; scalar_t__ total_out; scalar_t__ total_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(
 z_streamp VAR_6
)
{
    deflate_state *VAR_7;

    if (VAR_6 == ((void*)0) || VAR_6->state == ((void*)0))
        return VAR_4;

    VAR_6->total_in = VAR_6->total_out = 0;
    VAR_6->msg = ((void*)0);
    VAR_6->data_type = VAR_5;

    VAR_7 = (deflate_state *)VAR_6->state;
    VAR_7->pending = 0;
    VAR_7->pending_out = VAR_7->pending_buf;

    if (VAR_7->noheader < 0) {
        VAR_7->noheader = 0;
    }
    VAR_7->status = VAR_7->noheader ? VAR_0 : VAR_1;
    VAR_6->adler = 1;
    VAR_7->last_flush = VAR_2;

    FUNC_1(VAR_7);
    FUNC_0(VAR_7);

    return VAR_3;
}

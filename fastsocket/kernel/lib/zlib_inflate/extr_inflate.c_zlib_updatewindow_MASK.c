
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct inflate_state {unsigned int wsize; unsigned int write; unsigned int whave; scalar_t__ window; } ;
struct TYPE_3__ {unsigned int avail_out; scalar_t__ next_out; scalar_t__ state; } ;


 int FUNC_0 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_1(z_streamp VAR_0, unsigned VAR_1)
{
    struct inflate_state *VAR_2;
    unsigned VAR_3, VAR_4;

    VAR_2 = (struct inflate_state *)VAR_0->state;


    VAR_3 = VAR_1 - VAR_0->avail_out;
    if (VAR_3 >= VAR_2->wsize) {
        FUNC_0(VAR_2->window, VAR_0->next_out - VAR_2->wsize, VAR_2->wsize);
        VAR_2->write = 0;
        VAR_2->whave = VAR_2->wsize;
    }
    else {
        VAR_4 = VAR_2->wsize - VAR_2->write;
        if (VAR_4 > VAR_3) VAR_4 = VAR_3;
        FUNC_0(VAR_2->window + VAR_2->write, VAR_0->next_out - VAR_3, VAR_4);
        VAR_3 -= VAR_4;
        if (VAR_3) {
            FUNC_0(VAR_2->window, VAR_0->next_out - VAR_3, VAR_3);
            VAR_2->write = VAR_3;
            VAR_2->whave = VAR_2->wsize;
        }
        else {
            VAR_2->write += VAR_4;
            if (VAR_2->write == VAR_2->wsize) VAR_2->write = 0;
            if (VAR_2->whave < VAR_2->wsize) VAR_2->whave += VAR_4;
        }
    }
}

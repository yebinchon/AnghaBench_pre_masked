
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct inflate_state {unsigned int dmax; unsigned int wsize; unsigned int wbits; scalar_t__ whave; scalar_t__ write; int codes; int next; int distcode; int lencode; scalar_t__ bits; scalar_t__ hold; scalar_t__ havedict; scalar_t__ last; int mode; scalar_t__ total; } ;
struct TYPE_3__ {int adler; int * msg; scalar_t__ total_out; scalar_t__ total_in; int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(z_streamp VAR_3)
{
    struct inflate_state *VAR_4;

    if (VAR_3 == ((void*)0) || VAR_3->state == ((void*)0)) return VAR_2;
    VAR_4 = (struct inflate_state *)VAR_3->state;
    VAR_3->total_in = VAR_3->total_out = VAR_4->total = 0;
    VAR_3->msg = ((void*)0);
    VAR_3->adler = 1;
    VAR_4->mode = VAR_0;
    VAR_4->last = 0;
    VAR_4->havedict = 0;
    VAR_4->dmax = 32768U;
    VAR_4->hold = 0;
    VAR_4->bits = 0;
    VAR_4->lencode = VAR_4->distcode = VAR_4->next = VAR_4->codes;


    VAR_4->wsize = 1U << VAR_4->wbits;
    VAR_4->write = 0;
    VAR_4->whave = 0;

    return VAR_1;
}

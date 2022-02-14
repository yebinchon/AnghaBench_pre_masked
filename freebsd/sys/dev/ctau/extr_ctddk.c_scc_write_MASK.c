
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scctx_b; size_t scctx_e; unsigned char* scctx; scalar_t__ scctx_empty; } ;
typedef TYPE_1__ ct_chan_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;

int FUNC_1 (ct_chan_t *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;


 if (VAR_1->scctx_empty)
  VAR_5 = VAR_0;
 else
  VAR_5 = (VAR_0 + VAR_1->scctx_b - VAR_1->scctx_e) % VAR_0;

 if (VAR_3 > VAR_5)
  return -1;

 for (VAR_4=0; VAR_4<VAR_3; VAR_4++){
  VAR_1->scctx[VAR_1->scctx_e] = VAR_2[VAR_4];
  VAR_1->scctx_e = (VAR_1->scctx_e+1) % VAR_0;
 }
 if (VAR_1->scctx_empty && VAR_3) {
  FUNC_0 (VAR_1, VAR_1->scctx[VAR_1->scctx_b]);
  VAR_1->scctx_empty = 0;
 }
 return 0;
}

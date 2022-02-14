
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sccrx_empty; int sccrx_e; size_t sccrx_b; unsigned char* sccrx; } ;
typedef TYPE_1__ ct_chan_t ;


 int VAR_0 ;

int FUNC_0 (ct_chan_t *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_1->sccrx_empty)
  VAR_5 = 0;
 else
  VAR_5 = (VAR_0 + VAR_1->sccrx_e - 1 - VAR_1->sccrx_b) %
    VAR_0 + 1;
 if (VAR_3 > VAR_5)
  return -1;

 for (VAR_4=0; VAR_4<VAR_3; VAR_4++){
  VAR_2[VAR_4] = VAR_1->sccrx[VAR_1->sccrx_b];
  VAR_1->sccrx_b = (VAR_1->sccrx_b+1) % VAR_0;
 }
 if (VAR_1->sccrx_b==VAR_1->sccrx_e)
  VAR_1->sccrx_empty = 1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


union aux_ext {int a_rndx; int a_ti; } ;
struct TYPE_16__ {int (* swap_rndx_in ) (int ,int *,TYPE_3__*) ;int (* swap_tir_in ) (int ,int *,TYPE_1__*) ;} ;
struct TYPE_15__ {int iauxBase; int fBigendian; } ;
struct TYPE_14__ {int rfd; } ;
struct TYPE_13__ {scalar_t__ index; } ;
struct TYPE_12__ {scalar_t__ bt; } ;
struct TYPE_11__ {union aux_ext* external_aux; } ;
typedef TYPE_1__ TIR ;
typedef TYPE_2__ SYMR ;
typedef TYPE_3__ RNDXR ;
typedef TYPE_4__ FDR ;


 unsigned int FUNC_0 (int ,union aux_ext*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_10__* VAR_3 ;
 TYPE_9__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int *,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3 (FDR *VAR_6, SYMR *VAR_7)
{
  TIR VAR_8;
  union aux_ext *VAR_9;
  RNDXR VAR_10[1];
  unsigned int VAR_11;

  if (VAR_7->index == VAR_5)
    return 0;

  VAR_9 = VAR_3->external_aux + VAR_6->iauxBase + VAR_7->index;
  (*VAR_4->swap_tir_in) (VAR_6->fBigendian, &VAR_9->a_ti, &VAR_8);
  if (VAR_8.bt != VAR_1 && VAR_8.bt != VAR_2 && VAR_8.bt != VAR_0)
    return 0;

  VAR_9++;
  (*VAR_4->swap_rndx_in) (VAR_6->fBigendian, &VAR_9->a_rndx, VAR_10);
  if (VAR_10->rfd == 0xfff)
    VAR_11 = FUNC_0 (VAR_6->fBigendian, VAR_9 + 1);
  else
    VAR_11 = VAR_10->rfd;
  if (VAR_11 != -1)
    return 0;
  return 1;
}

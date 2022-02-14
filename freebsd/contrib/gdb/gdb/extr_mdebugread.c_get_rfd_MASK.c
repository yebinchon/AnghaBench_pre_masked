
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ external_rfd; TYPE_1__* fdr; } ;
struct TYPE_6__ {int external_rfd_size; int (* swap_rfd_in ) (int ,char*,int*) ;} ;
struct TYPE_5__ {int rfdBase; } ;
typedef int RFDT ;
typedef TYPE_1__ FDR ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,char*,int*) ;

__attribute__((used)) static FDR *
FUNC_1 (int VAR_3, int VAR_4)
{
  FDR *VAR_5;
  FDR *VAR_6;
  RFDT VAR_7;

  VAR_5 = VAR_1->fdr;
  VAR_6 = VAR_5 + VAR_3;

  if (VAR_6->rfdBase == 0)
    return VAR_5 + VAR_4;
  (*VAR_2->swap_rfd_in) (VAR_0,
         ((char *) VAR_1->external_rfd
          + ((VAR_6->rfdBase + VAR_4)
      * VAR_2->external_rfd_size)),
         &VAR_7);
  return VAR_5 + VAR_7;
}

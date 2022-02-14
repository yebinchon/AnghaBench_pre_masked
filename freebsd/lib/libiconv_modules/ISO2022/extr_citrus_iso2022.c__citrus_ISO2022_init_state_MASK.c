
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int gr; int singlegl; int singlegr; int flags; TYPE_1__* g; scalar_t__ gl; } ;
typedef TYPE_3__ _ISO2022State ;
struct TYPE_11__ {int flags; TYPE_2__* initg; } ;
typedef TYPE_4__ _ISO2022EncodingInfo ;
struct TYPE_9__ {int interm; scalar_t__ final; int type; } ;
struct TYPE_8__ {int interm; scalar_t__ final; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

__attribute__((used)) static __inline void

FUNC_1(_ISO2022EncodingInfo * __restrict VAR_2,
    _ISO2022State * __restrict VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->gl = 0;
 VAR_3->gr = (VAR_2->flags & VAR_0) ? 1 : -1;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  if (VAR_2->initg[VAR_4].final) {
   VAR_3->g[VAR_4].type = VAR_2->initg[VAR_4].type;
   VAR_3->g[VAR_4].final = VAR_2->initg[VAR_4].final;
   VAR_3->g[VAR_4].interm = VAR_2->initg[VAR_4].interm;
  }
 VAR_3->singlegl = VAR_3->singlegr = -1;
 VAR_3->flags |= VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int16_t ;
struct TYPE_6__ {int buffer_dmat; int * pFreeSRB; int sg_dmat; } ;
struct TYPE_5__ {size_t TagNumber; int dmamap; int * pNextSRB; int pSRBSGL; int sg_dmamap; } ;
typedef int SGentry ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(PACB VAR_5)
{
     u_int16_t VAR_6;
 PSRB VAR_7;
 int VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
         VAR_7 = (PSRB)&VAR_5->pFreeSRB[VAR_6];

  if (FUNC_2(VAR_5->sg_dmat, (void **)&VAR_7->pSRBSGL,
      VAR_0, &VAR_7->sg_dmamap) !=0 ) {
   return VAR_1;
  }
  FUNC_1(VAR_5->sg_dmat, VAR_7->sg_dmamap, VAR_7->pSRBSGL,
      VAR_2 * sizeof(SGentry),
      VAR_4, VAR_7, 0);
  if (VAR_6 != VAR_3 - 1) {



   VAR_7->pNextSRB = &VAR_5->pFreeSRB[VAR_6+1];
  } else {



   VAR_7->pNextSRB = ((void*)0);
  }
  VAR_7->TagNumber = VAR_6;




  if ((VAR_8 = FUNC_0(VAR_5->buffer_dmat, 0,
            &VAR_7->dmamap)) != 0)
   return (VAR_8);

 }
 return (0);
}

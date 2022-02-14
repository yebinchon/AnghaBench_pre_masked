
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rdma_flags; int roce_intr_count; int flags; int intr_count; int dev; int nwqs; scalar_t__ nrqs; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(POCE_SOFTC VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10, VAR_11;

 if (FUNC_2(VAR_5))
  VAR_9 = FUNC_0((VAR_5->nrqs - 1), VAR_5->nwqs);
 else
  VAR_9 = 1;

 VAR_10 = VAR_9;
 if (VAR_5->rdma_flags & VAR_2) {
   if (VAR_9 > 1) {
     VAR_10 += VAR_3;
     VAR_5->roce_intr_count = VAR_3;
   }
 }

        if (VAR_5->flags & VAR_0) {
  VAR_5->intr_count = VAR_9;
                VAR_11 = VAR_10;
  VAR_6 = FUNC_5(VAR_5->dev, &VAR_11);
  if (VAR_6 != 0) {
   VAR_7 = 1;
   FUNC_6(VAR_5->dev);
  } else {
    if (VAR_5->rdma_flags & VAR_2) {
      if (VAR_11 < VAR_10) {
        if (VAR_5->intr_count < (2 * VAR_3)) {
   VAR_5->roce_intr_count = (VAR_11 / 2);
        }
        VAR_5->intr_count = VAR_11 - VAR_5->roce_intr_count;
      }
    } else {
      VAR_5->intr_count = VAR_11;
    }
        VAR_5->flags |= VAR_1;
  }
 } else
  VAR_7 = 1;

 if (VAR_7)
  VAR_5->intr_count = 1;


 FUNC_7(VAR_5);

 if (VAR_7) {
  FUNC_1(VAR_5->dev, "Using legacy interrupt\n");
  VAR_6 = FUNC_3(VAR_5, VAR_8, VAR_4);
  if (VAR_6)
   goto error;
 } else {
  for (; VAR_8 < VAR_5->intr_count; VAR_8++) {
   VAR_6 = FUNC_3(VAR_5, VAR_8, VAR_4);
   if (VAR_6)
    goto error;
  }
 }

 return 0;
error:
 FUNC_4(VAR_5);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_hal_priv {int mh_bastreams; int mh_flags; scalar_t__ mh_FCSErrorCount; scalar_t__ mh_RxDuplicateFrames; scalar_t__ mh_RTSFailures; scalar_t__ mh_RTSSuccesses; TYPE_1__* mh_vaps; } ;
struct TYPE_2__ {int * mh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwl_hal_priv*) ;

__attribute__((used)) static int
FUNC_1(struct mwl_hal_priv *VAR_3)
{
 int VAR_4;


 VAR_3->mh_bastreams = (1<<VAR_1)-1;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->mh_vaps[VAR_4].mh = ((void*)0);



 VAR_3->mh_RTSSuccesses = 0;
 VAR_3->mh_RTSFailures = 0;
 VAR_3->mh_RxDuplicateFrames = 0;
 VAR_3->mh_FCSErrorCount = 0;





 if ((VAR_3->mh_flags & VAR_0) == 0)
  FUNC_0(VAR_3);
 return 0;
}

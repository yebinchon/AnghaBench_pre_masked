
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_hal {int mh_flags; int mh_caldata; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_hal*,int *) ;

__attribute__((used)) static int
FUNC_1(struct malo_hal *VAR_1)
{




 if ((VAR_1->mh_flags & VAR_0) == 0)
  FUNC_0(VAR_1, &VAR_1->mh_caldata);
 return 0;
}

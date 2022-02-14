
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {long percpu_drift_mark; } ;


 int VAR_0 ;
 int FUNC_0 (struct zone*,int,unsigned long,int,int,long) ;
 long FUNC_1 (struct zone*,int ) ;
 long FUNC_2 (struct zone*,int ) ;

bool FUNC_3(struct zone *VAR_1, int VAR_2, unsigned long VAR_3,
        int VAR_4, int VAR_5)
{
 long VAR_6 = FUNC_1(VAR_1, VAR_0);

 if (VAR_1->percpu_drift_mark && VAR_6 < VAR_1->percpu_drift_mark)
  VAR_6 = FUNC_2(VAR_1, VAR_0);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {scalar_t__ type; int dev; int pmu_disable_count; int entry; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pmu*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;

void FUNC_10(struct pmu *VAR_4)
{
 FUNC_5(&VAR_2);
 FUNC_4(&VAR_4->entry);
 FUNC_6(&VAR_2);





 FUNC_9(&VAR_3);
 FUNC_8();

 FUNC_1(VAR_4->pmu_disable_count);
 if (VAR_4->type >= VAR_0)
  FUNC_3(&VAR_1, VAR_4->type);
 FUNC_0(VAR_4->dev);
 FUNC_7(VAR_4->dev);
 FUNC_2(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int list; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rds_ib_device* FUNC_1 (struct ib_device*,int *) ;
 int FUNC_2 (struct ib_device*,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct rds_ib_device*) ;
 int FUNC_5 (struct rds_ib_device*) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ib_device *VAR_2)
{
 struct rds_ib_device *VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_0);
 if (!VAR_3)
  return;

 FUNC_5(VAR_3);


 FUNC_2(VAR_2, &VAR_0, ((void*)0));

 FUNC_0(&VAR_1);
 FUNC_3(&VAR_3->list);
 FUNC_7(&VAR_1);






 FUNC_6();
 FUNC_4(VAR_3);
 FUNC_4(VAR_3);
}

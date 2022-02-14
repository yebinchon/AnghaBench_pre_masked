
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int refcount; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rds_ib_device* FUNC_1 (struct ib_device*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;

struct rds_ib_device *FUNC_4(struct ib_device *VAR_1)
{
 struct rds_ib_device *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1, &VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_2->refcount);
 FUNC_3();
 return VAR_2;
}

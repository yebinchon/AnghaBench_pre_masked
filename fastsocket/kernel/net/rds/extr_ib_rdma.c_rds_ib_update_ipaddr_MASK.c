
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct rds_ib_device*,int ) ;
 int FUNC_1 (struct rds_ib_device*) ;
 struct rds_ib_device* FUNC_2 (int ) ;
 int FUNC_3 (struct rds_ib_device*,int ) ;

int FUNC_4(struct rds_ib_device *VAR_0, __be32 VAR_1)
{
 struct rds_ib_device *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_2, VAR_1);
  FUNC_1(VAR_2);
 }

 return FUNC_0(VAR_0, VAR_1);
}

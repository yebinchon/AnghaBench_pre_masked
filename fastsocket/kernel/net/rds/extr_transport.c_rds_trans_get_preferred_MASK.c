
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_transport {scalar_t__ (* laddr_check ) (int ) ;int t_owner; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct rds_transport VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 struct rds_transport** VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

struct rds_transport *FUNC_6(__be32 VAR_4)
{
 struct rds_transport *VAR_5 = ((void*)0);
 struct rds_transport *VAR_6;
 unsigned int VAR_7;

 if (FUNC_0(FUNC_2(VAR_4)))
  return &VAR_1;

 FUNC_1(&VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = VAR_3[VAR_7];

  if (VAR_6 && (VAR_6->laddr_check(VAR_4) == 0) &&
      (!VAR_6->t_owner || FUNC_4(VAR_6->t_owner))) {
   VAR_5 = VAR_6;
   break;
  }
 }
 FUNC_5(&VAR_2);

 return VAR_5;
}

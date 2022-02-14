
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rds_sock* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct rds_sock*) ;
 int FUNC_3 (struct rds_sock*) ;
 int FUNC_4 (char*,struct rds_sock*,int *,int ) ;
 int FUNC_5 (int ,int ) ;

struct rds_sock *FUNC_6(__be32 VAR_1, __be16 VAR_2)
{
 struct rds_sock *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, ((void*)0));

 if (VAR_3 && !FUNC_5(FUNC_2(VAR_3), VAR_0))
  FUNC_3(VAR_3);
 else
  VAR_3 = ((void*)0);

 FUNC_4("returning rs %p for %pI4:%u\n", VAR_3, &VAR_1,
  FUNC_0(VAR_2));
 return VAR_3;
}

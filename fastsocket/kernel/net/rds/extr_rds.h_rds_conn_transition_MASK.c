
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_state; } ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline int
FUNC_1(struct rds_connection *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_0(&VAR_0->c_state, VAR_1, VAR_2) == VAR_1;
}

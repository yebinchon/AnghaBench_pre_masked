
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_shm_reg {int dummy; } ;
struct umtx_key {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct umtx_shm_reg* FUNC_2 (struct umtx_key const*) ;
 int VAR_0 ;

__attribute__((used)) static struct umtx_shm_reg *
FUNC_3(const struct umtx_key *VAR_1)
{
 struct umtx_shm_reg *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(&VAR_0);
 return (VAR_2);
}

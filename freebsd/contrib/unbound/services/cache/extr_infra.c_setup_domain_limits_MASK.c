
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_cache {int domain_limits; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (struct infra_cache*,struct config_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct infra_cache* VAR_0, struct config_file* VAR_1)
{
 FUNC_1(&VAR_0->domain_limits);
 if(!FUNC_0(VAR_0, VAR_1)) {
  return 0;
 }
 FUNC_2(&VAR_0->domain_limits);
 return 1;
}

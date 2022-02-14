
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shrinker {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int free_dquots; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct shrinker *VAR_3, int VAR_4, gfp_t VAR_5)
{
 if (VAR_4) {
  FUNC_1(&VAR_0);
  FUNC_0(VAR_4);
  FUNC_2(&VAR_0);
 }
 return (VAR_1.free_dquots / 100) * VAR_2;
}

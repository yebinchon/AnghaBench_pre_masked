
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct shrinker *VAR_4, int VAR_5, gfp_t VAR_6)
{
 FUNC_0(VAR_2);
 int VAR_7;

 if ((VAR_6 & VAR_0) != VAR_0)
  return (VAR_5 == 0) ? 0 : -1;
 if (FUNC_1(&VAR_1))
  return 0;
 FUNC_4(&VAR_3);
 VAR_7 = FUNC_3(&VAR_2, VAR_5);
 FUNC_5(&VAR_3);
 FUNC_2(&VAR_2);
 return VAR_7;
}

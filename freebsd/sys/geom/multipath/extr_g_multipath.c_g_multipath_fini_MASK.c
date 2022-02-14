
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_class {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(struct g_class *VAR_5)
{
 if (VAR_3 == VAR_1) {
  FUNC_1(&VAR_4);
  VAR_3 = VAR_0;
  FUNC_3(&VAR_3);
  FUNC_0(&VAR_3, &VAR_4, VAR_2,
      "gmp:fini", 0);
  FUNC_2(&VAR_4);
 }
}

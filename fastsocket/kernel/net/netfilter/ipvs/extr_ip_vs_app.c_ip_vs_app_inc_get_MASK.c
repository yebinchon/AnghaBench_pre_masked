
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_app {int usecnt; int app; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ip_vs_app *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->usecnt);
 if (FUNC_3((VAR_1 = FUNC_2(VAR_0->app)) != 1))
  FUNC_0(&VAR_0->usecnt);
 return VAR_1;
}

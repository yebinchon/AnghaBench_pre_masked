
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int dummy; } ;
struct g_consumer {struct g_provider* provider; } ;
struct cdev {struct g_consumer* si_drv2; int * si_devsw; } ;


 int VAR_0 ;
 int FUNC_0 () ;

struct g_provider *
FUNC_1(struct cdev *VAR_1)
{
 struct g_consumer *VAR_2;

 FUNC_0();
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 if (VAR_1->si_devsw != &VAR_0)
  return (((void*)0));
 VAR_2 = VAR_1->si_drv2;
 return (VAR_2->provider);
}

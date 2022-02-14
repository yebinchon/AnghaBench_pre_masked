
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_name; } ;
struct tuntap_driver {TYPE_1__ cdevsw; } ;
struct ifnet {int if_dname; } ;


 int FUNC_0 (struct tuntap_driver*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct tuntap_driver* VAR_0 ;

__attribute__((used)) static struct tuntap_driver *
FUNC_2(const struct ifnet *VAR_1)
{
 struct tuntap_driver *VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  VAR_2 = &VAR_0[VAR_3];
  if (FUNC_1(VAR_1->if_dname, VAR_2->cdevsw.d_name) == 0)
   return (VAR_2);
 }

 return (((void*)0));
}

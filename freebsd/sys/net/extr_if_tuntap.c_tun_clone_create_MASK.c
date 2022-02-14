
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* d_name; } ;
struct tuntap_driver {TYPE_1__ cdevsw; int clones; int unrhdr; } ;
struct if_clone {int dummy; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,TYPE_1__*,int*,struct cdev**,int ) ;
 int FUNC_3 (char*,int ,char*,char*,int) ;
 int FUNC_4 (struct tuntap_driver*,int,int *,struct cdev**,char*) ;
 int FUNC_5 (struct cdev*) ;
 struct tuntap_driver* FUNC_6 (int) ;
 int FUNC_7 (char*,int*,int*) ;

__attribute__((used)) static int
FUNC_8(struct if_clone *VAR_3, char *VAR_4, size_t VAR_5, caddr_t VAR_6)
{
 struct tuntap_driver *VAR_7;
 struct cdev *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_11 = 0;

 VAR_9 = FUNC_7(VAR_4, &VAR_12, &VAR_11);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_7 = FUNC_6(VAR_11);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 if (VAR_12 != -1) {

  if (FUNC_1(VAR_7->unrhdr, VAR_12) == -1)
   return (VAR_0);
 } else {
  VAR_12 = FUNC_0(VAR_7->unrhdr);
 }

 FUNC_3(VAR_4, VAR_2, "%s%d", VAR_7->cdevsw.d_name, VAR_12);


 VAR_8 = ((void*)0);
 VAR_10 = FUNC_2(&VAR_7->clones, &VAR_7->cdevsw, &VAR_12, &VAR_8, 0);

 if (VAR_10 != 0)
  VAR_10 = FUNC_4(VAR_7, VAR_12, ((void*)0), &VAR_8, VAR_4);
 if (VAR_10 == 0)
  FUNC_5(VAR_8);

 return (VAR_10);
}

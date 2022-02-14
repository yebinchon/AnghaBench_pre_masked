
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_driver {int unrhdr; int clones; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ,int) ;
 int VAR_2 ;


 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct tuntap_driver*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tuntap_driver* VAR_11 ;

__attribute__((used)) static int
FUNC_5(module_t VAR_12, int VAR_13, void *VAR_14)
{
 struct tuntap_driver *VAR_15;
 int VAR_16;

 switch (VAR_13) {
 case 129:
  FUNC_2(&VAR_9, "tunmtx", ((void*)0), VAR_3);
  for (VAR_16 = 0; VAR_16 < FUNC_4(VAR_11); ++VAR_16) {
   VAR_15 = &VAR_11[VAR_16];
   FUNC_1(&VAR_15->clones);
   VAR_15->unrhdr = FUNC_3(0, VAR_2, &VAR_9);
  }
  VAR_4 = FUNC_0(VAR_7,
     VAR_10, 0, 1000);
  if (VAR_4 == ((void*)0))
   return (VAR_0);
  VAR_5 = FUNC_0(VAR_6, VAR_8, 0, 1000);
  if (VAR_5 == ((void*)0))
   return (VAR_0);
  break;
 case 128:

  break;
 default:
  return VAR_1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int * device_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,struct resource*,int,int *,int *,void*,void**) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1, struct resource *VAR_2,
    int VAR_3, driver_filter_t *VAR_4, driver_intr_t *VAR_5, void *VAR_6,
    void **VAR_7)
{
 device_t VAR_8, VAR_9;
 int VAR_10;


 VAR_8 = VAR_1;
 while ((VAR_9 = FUNC_4(VAR_8)) != ((void*)0)) {
  if (VAR_9 == VAR_0)
   break;

  VAR_8 = VAR_9;
 }

 FUNC_1(VAR_8 != ((void*)0), ("%s is not a child of %s",
     FUNC_3(VAR_1), FUNC_3(VAR_0)));


 VAR_10 = FUNC_0(FUNC_4(VAR_0), VAR_8);
 if (VAR_10)
  return (VAR_10);



 return (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7));
}

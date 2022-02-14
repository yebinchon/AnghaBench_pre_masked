
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int register_t ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,void*,int,int,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct resource*,int *,int *,void*,int,void**) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, device_t VAR_2, struct resource *VAR_3, int VAR_4,
    driver_filter_t *VAR_5, driver_intr_t *VAR_6, void *VAR_7, void **VAR_8)
{



 int VAR_9;
 register_t VAR_10;

 VAR_10 = FUNC_2();
 VAR_9 = FUNC_5(VAR_3);
 if (VAR_9 >= VAR_0) {
  FUNC_3(VAR_10);
  return (0);
 }

 FUNC_0(FUNC_1(VAR_2), VAR_5, VAR_6, VAR_7,
     VAR_9, VAR_4, VAR_8);
 FUNC_3(VAR_10);

 return (0);

}

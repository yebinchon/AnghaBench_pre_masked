
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int register_t ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int FUNC_0 (int ,int *,int *,void*,int,int,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1, struct resource *VAR_2, int VAR_3,
    driver_filter_t *VAR_4, driver_intr_t *VAR_5, void *VAR_6, void **VAR_7)
{
 register_t VAR_8;
 int VAR_9;


 VAR_8 = FUNC_2();
 VAR_9 = FUNC_4(VAR_2);
 FUNC_0(FUNC_1(VAR_1), VAR_4, VAR_5, VAR_6,
     VAR_9, VAR_3, VAR_7);
 FUNC_3(VAR_8);
 return (0);
}

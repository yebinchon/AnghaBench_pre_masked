
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct ppb_device {void (* intr_hook ) (void*) ;void* intr_arg; } ;
struct ppb_data {int ppc_lock; struct resource* ppc_irq_res; } ;
typedef int driver_filter_t ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 int VAR_0 ;
 struct ppb_device* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, struct resource *VAR_3, int VAR_4,
    driver_filter_t *VAR_5, void (*VAR_6)(void *), void *VAR_7, void **VAR_8)
{
 struct ppb_device *VAR_9 = FUNC_1(VAR_2);
 struct ppb_data *VAR_10 = FUNC_0(VAR_1);


 if (VAR_5 != ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_0);


 if (VAR_10->ppc_irq_res != VAR_3)
  return (VAR_0);

 FUNC_2(VAR_10->ppc_lock);
 VAR_9->intr_hook = VAR_6;
 VAR_9->intr_arg = VAR_7;
 *VAR_8 = VAR_9;
 FUNC_3(VAR_10->ppc_lock);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int flags; } ;
struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct resource*,int,int *,int ,void*,void**) ;
 struct snddev_info* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_3, struct resource *VAR_4, int VAR_5, driver_intr_t VAR_6, void *VAR_7, void **VAR_8)
{
 struct snddev_info *VAR_9;

 VAR_5 &= VAR_0;
 VAR_5 |= VAR_1;
 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9 != ((void*)0) && (VAR_5 & VAR_0))
  VAR_9->flags |= VAR_2;

 return FUNC_0(VAR_3, VAR_4, VAR_5, ((void*)0), VAR_6, VAR_7, VAR_8);
}

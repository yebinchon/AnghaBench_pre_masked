
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pcir_lock; int * pcir; } ;


 scalar_t__ FUNC_0 (struct drm_device*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int ) ;

unsigned long FUNC_4(struct drm_device *VAR_0,
         unsigned int VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->pcir_lock);

 if (FUNC_0(VAR_0, VAR_1) != 0)
  return 0;

 VAR_2 = FUNC_3(VAR_0->pcir[VAR_1]);

 FUNC_2(&VAR_0->pcir_lock);

 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct drm_property {void** values; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_property* FUNC_0 (struct drm_device*,int,char const*,int) ;

struct drm_property *FUNC_1(struct drm_device *VAR_1, int VAR_2,
      const char *VAR_3,
      uint64_t VAR_4, uint64_t VAR_5)
{
 struct drm_property *VAR_6;

 VAR_2 |= VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, 2);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->values[0] = VAR_4;
 VAR_6->values[1] = VAR_5;

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_ptr_match_arg {void* ptr; int res; } ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0, void *VAR_1, void *VAR_2)
{
 struct drm_gem_ptr_match_arg *VAR_3;

 VAR_3 = VAR_2;
 if (VAR_1 == VAR_3->ptr) {
  VAR_3->res = VAR_0;
  return (1);
 } else
  return (0);
}

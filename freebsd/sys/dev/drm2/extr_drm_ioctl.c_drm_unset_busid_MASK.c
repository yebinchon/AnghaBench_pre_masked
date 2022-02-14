
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {scalar_t__ unique_size; scalar_t__ unique_len; int * unique; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_1,
  struct drm_master *VAR_2)
{

 FUNC_0(VAR_2->unique, VAR_0);
 VAR_2->unique = ((void*)0);
 VAR_2->unique_len = 0;
 VAR_2->unique_size = 0;
}

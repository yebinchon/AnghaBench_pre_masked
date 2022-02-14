
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct drm_device {int * _vblank_time; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->_vblank_time[VAR_2 * VAR_0], 0,
  VAR_0 * sizeof(struct timeval));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int dummy; } ;
struct drm_mm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mm_node*,struct drm_mm_node*,unsigned long,unsigned int,unsigned long) ;
 struct drm_mm_node* FUNC_1 (struct drm_mm*,unsigned long,unsigned int,unsigned long,int ) ;

int FUNC_2(struct drm_mm *VAR_1, struct drm_mm_node *VAR_2,
          unsigned long VAR_3, unsigned VAR_4,
          unsigned long VAR_5)
{
 struct drm_mm_node *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4,
            VAR_5, 0);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 return 0;
}

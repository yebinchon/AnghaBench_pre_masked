
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int dummy; } ;
struct drm_mm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mm_node*,struct drm_mm_node*,unsigned long,unsigned int,unsigned long,unsigned long,unsigned long) ;
 struct drm_mm_node* FUNC_1 (struct drm_mm*,unsigned long,unsigned int,unsigned long,unsigned long,unsigned long,int ) ;

int FUNC_2(struct drm_mm *VAR_1, struct drm_mm_node *VAR_2,
     unsigned long VAR_3, unsigned VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, unsigned long VAR_7)
{
 struct drm_mm_node *VAR_8;

 VAR_8 = FUNC_1(VAR_1,
       VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7, 0);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(VAR_8, VAR_2,
       VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7);
 return 0;
}

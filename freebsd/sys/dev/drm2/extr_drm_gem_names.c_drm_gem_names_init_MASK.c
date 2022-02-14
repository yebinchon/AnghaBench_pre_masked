
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_names {int lock; int hash_mask; int names_hash; int unr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int,int ,int *) ;

void
FUNC_3(struct drm_gem_names *VAR_3)
{

 VAR_3->unr = FUNC_2(1, VAR_0, ((void*)0));
 VAR_3->names_hash = FUNC_0(1000 , VAR_2,
     &VAR_3->hash_mask);
 FUNC_1(&VAR_3->lock, "drmnames", ((void*)0), VAR_1);
}

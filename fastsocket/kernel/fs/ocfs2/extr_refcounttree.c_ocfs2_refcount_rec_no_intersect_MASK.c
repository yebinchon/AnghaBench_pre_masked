
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_rec {int r_clusters; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_refcount_rec*) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_refcount_rec *VAR_0,
        struct ocfs2_refcount_rec *VAR_1)
{
 if (FUNC_1(VAR_0) + FUNC_0(VAR_0->r_clusters) <=
  FUNC_1(VAR_1))
  return 1;

 return 0;
}

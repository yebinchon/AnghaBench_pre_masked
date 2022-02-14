
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vectx {scalar_t__ vec_hashsz; int vec_status; int vec_want; int vec_path; int vec_md; int vec_ctx; } ;


 int FUNC_0 (struct vectx*) ;
 int FUNC_1 (int *,int ,int ,int ,scalar_t__) ;

int
FUNC_2(struct vectx *VAR_0)
{
 int VAR_1;

 if (VAR_0->vec_hashsz == 0) {
  VAR_1 = VAR_0->vec_status;
 } else {
  VAR_1 = FUNC_1(&VAR_0->vec_ctx, VAR_0->vec_md,
      VAR_0->vec_path, VAR_0->vec_want, VAR_0->vec_hashsz);
 }
 FUNC_0(VAR_0);
 return ((VAR_1 < 0) ? VAR_1 : 0);
}

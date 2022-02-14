
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_font {struct vt_font* vf_bytes; struct vt_font** vf_map; int vf_refcount; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct vt_font*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct vt_font *VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_1(&VAR_2->vf_refcount)) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_0(VAR_2->vf_map[VAR_3], VAR_0);
  FUNC_0(VAR_2->vf_bytes, VAR_0);
  FUNC_0(VAR_2, VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vtable; } ;
struct vectx {scalar_t__ vec_hashsz; int vec_off; TYPE_2__ vec_ctx; TYPE_1__* vec_md; int vec_fd; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* update ) (int *,unsigned char*,int) ;} ;


 int FUNC_0 (int ,unsigned char*,size_t) ;
 int FUNC_1 (int *,unsigned char*,int) ;

ssize_t
FUNC_2(struct vectx *VAR_0, void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3 = VAR_1;
 int VAR_4;
 size_t VAR_5;

 if (VAR_0->vec_hashsz == 0)
  return (FUNC_0(VAR_0->vec_fd, VAR_1, VAR_2));

 VAR_5 = 0;
 do {
  VAR_4 = FUNC_0(VAR_0->vec_fd, &VAR_3[VAR_5], VAR_2 - VAR_5);
  if (VAR_4 < 0)
   return (VAR_4);
  if (VAR_4 > 0) {
   VAR_0->vec_md->update(&VAR_0->vec_ctx.vtable, &VAR_3[VAR_5], VAR_4);
   VAR_5 += VAR_4;
   VAR_0->vec_off += VAR_4;
  }
 } while (VAR_4 > 0 && VAR_5 < VAR_2);
 return (VAR_5);
}

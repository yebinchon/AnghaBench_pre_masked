
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; } ;
struct mtx {int dummy; } ;
struct file {TYPE_1__* f_advice; TYPE_2__* f_vnode; } ;
struct TYPE_4__ {scalar_t__ v_type; } ;
struct TYPE_3__ {scalar_t__ fa_start; scalar_t__ fa_end; int fa_advice; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtx*) ;
 struct mtx* FUNC_1 (int ,struct file*) ;
 int FUNC_2 (struct mtx*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_3, struct uio *VAR_4)
{
 struct mtx *VAR_5;
 int VAR_6;

 VAR_6 = VAR_0;
 if (VAR_3->f_advice == ((void*)0) || VAR_3->f_vnode->v_type != VAR_1)
  return (VAR_6);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_5);
 if (VAR_3->f_advice != ((void*)0) &&
     VAR_4->uio_offset >= VAR_3->f_advice->fa_start &&
     VAR_4->uio_offset + VAR_4->uio_resid <= VAR_3->f_advice->fa_end)
  VAR_6 = VAR_3->f_advice->fa_advice;
 FUNC_2(VAR_5);
 return (VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
struct vnode {TYPE_2__* v_mount; int * v_object; int v_bufobj; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_3__ {scalar_t__ f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct vnode * VAR_2, daddr_t VAR_3)
{
 vm_object_t VAR_4;
 vm_offset_t VAR_5, VAR_6, VAR_7;
 vm_page_t VAR_8;
 vm_ooffset_t VAR_9;

 FUNC_0(VAR_2, "inmem");

 if (FUNC_4(&VAR_2->v_bufobj, VAR_3))
  return 1;
 if (VAR_2->v_mount == ((void*)0))
  return 0;
 VAR_4 = VAR_2->v_object;
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_7 = VAR_1;
 if (VAR_7 > VAR_2->v_mount->mnt_stat.f_iosize)
  VAR_7 = VAR_2->v_mount->mnt_stat.f_iosize;
 VAR_9 = (vm_ooffset_t)VAR_3 * (vm_ooffset_t)VAR_2->v_mount->mnt_stat.f_iosize;

 FUNC_2(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2->v_mount->mnt_stat.f_iosize; VAR_5 += VAR_6) {
  VAR_8 = FUNC_6(VAR_4, FUNC_1(VAR_9 + VAR_5));
  if (!VAR_8)
   goto notinmem;
  VAR_6 = VAR_7;
  if (VAR_6 > VAR_1 - ((VAR_5 + VAR_9) & VAR_0))
   VAR_6 = VAR_1 - ((VAR_5 + VAR_9) & VAR_0);
  if (FUNC_5(VAR_8,
      (vm_offset_t) ((VAR_5 + VAR_9) & VAR_0), VAR_6) == 0)
   goto notinmem;
 }
 FUNC_3(VAR_4);
 return 1;

notinmem:
 FUNC_3(VAR_4);
 return (0);
}

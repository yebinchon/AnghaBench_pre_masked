
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vmspace ;
typedef int vmentry ;
typedef int * vm_object_t ;
typedef TYPE_5__* vm_map_t ;
typedef int * vm_map_entry_t ;
typedef void vnode ;
struct TYPE_9__ {int * vm_object; } ;
struct TYPE_6__ {int * next; } ;
struct TYPE_10__ {TYPE_1__ header; } ;
struct vmspace {void* fd_rdir; void* fd_cdir; void* fd_jdir; int fd_lastfile; int f_type; int eflags; scalar_t__ type; int protection; void* handle; int * backing_object; TYPE_4__ object; int * next; TYPE_5__ vm_map; int f_flag; void* f_data; void* f_vnode; scalar_t__ fd_ofiles; } ;
struct vm_object {void* fd_rdir; void* fd_cdir; void* fd_jdir; int fd_lastfile; int f_type; int eflags; scalar_t__ type; int protection; void* handle; int * backing_object; TYPE_4__ object; int * next; TYPE_5__ vm_map; int f_flag; void* f_data; void* f_vnode; scalar_t__ fd_ofiles; } ;
struct vm_map_entry {void* fd_rdir; void* fd_cdir; void* fd_jdir; int fd_lastfile; int f_type; int eflags; scalar_t__ type; int protection; void* handle; int * backing_object; TYPE_4__ object; int * next; TYPE_5__ vm_map; int f_flag; void* f_data; void* f_vnode; scalar_t__ fd_ofiles; } ;
struct procstat {int * kd; } ;
struct kinfo_proc {void* ki_tracep; void* ki_textvp; TYPE_3__* ki_vmspace; int * ki_fd; } ;
struct filestat_list {int dummy; } ;
struct filestat {int dummy; } ;
struct filedesc {void* fd_rdir; void* fd_cdir; void* fd_jdir; int fd_lastfile; int f_type; int eflags; scalar_t__ type; int protection; void* handle; int * backing_object; TYPE_4__ object; int * next; TYPE_5__ vm_map; int f_flag; void* f_data; void* f_vnode; scalar_t__ fd_ofiles; } ;
struct file {void* fd_rdir; void* fd_cdir; void* fd_jdir; int fd_lastfile; int f_type; int eflags; scalar_t__ type; int protection; void* handle; int * backing_object; TYPE_4__ object; int * next; TYPE_5__ vm_map; int f_flag; void* f_data; void* f_vnode; scalar_t__ fd_ofiles; } ;
typedef int object ;
typedef int kvm_t ;
typedef int filed ;
struct TYPE_7__ {int header; } ;
struct TYPE_8__ {TYPE_2__ vm_map; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct filestat_list*) ;
 int FUNC_1 (struct filestat_list*,struct filestat*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (struct procstat*) ;
 struct filestat* FUNC_3 (void*,int,int,int,int ,int ,int ,int *,int *) ;
 int FUNC_4 (struct vmspace**) ;
 void* FUNC_5 (int *,struct kinfo_proc*) ;
 int FUNC_6 (int *,unsigned long,...) ;
 void* FUNC_7 (unsigned int) ;
 int VAR_23 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,unsigned int) ;
 int FUNC_10 (char*,void*,...) ;

__attribute__((used)) static struct filestat_list *
FUNC_11(struct procstat *VAR_24, struct kinfo_proc *VAR_25, int VAR_26)
{
 struct file VAR_27;
 struct filedesc VAR_28;
 struct vm_map_entry VAR_29;
 struct vm_object VAR_30;
 struct vmspace VAR_31;
 vm_map_entry_t VAR_32;
 vm_map_t VAR_33;
 vm_object_t VAR_34;
 struct vnode *VAR_35;
 struct file **VAR_36;
 struct filestat *VAR_37;
 struct filestat_list *VAR_38;
 kvm_t *VAR_39;
 void *VAR_40;
 int VAR_41, VAR_42;
 int VAR_43, VAR_44;
 unsigned int VAR_45;

 FUNC_2(VAR_24);
 VAR_39 = VAR_24->kd;
 if (VAR_39 == ((void*)0))
  return (((void*)0));
 if (VAR_25->ki_fd == ((void*)0))
  return (((void*)0));
 if (!FUNC_6(VAR_39, (unsigned long)VAR_25->ki_fd, &VAR_28,
     sizeof(VAR_28))) {
  FUNC_10("can't read filedesc at %p", (void *)VAR_25->ki_fd);
  return (((void*)0));
 }




 VAR_38 = FUNC_7(sizeof(*VAR_38));
 if (VAR_38 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_38);


 if (VAR_28.fd_rdir) {
  VAR_37 = FUNC_3(VAR_28.fd_rdir, VAR_13, -1,
      VAR_3, VAR_18, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }

 if (VAR_28.fd_cdir) {
  VAR_37 = FUNC_3(VAR_28.fd_cdir, VAR_13, -1,
      VAR_3, VAR_14, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }

 if (VAR_28.fd_jdir) {
  VAR_37 = FUNC_3(VAR_28.fd_jdir, VAR_13, -1,
      VAR_3, VAR_16, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }

 if (VAR_25->ki_tracep) {
  VAR_37 = FUNC_3(VAR_25->ki_tracep, VAR_13, -1,
      VAR_3 | VAR_4,
      VAR_20, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }

 if (VAR_25->ki_textvp) {
  VAR_37 = FUNC_3(VAR_25->ki_textvp, VAR_13, -1,
      VAR_3, VAR_19, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }

 if ((VAR_35 = FUNC_5(VAR_39, VAR_25)) != ((void*)0)) {
  VAR_37 = FUNC_3(VAR_35, VAR_13, -1,
      VAR_3 | VAR_4,
      VAR_15, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }

 VAR_45 = VAR_28.fd_lastfile + 1;
 VAR_36 = FUNC_7(VAR_45 * sizeof(struct file *));
 if (VAR_36 == ((void*)0)) {
  FUNC_9("malloc(%zu)", VAR_45 * sizeof(struct file *));
  goto do_mmapped;
 }
 if (!FUNC_6(VAR_39, (unsigned long)VAR_28.fd_ofiles, VAR_36,
     VAR_45 * sizeof(struct file *))) {
  FUNC_10("cannot read file structures at %p",
      (void *)VAR_28.fd_ofiles);
  FUNC_4(VAR_36);
  goto do_mmapped;
 }
 for (VAR_41 = 0; VAR_41 <= VAR_28.fd_lastfile; VAR_41++) {
  if (VAR_36[VAR_41] == ((void*)0))
   continue;
  if (!FUNC_6(VAR_39, (unsigned long)VAR_36[VAR_41], &VAR_27,
      sizeof(struct file))) {
   FUNC_10("can't read file %d at %p", VAR_41,
       (void *)VAR_36[VAR_41]);
   continue;
  }
  switch (VAR_27.f_type) {
  case 128:
   VAR_44 = VAR_13;
   VAR_40 = VAR_27.f_vnode;
   break;
  case 129:
   VAR_44 = VAR_12;
   VAR_40 = VAR_27.f_data;
   break;
  case 134:
   VAR_44 = VAR_7;
   VAR_40 = VAR_27.f_data;
   break;
  case 135:
   VAR_44 = VAR_6;
   VAR_40 = VAR_27.f_vnode;
   break;

  case 132:
   VAR_44 = VAR_9;
   VAR_40 = VAR_27.f_data;
   break;

  case 131:
   VAR_44 = VAR_10;
   VAR_40 = VAR_27.f_data;
   break;
  case 130:
   VAR_44 = VAR_11;
   VAR_40 = VAR_27.f_data;
   break;
  case 133:
   VAR_44 = VAR_8;
   VAR_40 = VAR_27.f_data;
   break;
  case 136:
   VAR_44 = VAR_5;
   VAR_40 = VAR_27.f_data;
   break;
  default:
   continue;
  }

  VAR_37 = FUNC_3(VAR_40, VAR_44, VAR_41,
      FUNC_8(VAR_27.f_flag), 0, 0, 0, ((void*)0), ((void*)0));
  if (VAR_37 != ((void*)0))
   FUNC_1(VAR_38, VAR_37, VAR_23);
 }
 FUNC_4(VAR_36);

do_mmapped:




 if (VAR_26) {
  if (!FUNC_6(VAR_39, (unsigned long)VAR_25->ki_vmspace, &VAR_31,
      sizeof(VAR_31))) {
   FUNC_10("can't read vmspace at %p",
       (void *)VAR_25->ki_vmspace);
   goto exit;
  }
  VAR_33 = &VAR_31.vm_map;

  for (VAR_32 = VAR_33->header.next;
      VAR_32 != &VAR_25->ki_vmspace->vm_map.header;
      VAR_32 = VAR_29.next) {
   if (!FUNC_6(VAR_39, (unsigned long)VAR_32, &VAR_29,
       sizeof(VAR_29))) {
    FUNC_10("can't read vm_map_entry at %p",
        (void *)VAR_32);
    continue;
   }
   if (VAR_29.eflags & VAR_1)
    continue;
   if ((VAR_34 = VAR_29.object.vm_object) == ((void*)0))
    continue;
   for (; VAR_34; VAR_34 = VAR_30.backing_object) {
    if (!FUNC_6(VAR_39, (unsigned long)VAR_34,
        &VAR_30, sizeof(VAR_30))) {
     FUNC_10("can't read vm_object at %p",
         (void *)VAR_34);
     break;
    }
   }


   if (VAR_30.type != VAR_2)
    continue;

   VAR_43 = VAR_29.protection;
   VAR_42 = 0;
   if (VAR_43 & VAR_21)
    VAR_42 = VAR_3;
   if ((VAR_29.eflags & VAR_0) == 0 &&
       VAR_43 & VAR_22)
    VAR_42 |= VAR_4;




   VAR_37 = FUNC_3(VAR_30.handle,
       VAR_13, -1, VAR_42,
       VAR_17, 0, 0, ((void*)0), ((void*)0));
   if (VAR_37 != ((void*)0))
    FUNC_1(VAR_38, VAR_37, VAR_23);
  }
 }
exit:
 return (VAR_38);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {size_t* td_retval; } ;
struct file {size_t f_offset; int f_flag; int f_cred; struct vnode* f_vnode; } ;
typedef size_t off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct thread*,int,int *,struct file**) ;
 int FUNC_2 (struct thread*,int,int *,struct file**) ;
 int FUNC_3 (struct vnode*,size_t*,struct vnode*,size_t*,size_t*,unsigned int,int ,int ,struct thread*) ;
 void* FUNC_4 (struct vnode*,size_t,size_t) ;
 void* FUNC_5 (struct vnode*,size_t,size_t) ;
 int FUNC_6 (struct vnode*,void*) ;
 void* FUNC_7 (struct vnode*,size_t,size_t) ;

int
FUNC_8(struct thread *VAR_10, int VAR_11, off_t *VAR_12, int VAR_13,
    off_t *VAR_14, size_t VAR_15, unsigned int VAR_16)
{
 struct file *VAR_17, *VAR_18;
 struct vnode *VAR_19, *VAR_20;
 int VAR_21;
 size_t VAR_22;
 void *VAR_23, *VAR_24;
 off_t VAR_25, VAR_26;

 VAR_17 = VAR_18 = ((void*)0);
 VAR_23 = VAR_24 = ((void*)0);
 VAR_25 = -1;
 VAR_21 = 0;
 VAR_22 = 0;

 if (VAR_16 != 0) {
  VAR_21 = VAR_2;
  goto out;
 }
 if (VAR_15 > VAR_7)





  VAR_15 = VAR_7;


 VAR_21 = FUNC_1(VAR_10, VAR_11, &VAR_8, &VAR_17);
 if (VAR_21 != 0)
  goto out;
 VAR_21 = FUNC_2(VAR_10, VAR_13, &VAR_9, &VAR_18);
 if (VAR_21 != 0)
  goto out;


 if (VAR_12 == ((void*)0))
  VAR_12 = &VAR_17->f_offset;
 if (VAR_14 == ((void*)0))
  VAR_14 = &VAR_18->f_offset;
 VAR_25 = *VAR_12;
 VAR_26 = *VAR_14;

 VAR_19 = VAR_17->f_vnode;
 VAR_20 = VAR_18->f_vnode;

 if ((VAR_18->f_flag & (VAR_6 | VAR_4)) != VAR_6 ||
     (VAR_17->f_flag & VAR_5) == 0) {
  VAR_21 = VAR_0;
  goto out;
 }


 if (VAR_15 == 0)
  goto out;





 if (VAR_19 == VAR_20 && ((VAR_25 <= VAR_26 && VAR_25 + VAR_15 >
     VAR_26) || (VAR_25 > VAR_26 && VAR_26 + VAR_15 >
     VAR_25))) {
  VAR_21 = VAR_2;
  goto out;
 }


 for (;;) {
  VAR_24 = FUNC_7(VAR_20, *VAR_14, *VAR_14 +
      VAR_15);
  VAR_23 = FUNC_5(VAR_19, *VAR_12, *VAR_12 +
      VAR_15);
  if (VAR_23 != ((void*)0))
   break;
  FUNC_6(VAR_20, VAR_24);
  VAR_23 = FUNC_4(VAR_19, *VAR_12, *VAR_12 + VAR_15);
  FUNC_6(VAR_19, VAR_23);
 }

 VAR_22 = VAR_15;
 VAR_21 = FUNC_3(VAR_19, VAR_12, VAR_20, VAR_14, &VAR_22,
     VAR_16, VAR_17->f_cred, VAR_18->f_cred, VAR_10);
out:
 if (VAR_23 != ((void*)0))
  FUNC_6(VAR_19, VAR_23);
 if (VAR_24 != ((void*)0))
  FUNC_6(VAR_20, VAR_24);
 if (VAR_25 != -1 && (VAR_21 == VAR_1 || VAR_21 == VAR_3)) {
  *VAR_12 = VAR_25;
  *VAR_14 = VAR_26;
 }
 if (VAR_18 != ((void*)0))
  FUNC_0(VAR_18, VAR_10);
 if (VAR_17 != ((void*)0))
  FUNC_0(VAR_17, VAR_10);
 VAR_10->td_retval[0] = VAR_22;
 return (VAR_21);
}

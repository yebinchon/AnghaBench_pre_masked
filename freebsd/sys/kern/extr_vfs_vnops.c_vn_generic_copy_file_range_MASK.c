
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct vnode {TYPE_2__* v_mount; } ;
struct vattr {scalar_t__ va_size; } ;
struct uio {size_t uio_resid; scalar_t__ uio_offset; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_8__ {int td_ucred; } ;
struct TYPE_6__ {long f_iosize; } ;
struct TYPE_7__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (long,long) ;
 void* FUNC_1 (size_t,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_3 (struct vnode*,int ,scalar_t__*,int ,struct ucred*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct vnode*,int ,long*) ;
 int FUNC_5 (struct vnode*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__* VAR_13 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,struct ucred*,struct vnode*) ;
 char* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (char*,int ,void*) ;
 int FUNC_11 (struct mount*) ;
 int FUNC_12 (struct vnode*,int ) ;
 int FUNC_13 (int ,struct vnode*,char*,scalar_t__,scalar_t__,int ,int ,int ,struct ucred*,scalar_t__*,TYPE_3__*) ;
 int FUNC_14 (struct vnode*,struct uio*,struct thread*) ;
 int FUNC_15 (struct vnode*,struct mount**,int ) ;
 int FUNC_16 (struct vnode*,scalar_t__,int,struct ucred*) ;
 int FUNC_17 (struct vnode*,char*,scalar_t__,scalar_t__,int,int,int,struct ucred*) ;

int
FUNC_18(struct vnode *VAR_14, off_t *VAR_15,
    struct vnode *VAR_16, off_t *VAR_17, size_t *VAR_18, unsigned int VAR_19,
    struct ucred *VAR_20, struct ucred *VAR_21, struct thread *VAR_22)
{
 struct vattr VAR_23;
 struct mount *VAR_24;
 struct uio VAR_25;
 off_t VAR_26, VAR_27, VAR_28, VAR_29;
 u_long VAR_30;
 int VAR_31;
 bool VAR_32, VAR_33, VAR_34, VAR_35;
 ssize_t VAR_36;
 size_t VAR_37, VAR_38, VAR_39;
 char *VAR_40;
 long VAR_41, VAR_42;

 VAR_41 = VAR_42 = 0;
 VAR_39 = VAR_38 = *VAR_18;
 VAR_31 = 0;
 VAR_40 = ((void*)0);

 VAR_31 = FUNC_12(VAR_14, VAR_6);
 if (VAR_31 != 0)
  goto out;
 if (FUNC_4(VAR_14, VAR_12, &VAR_41) != 0)
  VAR_41 = 0;
 FUNC_5(VAR_14, 0);

 VAR_24 = ((void*)0);
 VAR_31 = FUNC_15(VAR_16, &VAR_24, VAR_11);
 if (VAR_31 == 0)
  VAR_31 = FUNC_12(VAR_16, VAR_5);
 if (VAR_31 == 0) {




  if (VAR_22 != ((void*)0)) {
   VAR_25.uio_offset = *VAR_17;
   VAR_25.uio_resid = VAR_38;
   VAR_31 = FUNC_14(VAR_16, &VAR_25, VAR_22);
   if (VAR_31 != 0)
    VAR_31 = VAR_0;
  }
  if (FUNC_4(VAR_16, VAR_12, &VAR_42) != 0)
   VAR_42 = 0;






  if (VAR_31 == 0)
   VAR_31 = FUNC_2(VAR_16, &VAR_23, VAR_21);
  if (VAR_31 == 0 && VAR_23.va_size > *VAR_17 && VAR_23.va_size <=
      *VAR_17 + VAR_38) {





    VAR_31 = FUNC_16(VAR_16, *VAR_17,
        0, VAR_21);
   if (VAR_31 == 0)
    VAR_23.va_size = *VAR_17;
  }
  FUNC_5(VAR_16, 0);
 }
 if (VAR_24 != ((void*)0))
  FUNC_11(VAR_24);
 if (VAR_31 != 0)
  goto out;
 VAR_30 = FUNC_0(VAR_41, VAR_42);
 if (VAR_30 == 0)
  VAR_30 = FUNC_0(VAR_14->v_mount->mnt_stat.f_iosize,
      VAR_16->v_mount->mnt_stat.f_iosize);
 if (VAR_30 < 4096)
  VAR_30 = 4096;
 else if (VAR_30 > 1024 * 1024)
  VAR_30 = 1024 * 1024;
 VAR_40 = FUNC_8(VAR_30, VAR_7, VAR_8);
 VAR_34 = 0;
 while (VAR_38 > 0 && VAR_31 == 0 && !VAR_34) {
  VAR_27 = 0;
  VAR_32 = 1;
  VAR_26 = *VAR_15;
  VAR_37 = VAR_38;
  VAR_31 = VAR_1;
  if (VAR_41 > 0)
   VAR_31 = FUNC_3(VAR_14, VAR_2, &VAR_26, 0,
       VAR_20, VAR_13);
  if (VAR_31 == 0) {
   VAR_27 = VAR_26;
   VAR_31 = FUNC_3(VAR_14, VAR_3, &VAR_27, 0,
       VAR_20, VAR_13);
   if (VAR_31 == 0 && VAR_26 == VAR_27)
    VAR_31 = VAR_1;
  }
  if (VAR_31 == 0) {
   if (VAR_26 > *VAR_15) {

    VAR_28 = FUNC_1(VAR_26 - *VAR_15, VAR_38);
    if (*VAR_17 < VAR_23.va_size) {

     VAR_29 = FUNC_1(VAR_23.va_size - *VAR_17,
         VAR_28);
     FUNC_10(VAR_40, 0, FUNC_1(VAR_29, VAR_30));
     VAR_31 = FUNC_17(VAR_16, VAR_40,
         *VAR_17, VAR_29, VAR_30, 0,
         VAR_42 > 0, VAR_21);
    }

    if (VAR_31 == 0 && *VAR_17 + VAR_28 >
        VAR_23.va_size && VAR_28 == VAR_38)

     VAR_31 = FUNC_17(VAR_16, VAR_40,
         *VAR_17, VAR_28, VAR_30, 1,
         0, VAR_21);
    if (VAR_31 == 0) {
     *VAR_15 += VAR_28;
     *VAR_17 += VAR_28;
     VAR_38 -= VAR_28;
    }
   }
   VAR_37 = FUNC_1(VAR_38, VAR_27 - VAR_26);
   VAR_32 = 0;
  } else {
   VAR_32 = 1;
   VAR_26 = *VAR_15;
   VAR_37 = VAR_38;
   VAR_31 = 0;
  }

  VAR_28 = VAR_30;
  if (VAR_32) {





   VAR_28 -= (*VAR_15 % VAR_30);
  }

  while (VAR_37 > 0 && VAR_31 == 0 && !VAR_34) {
   if (VAR_37 < VAR_28)
    VAR_28 = VAR_37;
   VAR_31 = FUNC_12(VAR_14, VAR_6);
   if (VAR_31 != 0)
    goto out;
   VAR_31 = FUNC_13(VAR_9, VAR_14, VAR_40, VAR_28,
       VAR_26, VAR_10, VAR_4,
       VAR_13->td_ucred, VAR_20, &VAR_36,
       VAR_13);
   FUNC_5(VAR_14, 0);
   VAR_35 = 0;
   if (VAR_31 == 0 && VAR_36 > 0) {

    VAR_28 -= VAR_36;
    VAR_34 = 1;
    VAR_35 = 1;
   }
   if (VAR_31 == 0) {





    VAR_33 = VAR_32 ? FUNC_9(VAR_40, VAR_28) :
        0;
    if (VAR_28 == VAR_38)
     VAR_35 = 1;
    if (!VAR_32 || *VAR_17 < VAR_23.va_size ||
        VAR_35 || !VAR_33)
     VAR_31 = FUNC_17(VAR_16, VAR_40,
         *VAR_17, VAR_28, VAR_30,
         VAR_33 && VAR_35 &&
         *VAR_17 >= VAR_23.va_size, 0,
         VAR_21);
    if (VAR_31 == 0) {
     *VAR_15 += VAR_28;
     VAR_26 += VAR_28;
     *VAR_17 += VAR_28;
     VAR_37 -= VAR_28;
     VAR_38 -= VAR_28;
    }
   }
   VAR_28 = VAR_30;
  }
 }
out:
 *VAR_18 = VAR_39 - VAR_38;
 FUNC_6(VAR_40, VAR_7);
 return (VAR_31);
}

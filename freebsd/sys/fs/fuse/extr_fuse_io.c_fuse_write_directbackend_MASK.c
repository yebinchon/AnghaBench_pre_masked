
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct vnode {int v_mount; } ;
struct uio {scalar_t__ uio_resid; int uio_offset; int uio_td; } ;
struct ucred {int dummy; } ;
struct fuse_write_out {int size; } ;
struct fuse_write_in {int offset; size_t size; void* write_flags; int fh; int flags; } ;
struct fuse_vnode_data {int flag; } ;
struct fuse_filehandle {int fuse_open_flags; int fh_id; int fufh_type; } ;
struct fuse_dispatcher {size_t iosize; struct fuse_write_in* indata; scalar_t__ answ; } ;
struct fuse_data {int max_write; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,char*) ;
 struct fuse_vnode_data* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 int FUNC_4 (struct fuse_dispatcher*,int ) ;
 int FUNC_5 (struct fuse_dispatcher*,int ,struct vnode*,int ,struct ucred*) ;
 int FUNC_6 (struct fuse_dispatcher*,int ,struct vnode*,int ,struct ucred*) ;
 int FUNC_7 (struct fuse_dispatcher*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct fuse_data* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct fuse_data*,int,int) ;
 int FUNC_13 (struct vnode*,int) ;
 int FUNC_14 (struct vnode*) ;
 int FUNC_15 (void*,void*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct uio*,int) ;
 int FUNC_18 (void*,size_t,struct uio*) ;
 scalar_t__ FUNC_19 (struct vnode*,struct uio*,int ) ;
 int FUNC_20 (struct vnode*) ;

__attribute__((used)) static int
FUNC_21(struct vnode *VAR_12, struct uio *VAR_13,
    struct ucred *VAR_14, struct fuse_filehandle *VAR_15, off_t VAR_16,
    int VAR_17, bool VAR_18)
{
 struct fuse_vnode_data *VAR_19 = FUNC_2(VAR_12);
 struct fuse_data *VAR_20;
 struct fuse_write_in *VAR_21;
 struct fuse_write_out *VAR_22;
 struct fuse_dispatcher VAR_23;
 size_t VAR_24;
 void *VAR_25;
 off_t VAR_26;
 int VAR_27;
 int VAR_28 = 0;
 bool VAR_29 = VAR_15->fuse_open_flags & VAR_6;
 bool VAR_30 = 0;
 uint32_t VAR_31;

 VAR_20 = FUNC_11(VAR_12->v_mount);
 VAR_31 = !VAR_18 && (
  (VAR_17 & VAR_11) ||
  !FUNC_8(FUNC_20(VAR_12)) ||
  !FUNC_9(FUNC_20(VAR_12))) ? 0 : VAR_9;

 if (VAR_13->uio_resid == 0)
  return (0);

 if (VAR_17 & VAR_10)
  FUNC_17(VAR_13, VAR_16);

 if (FUNC_19(VAR_12, VAR_13, VAR_13->uio_td))
  return (VAR_0);

 FUNC_4(&VAR_23, 0);

 while (VAR_13->uio_resid > 0) {
  size_t VAR_32;

  if (FUNC_12(VAR_20, 7, 9)) {
   VAR_32 = sizeof(*VAR_21);
  } else {
   VAR_32 = VAR_7;
  }

  VAR_24 = FUNC_0(VAR_13->uio_resid, VAR_20->max_write);

  VAR_23.iosize = VAR_32 + VAR_24;
  FUNC_5(&VAR_23, VAR_8, VAR_12, VAR_13->uio_td, VAR_14);

  VAR_21 = VAR_23.indata;
  VAR_21->fh = VAR_15->fh_id;
  VAR_21->offset = VAR_13->uio_offset;
  VAR_21->size = VAR_24;
  VAR_21->write_flags = VAR_31;
  if (FUNC_12(VAR_20, 7, 9)) {
   VAR_21->flags = FUNC_10(VAR_15->fufh_type);
  }
  VAR_25 = (char *)VAR_23.indata + VAR_32;

  if ((VAR_28 = FUNC_18(VAR_25, VAR_24, VAR_13)))
   break;

retry:
  VAR_28 = FUNC_7(&VAR_23);
  if (VAR_28 == VAR_3 || VAR_28 == VAR_1 || VAR_28 == VAR_4) {




   VAR_13->uio_resid += VAR_21->size;
   VAR_13->uio_offset -= VAR_21->size;





   if (VAR_28 == VAR_3)
    VAR_28 = VAR_1;
   break;
  } else if (VAR_28) {
   break;
  } else {
   VAR_30 = 1;
  }

  VAR_22 = ((struct fuse_write_out *)VAR_23.answ);


  VAR_27 = VAR_21->size - VAR_22->size;
  VAR_26 = VAR_13->uio_offset - VAR_27;

  if (VAR_26 - VAR_27 > VAR_16)
   FUNC_13(VAR_12, VAR_26);
  if (VAR_26 - VAR_27 >= VAR_16)
   VAR_19->flag &= ~VAR_5;

  if (VAR_27 < 0) {
   FUNC_16("WARNING: misbehaving FUSE filesystem "
    "wrote more data than we provided it\n");
   VAR_28 = VAR_2;
   break;
  } else if (VAR_27 > 0) {

   if (!VAR_29) {
    FUNC_16("WARNING: misbehaving FUSE filesystem: "
     "short writes are only allowed with "
     "direct_io\n");
   }
   if (VAR_17 & VAR_11) {

    VAR_13->uio_resid += VAR_27;
    VAR_13->uio_offset -= VAR_27;
    break;
   } else {

    VAR_23.iosize = VAR_32 + VAR_27;

    FUNC_6(&VAR_23, VAR_8, VAR_12,
     VAR_13->uio_td, VAR_14);
    VAR_21 = VAR_23.indata;
    FUNC_1(VAR_21 == VAR_23.indata, "FUSE dispatcher "
     "reallocated despite no increase in "
     "size?");
    void *VAR_33 = (char*)VAR_25 + VAR_22->size;
    FUNC_15(VAR_25, VAR_33, VAR_27);
    VAR_21->fh = VAR_15->fh_id;
    VAR_21->offset = VAR_26;
    VAR_21->size = VAR_27;
    VAR_21->write_flags = VAR_31;
    goto retry;
   }
  }
 }

 FUNC_3(&VAR_23);

 if (VAR_30)
  FUNC_14(VAR_12);

 return (VAR_28);
}

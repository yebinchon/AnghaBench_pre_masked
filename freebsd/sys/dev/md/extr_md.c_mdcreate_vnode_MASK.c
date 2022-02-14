
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct vattr {scalar_t__ va_fileid; scalar_t__ va_fsid; } ;
struct thread {int td_ucred; } ;
struct nameidata {TYPE_1__* ni_vp; } ;
struct md_s {scalar_t__ fwsectors; scalar_t__ fwheads; int flags; TYPE_1__* vnode; int ident; int file; } ;
struct md_req {char* md_file; scalar_t__ md_file_seg; int md_options; scalar_t__ md_fwsectors; scalar_t__ md_fwheads; } ;
struct TYPE_6__ {scalar_t__ v_type; int v_iflag; int v_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_15 ;
 int FUNC_1 (struct nameidata*,int ,int ,scalar_t__,int ,struct thread*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (TYPE_1__*,struct vattr*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (char*,int ,int,int *) ;
 int FUNC_6 (struct md_s*,int ) ;
 int FUNC_7 (int ,int,char*,int ,int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_1__*,int,int ,struct thread*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (struct nameidata*,int*,int ,int *) ;

__attribute__((used)) static int
FUNC_12(struct md_s *VAR_22, struct md_req *VAR_23, struct thread *VAR_24)
{
 struct vattr VAR_25;
 struct nameidata VAR_26;
 char *VAR_27;
 int VAR_28, VAR_29;

 VAR_27 = VAR_23->md_file;
 if (VAR_23->md_file_seg == VAR_18) {
  VAR_28 = FUNC_5(VAR_27, VAR_22->file, sizeof(VAR_22->file), ((void*)0));
  if (VAR_28 != 0)
   return (VAR_28);
 } else if (VAR_23->md_file_seg == VAR_17)
  FUNC_8(VAR_22->file, VAR_27, sizeof(VAR_22->file));
 else
  return (VAR_1);





 VAR_29 = VAR_4 | ((VAR_23->md_options & VAR_13) ? 0 : VAR_5) | ((VAR_23->md_options & VAR_14) ? VAR_16 : 0);

 FUNC_1(&VAR_26, VAR_9, VAR_3, VAR_17, VAR_22->file, VAR_24);
 VAR_28 = FUNC_11(&VAR_26, &VAR_29, 0, ((void*)0));
 if (VAR_28 != 0)
  return (VAR_28);
 FUNC_0(&VAR_26, VAR_15);
 if (VAR_26.ni_vp->v_type != VAR_20) {
  VAR_28 = VAR_2;
  goto bad;
 }
 VAR_28 = FUNC_2(VAR_26.ni_vp, &VAR_25, VAR_24->td_ucred);
 if (VAR_28 != 0)
  goto bad;
 if (FUNC_3(VAR_26.ni_vp) != VAR_6) {
  FUNC_10(VAR_26.ni_vp, VAR_8 | VAR_7);
  if (VAR_26.ni_vp->v_iflag & VAR_19) {

   VAR_28 = VAR_0;
   goto bad;
  }
 }
 VAR_26.ni_vp->v_vflag |= VAR_21;
 FUNC_4(VAR_26.ni_vp, 0);

 if (VAR_23->md_fwsectors != 0)
  VAR_22->fwsectors = VAR_23->md_fwsectors;
 if (VAR_23->md_fwheads != 0)
  VAR_22->fwheads = VAR_23->md_fwheads;
 FUNC_7(VAR_22->ident, sizeof(VAR_22->ident), "MD-DEV%ju-INO%ju",
     (uintmax_t)VAR_25.va_fsid, (uintmax_t)VAR_25.va_fileid);
 VAR_22->flags = VAR_23->md_options & (VAR_10 | VAR_11 | VAR_12 |
     VAR_14);
 if (!(VAR_29 & VAR_5))
  VAR_22->flags |= VAR_13;
 VAR_22->vnode = VAR_26.ni_vp;

 VAR_28 = FUNC_6(VAR_22, VAR_24->td_ucred);
 if (VAR_28 != 0) {
  VAR_22->vnode = ((void*)0);
  FUNC_10(VAR_26.ni_vp, VAR_6 | VAR_7);
  VAR_26.ni_vp->v_vflag &= ~VAR_21;
  goto bad;
 }
 return (0);
bad:
 FUNC_4(VAR_26.ni_vp, 0);
 (void)FUNC_9(VAR_26.ni_vp, VAR_29, VAR_24->td_ucred, VAR_24);
 return (VAR_28);
}

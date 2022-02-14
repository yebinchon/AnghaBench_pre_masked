
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_vflag; struct smbnode* v_data; int v_vnlock; } ;
struct vattr {int dummy; } ;
struct thread {int td_ucred; } ;
struct smbnode {int n_dosattr; char* n_rpath; int n_rplen; int n_nmlen; int n_name; int n_flag; int n_ino; int n_parentino; struct vnode* n_parent; void* n_mount; struct vnode* n_vnode; } ;
struct smbmount {int * sm_root; } ;
struct smbfattr {int fa_attr; int fa_ino; } ;
struct smbcmp {int n_nmlen; char const* n_name; struct vnode* n_parent; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,struct vattr*,int ) ;
 scalar_t__ VAR_10 ;
 struct smbnode* FUNC_6 (struct vnode*) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 int FUNC_8 (char const*,char*,int) ;
 struct thread* VAR_12 ;
 int FUNC_9 (struct smbnode*,int ) ;
 int FUNC_10 (char*,struct mount*,int *,struct vnode**) ;
 int FUNC_11 (struct vnode*,struct mount*) ;
 int FUNC_12 (int ,int ,int *) ;
 void* FUNC_13 (int,int ,int) ;
 int FUNC_14 (char const*,int) ;
 int FUNC_15 (char const*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct mount*,int ,int ,struct thread*,struct vnode**,int ,struct smbcmp*) ;
 int FUNC_17 (struct vnode*,int ,int ,struct thread*,struct vnode**,int ,struct smbcmp*) ;
 int FUNC_18 (struct vnode*,int ,struct thread*) ;
 int FUNC_19 (struct vnode*) ;
 int FUNC_20 (struct vnode*,char*) ;
 int FUNC_21 (struct vnode*) ;
 int FUNC_22 (struct vnode*) ;

__attribute__((used)) static int
FUNC_23(struct mount *VAR_15, struct vnode *VAR_16, const char *VAR_17,
 int VAR_18, const char *VAR_19, int VAR_20, char VAR_21,
 struct smbfattr *VAR_22, struct vnode **VAR_23)
{
 struct vattr VAR_24;
 struct thread *VAR_25 = VAR_12;
 struct smbmount *VAR_26 = FUNC_4(VAR_15);
 struct smbnode *VAR_27, *VAR_28;
 struct vnode *VAR_29, *VAR_30;
 struct smbcmp VAR_31;
 char *VAR_32, *VAR_33;
 int VAR_34, VAR_35;

 VAR_31.n_parent = VAR_16;
 VAR_31.n_nmlen = VAR_20;
 VAR_31.n_name = VAR_19;
 if (VAR_26->sm_root != ((void*)0) && VAR_16 == ((void*)0)) {
  FUNC_2("do not allocate root vnode twice!\n");
  return VAR_0;
 }
 if (VAR_20 == 2 && FUNC_7(VAR_19, "..", 2) == 0) {
  if (VAR_16 == ((void*)0))
   return VAR_0;
  VAR_29 = FUNC_6(FUNC_6(VAR_16)->n_parent)->n_vnode;
  VAR_34 = FUNC_18(VAR_29, VAR_2, VAR_25);
  if (VAR_34 == 0)
   *VAR_23 = VAR_29;
  return VAR_34;
 } else if (VAR_20 == 1 && VAR_19[0] == '.') {
  FUNC_2("do not call me with dot!\n");
  return VAR_0;
 }
 VAR_28 = VAR_16 ? FUNC_6(VAR_16) : ((void*)0);
 if (VAR_28 == ((void*)0) && VAR_16 != ((void*)0)) {
  FUNC_20(VAR_16, "smbfs_node_alloc: dead parent vnode ");
  return VAR_0;
 }
 VAR_34 = FUNC_16(VAR_15, FUNC_14(VAR_19, VAR_20), VAR_2, VAR_25,
     VAR_23, VAR_13, &VAR_31);
 if (VAR_34)
  return (VAR_34);
 if (*VAR_23) {
  VAR_27 = FUNC_6(*VAR_23);

  (void)FUNC_5(*VAR_23, &VAR_24, VAR_25->td_ucred);






  if (((*VAR_23)->v_type == VAR_9 &&
      (VAR_27->n_dosattr & VAR_8) == 0) ||
          ((*VAR_23)->v_type == VAR_10 &&
      (VAR_27->n_dosattr & VAR_8) != 0)) {
   FUNC_19(*VAR_23);
   FUNC_21(*VAR_23);
  }
  else {
   FUNC_3("vnode taken from the hashtable\n");
   return (0);
  }
 }




 if (VAR_22 == ((void*)0))
  return VAR_1;

 VAR_34 = FUNC_10("smbfs", VAR_15, &VAR_14, VAR_23);
 if (VAR_34)
  return (VAR_34);
 VAR_29 = *VAR_23;
 VAR_27 = FUNC_13(sizeof *VAR_27, VAR_3, VAR_5 | VAR_6);
 VAR_35 = VAR_18;
 if (VAR_21 != '\0')
  VAR_35++;
 VAR_35 += VAR_20;
 VAR_33 = FUNC_13(VAR_35 + 1, VAR_4, VAR_5);
 VAR_32 = VAR_33;
 FUNC_8(VAR_17, VAR_32, VAR_18);
 VAR_32 += VAR_18;
 if (VAR_21 != '\0')
  *VAR_32++ = VAR_21;
 if (VAR_19 != ((void*)0)) {
  FUNC_8(VAR_19, VAR_32, VAR_20);
  VAR_32 += VAR_20;
 }
 *VAR_32 = '\0';
 FUNC_1(VAR_32 == VAR_33 + VAR_35);
 FUNC_12(VAR_29->v_vnlock, VAR_2, ((void*)0));

 VAR_29->v_type = VAR_22->fa_attr & VAR_8 ? VAR_9 : VAR_10;
 VAR_29->v_data = VAR_27;
 VAR_27->n_vnode = VAR_29;
 VAR_27->n_mount = FUNC_4(VAR_15);
 VAR_27->n_rpath = VAR_33;
 VAR_27->n_rplen = VAR_35;
 VAR_27->n_nmlen = VAR_20;
 VAR_27->n_name = FUNC_15(VAR_19, VAR_20);
 VAR_27->n_ino = VAR_22->fa_ino;
 if (VAR_16) {
  FUNC_0(VAR_16, "smbfs_node_alloc");
  VAR_27->n_parent = VAR_16;
  VAR_27->n_parentino = FUNC_6(VAR_16)->n_ino;
  if ( (VAR_16->v_vflag & VAR_11) == 0) {
   FUNC_22(VAR_16);
   VAR_27->n_flag |= VAR_7;
  }
 } else if (VAR_29->v_type == VAR_10)
  FUNC_2("new vnode '%s' born without parent ?\n", VAR_27->n_name);
 VAR_34 = FUNC_11(VAR_29, VAR_15);
 if (VAR_34) {
  FUNC_9(VAR_27, VAR_3);
  return (VAR_34);
 }
 VAR_34 = FUNC_17(VAR_29, FUNC_14(VAR_19, VAR_20), VAR_2,
     VAR_25, &VAR_30, VAR_13, &VAR_31);
 if (VAR_34)
  return (VAR_34);
 if (VAR_30 != ((void*)0))
  *VAR_23 = VAR_30;
 return (0);
}

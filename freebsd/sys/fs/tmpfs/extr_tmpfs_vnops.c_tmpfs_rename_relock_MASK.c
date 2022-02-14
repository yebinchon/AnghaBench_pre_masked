
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct tmpfs_dirent {int td_node; } ;
struct mount {int dummy; } ;
struct componentname {int cn_flags; int cn_namelen; char* cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct mount*,int ,int,struct vnode**) ;
 struct tmpfs_dirent* FUNC_3 (int ,int *,struct componentname*) ;
 int VAR_7 ;
 int FUNC_4 (struct vnode*,int) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct vnode *VAR_8, struct vnode **VAR_9,
    struct vnode *VAR_10, struct vnode **VAR_11,
    struct componentname *VAR_12, struct componentname *VAR_13)
{
 struct vnode *VAR_14;
 struct mount *VAR_15;
 struct tmpfs_dirent *VAR_16;
 int VAR_17, VAR_18 = 0;

 FUNC_0(VAR_10, 0);
 if (*VAR_11 != ((void*)0) && *VAR_11 != VAR_10)
  FUNC_0(*VAR_11, 0);
 VAR_15 = VAR_8->v_mount;

relock:
 VAR_18 += 1;
 VAR_17 = FUNC_4(VAR_8, VAR_5);
 if (VAR_17)
  goto releout;
 if (FUNC_4(VAR_10, VAR_5 | VAR_6) != 0) {
  FUNC_0(VAR_8, 0);
  VAR_17 = FUNC_4(VAR_10, VAR_5);
  if (VAR_17)
   goto releout;
  FUNC_0(VAR_10, 0);
  goto relock;
 }




 VAR_16 = FUNC_3(FUNC_1(VAR_8), ((void*)0), VAR_12);
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_8, 0);
  FUNC_0(VAR_10, 0);
  if ((VAR_12->cn_flags & VAR_4) != 0 ||
      (VAR_12->cn_namelen == 1 && VAR_12->cn_nameptr[0] == '.'))
   VAR_17 = VAR_1;
  else
   VAR_17 = VAR_2;
  goto releout;
 }
 VAR_17 = FUNC_2(VAR_15, VAR_16->td_node, VAR_5 | VAR_6, &VAR_14);
 if (VAR_17 != 0) {
  FUNC_0(VAR_8, 0);
  FUNC_0(VAR_10, 0);
  if (VAR_17 != VAR_0)
   goto releout;
  VAR_17 = FUNC_2(VAR_15, VAR_16->td_node, VAR_5, &VAR_14);
  if (VAR_17 != 0)
   goto releout;
  FUNC_0(VAR_14, 0);



  if (VAR_14 == VAR_10) {
   FUNC_5(VAR_14);
   VAR_17 = VAR_1;
   goto releout;
  }
  FUNC_5(*VAR_9);
  *VAR_9 = VAR_14;
  goto relock;
 }
 FUNC_5(*VAR_9);
 *VAR_9 = VAR_14;
 FUNC_0(*VAR_9, 0);



 VAR_16 = FUNC_3(FUNC_1(VAR_10), ((void*)0), VAR_13);



 if (VAR_16 == ((void*)0) && *VAR_11 != ((void*)0)) {
  FUNC_5(*VAR_11);
  *VAR_11 = ((void*)0);
 }




 if (VAR_16 != ((void*)0)) {
  VAR_14 = ((void*)0);
  VAR_17 = FUNC_2(VAR_15, VAR_16->td_node,
      VAR_5 | VAR_6, &VAR_14);
  if (*VAR_11 != ((void*)0))
   FUNC_5(*VAR_11);
  *VAR_11 = VAR_14;
  if (VAR_17 != 0) {
   FUNC_0(VAR_8, 0);
   FUNC_0(VAR_10, 0);
   if (VAR_17 != VAR_0)
    goto releout;
   VAR_17 = FUNC_2(VAR_15, VAR_16->td_node, VAR_5,
       &VAR_14);
   if (VAR_17 != 0)
    goto releout;
   FUNC_0(VAR_14, 0);



   if (VAR_14 == VAR_8) {
    VAR_17 = VAR_3;
    goto releout;
   }
   goto relock;
  }
 }
 VAR_7 += VAR_18;

 return (0);

releout:
 FUNC_5(VAR_8);
 FUNC_5(*VAR_9);
 FUNC_5(VAR_10);
 if (*VAR_11 != ((void*)0))
  FUNC_5(*VAR_11);
 VAR_7 += VAR_18;

 return (VAR_17);
}

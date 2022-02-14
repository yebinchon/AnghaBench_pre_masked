
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct componentname {int cn_flags; int cn_lkflags; char* cn_nameptr; scalar_t__ cn_nameiop; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct vnode*,struct vnode**,struct componentname*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*) ;
 int VAR_17 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (struct vnode*,char*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;

int
FUNC_10(struct vnode *VAR_18, struct vnode **VAR_19, struct componentname *VAR_20)
{
 struct vnode *VAR_21 = ((void*)0);
 int VAR_22;
 int VAR_23;
 int VAR_24 = 0;

 FUNC_0(VAR_20->cn_flags & VAR_5,
     ("relookup: Not given last component."));



 VAR_22 = VAR_20->cn_flags & (VAR_10|VAR_17);
 FUNC_0(VAR_22, ("relookup: parent not wanted."));
 VAR_23 = VAR_20->cn_flags & VAR_12;
 VAR_20->cn_flags &= ~VAR_6;
 VAR_21 = VAR_18;
 VAR_20->cn_lkflags = VAR_7;
 FUNC_6(VAR_21, VAR_7 | VAR_8);
 if (VAR_20->cn_nameptr[0] == '\0') {




  FUNC_0(VAR_20->cn_nameiop == VAR_11, ("nameiop must be LOOKUP"));
  FUNC_0(VAR_21->v_type == VAR_15, ("dp is not a directory"));

  if (!(VAR_20->cn_flags & VAR_9))
   FUNC_2(VAR_21, 0);
  *VAR_19 = VAR_21;

  if (VAR_20->cn_flags & VAR_14)
   FUNC_4("lookup: SAVESTART");
  return (0);
 }

 if (VAR_20->cn_flags & VAR_4)
  FUNC_4 ("relookup: lookup on dot-dot");







 if ((VAR_24 = FUNC_1(VAR_21, VAR_19, VAR_20)) != 0) {
  FUNC_0(*VAR_19 == ((void*)0), ("leaf should be empty"));
  if (VAR_24 != VAR_1)
   goto bad;




  if (VAR_23) {
   VAR_24 = VAR_2;
   goto bad;
  }

  if (VAR_20->cn_flags & VAR_14)
   FUNC_3(VAR_18);
  if ((VAR_20->cn_flags & VAR_10) == 0)
   FUNC_2(VAR_21, 0);





  return (0);
 }

 VAR_21 = *VAR_19;




 if (VAR_23 &&
     (VAR_20->cn_nameiop == VAR_0 || VAR_20->cn_nameiop == VAR_13)) {
  if (VAR_18 == VAR_21)
   FUNC_9(VAR_18);
  else
   FUNC_8(VAR_18);
  VAR_24 = VAR_2;
  goto bad;
 }



 if ((VAR_20->cn_flags & VAR_10) == 0 && VAR_18 != VAR_21) {
  if (VAR_22)
   FUNC_2(VAR_18, 0);
  else
   FUNC_8(VAR_18);
 } else if (!VAR_22)
  FUNC_9(VAR_18);



 FUNC_0(VAR_21->v_type != VAR_16 || !(VAR_20->cn_flags & VAR_3),
     ("relookup: symlink found.\n"));


 if (VAR_20->cn_flags & VAR_14)
  FUNC_3(VAR_18);

 if ((VAR_20->cn_flags & VAR_9) == 0)
  FUNC_2(VAR_21, 0);
 return (0);
bad:
 FUNC_8(VAR_21);
 *VAR_19 = ((void*)0);
 return (VAR_24);
}

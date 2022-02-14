
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_iflag; } ;
struct flock {int l_type; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
struct file {scalar_t__ f_type; int f_flag; } ;
typedef int caddr_t ;


 int FUNC_0 (struct vnode*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct vnode*,int ,int ,struct flock*,int) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ) ;
 int FUNC_5 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_6(struct vnode *VAR_16, int VAR_17, struct file *VAR_18)
{
 struct flock VAR_19;
 int VAR_20, VAR_21, VAR_22;

 FUNC_0(VAR_16, "vn_open_vnode_advlock");
 if ((VAR_17 & (VAR_12 | VAR_13)) == 0)
  return (0);
 FUNC_1(VAR_18 != ((void*)0), ("open with flock requires fp"));
 if (VAR_18->f_type != VAR_0 && VAR_18->f_type != VAR_1)
  return (VAR_3);

 VAR_21 = FUNC_3(VAR_16);
 FUNC_4(VAR_16, 0);

 VAR_19.l_whence = VAR_14;
 VAR_19.l_start = 0;
 VAR_19.l_len = 0;
 VAR_19.l_type = (VAR_17 & VAR_12) != 0 ? VAR_10 : VAR_7;
 VAR_22 = VAR_6;
 if ((VAR_17 & VAR_5) == 0)
  VAR_22 |= VAR_9;
 VAR_20 = FUNC_2(VAR_16, (caddr_t)VAR_18, VAR_8, &VAR_19, VAR_22);
 if (VAR_20 == 0)
  VAR_18->f_flag |= VAR_4;

 FUNC_5(VAR_16, VAR_21 | VAR_11);
 if (VAR_20 == 0 && (VAR_16->v_iflag & VAR_15) != 0)
  VAR_20 = VAR_2;
 return (VAR_20);
}

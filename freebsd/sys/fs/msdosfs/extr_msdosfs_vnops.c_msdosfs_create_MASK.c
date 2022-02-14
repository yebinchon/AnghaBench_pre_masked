
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_create_args {int * a_vpp; int a_dvp; int a_vap; struct componentname* a_cnp; } ;
struct timespec {int dummy; } ;
struct denode {scalar_t__ de_StartCluster; scalar_t__ de_fndoffset; scalar_t__ de_FileSize; int de_flag; int de_pmp; scalar_t__ de_LowerCase; int de_Attributes; int de_Name; } ;
struct componentname {int cn_flags; } ;
typedef int ndirent ;


 int VAR_0 ;
 int FUNC_0 (struct denode*,struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_1 (struct denode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct denode* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct componentname*) ;
 int FUNC_4 (struct denode*,struct denode*,struct denode**,struct componentname*) ;
 int FUNC_5 (struct denode*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,struct componentname*,int ) ;
 int FUNC_8 (struct denode*,struct componentname*,int ) ;
 int FUNC_9 (struct timespec*) ;

__attribute__((used)) static int
FUNC_10(struct vop_create_args *VAR_8)
{
 struct componentname *VAR_9 = VAR_8->a_cnp;
 struct denode VAR_10;
 struct denode *VAR_11;
 struct denode *VAR_12 = FUNC_2(VAR_8->a_dvp);
 struct timespec VAR_13;
 int VAR_14;
 if (VAR_12->de_StartCluster == VAR_7
     && VAR_12->de_fndoffset >= VAR_12->de_FileSize) {
  VAR_14 = VAR_4;
  goto bad;
 }
 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_14 = FUNC_8(VAR_12, VAR_9, VAR_10.de_Name);
 if (VAR_14)
  goto bad;

 VAR_10.de_Attributes = VAR_0;
 VAR_10.de_LowerCase = 0;
 VAR_10.de_StartCluster = 0;
 VAR_10.de_FileSize = 0;
 VAR_10.de_pmp = VAR_12->de_pmp;
 VAR_10.de_flag = VAR_1 | VAR_2 | VAR_3;
 FUNC_9(&VAR_13);
 FUNC_0(&VAR_10, &VAR_13, &VAR_13, &VAR_13);
 VAR_14 = FUNC_4(&VAR_10, VAR_12, &VAR_11, VAR_9);
 if (VAR_14)
  goto bad;
 *VAR_8->a_vpp = FUNC_1(VAR_11);
 if ((VAR_9->cn_flags & VAR_6) != 0)
  FUNC_3(VAR_8->a_dvp, *VAR_8->a_vpp, VAR_9);
 return (0);

bad:
 return (VAR_14);
}

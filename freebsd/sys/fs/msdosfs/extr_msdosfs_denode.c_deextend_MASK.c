
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct ucred {int dummy; } ;
struct msdosfsmount {scalar_t__ pm_freeclustercount; } ;
struct denode {int de_Attributes; scalar_t__ de_FileSize; int de_flag; struct msdosfsmount* de_pmp; } ;
struct TYPE_3__ {int v_vflag; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct denode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct msdosfsmount*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_4 (struct denode*,scalar_t__,int ,struct ucred*) ;
 int FUNC_5 (struct denode*,int) ;
 int FUNC_6 (struct denode*,scalar_t__,int *,int *,int ) ;
 int FUNC_7 (char*) ;

int
FUNC_8(struct denode *VAR_8, u_long VAR_9, struct ucred *VAR_10)
{
 struct msdosfsmount *VAR_11 = VAR_8->de_pmp;
 u_long VAR_12;
 int VAR_13;




 if ((FUNC_0(VAR_8)->v_vflag & VAR_7) && !FUNC_2(VAR_11))
  return (VAR_4);




 if (VAR_8->de_Attributes & VAR_0)
  return (VAR_5);

 if (VAR_9 <= VAR_8->de_FileSize)
  FUNC_7("deextend: file too large");




 VAR_12 = FUNC_3(VAR_11, VAR_9) - FUNC_3(VAR_11, VAR_8->de_FileSize);
 if (VAR_12 > 0) {
  if (VAR_12 > VAR_11->pm_freeclustercount)
   return (VAR_6);
  VAR_13 = FUNC_6(VAR_8, VAR_12, ((void*)0), ((void*)0), VAR_1);
  if (VAR_13) {

   (void) FUNC_4(VAR_8, VAR_8->de_FileSize, 0, VAR_10);
   return (VAR_13);
  }
 }
 VAR_8->de_FileSize = VAR_9;
 VAR_8->de_flag |= VAR_3 | VAR_2;
 return (FUNC_5(VAR_8, !FUNC_1(FUNC_0(VAR_8))));
}

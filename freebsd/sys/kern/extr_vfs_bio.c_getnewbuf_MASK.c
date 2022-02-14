
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t bo_domain; } ;
struct vnode {int v_vflag; scalar_t__ v_type; TYPE_1__ v_bufobj; } ;
struct bufdomain {int dummy; } ;
struct buf {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bufdomain* VAR_6 ;
 int FUNC_1 (struct buf*) ;
 struct buf* FUNC_2 (struct bufdomain*) ;
 scalar_t__ FUNC_3 (struct bufdomain*,int) ;
 int FUNC_4 (struct bufdomain*,int) ;
 scalar_t__ FUNC_5 (struct bufdomain*,int,int) ;
 int FUNC_6 (struct bufdomain*,struct vnode*,int,int,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (struct buf*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct buf *
FUNC_9(struct vnode *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct bufdomain *VAR_15;
 struct buf *VAR_16;
 bool VAR_17, VAR_18;

 VAR_16 = ((void*)0);
 FUNC_0((VAR_14 & (VAR_2 | VAR_1)) != VAR_1,
     ("GB_KVAALLOC only makes sense with GB_UNMAPPED"));
 if (!VAR_9)
  VAR_14 &= ~(VAR_2 | VAR_1);

 if (VAR_10 == ((void*)0) || (VAR_10->v_vflag & (VAR_4 | VAR_5)) != 0 ||
     VAR_10->v_type == VAR_3)
  VAR_17 = 1;
 else
  VAR_17 = 0;
 if (VAR_10 == ((void*)0))
  VAR_15 = &VAR_6[0];
 else
  VAR_15 = &VAR_6[VAR_10->v_bufobj.bo_domain];

 FUNC_7(VAR_7, 1);
 VAR_18 = 0;
 do {
  if (VAR_18 == 0 &&
      FUNC_5(VAR_15, VAR_13, VAR_17) != 0) {
   FUNC_7(VAR_8, 1);
   continue;
  }
  VAR_18 = 1;
  if ((VAR_16 = FUNC_2(VAR_15)) == ((void*)0)) {
   FUNC_7(VAR_8, 1);
   continue;
  }
  if (FUNC_8(VAR_16, VAR_14, VAR_13) == 0)
   return (VAR_16);
  break;
 } while (FUNC_3(VAR_15, 0) == 0);

 if (VAR_18)
  FUNC_4(VAR_15, VAR_13);
 if (VAR_16 != ((void*)0)) {
  VAR_16->b_flags |= VAR_0;
  FUNC_1(VAR_16);
 }
 FUNC_6(VAR_15, VAR_10, VAR_14, VAR_11, VAR_12);

 return (((void*)0));
}

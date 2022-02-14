
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct mount {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;
struct TYPE_3__ {int td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct mount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_5 ;
 int FUNC_4 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (int ,struct vnode*,char*,scalar_t__,scalar_t__,int ,int ,int ,struct ucred*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct vnode*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,struct ucred*) ;
 int FUNC_9 (struct vnode*,struct mount**,int ) ;
 int FUNC_10 (struct vnode*,scalar_t__,int,struct ucred*) ;

__attribute__((used)) static int
FUNC_11(struct vnode *VAR_7, char *VAR_8, off_t VAR_9, off_t VAR_10,
    u_long VAR_11, bool VAR_12, bool VAR_13, struct ucred *VAR_14)
{
 struct mount *VAR_15;
 off_t VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;







 VAR_19 = 0;
 VAR_17 = 0;
 do {
  VAR_18 = FUNC_1(VAR_10, VAR_11);
  if (VAR_13) {




   VAR_18 = FUNC_8(VAR_7, VAR_18, &VAR_9, &VAR_10,
       &VAR_16, &VAR_17, VAR_14);
   if (VAR_10 == 0)
    break;
   if (VAR_17 < 0)
    VAR_13 = 0;
   FUNC_0(VAR_18 > 0, ("vn_write_outvp: xfer2=%jd",
       (intmax_t)VAR_18));
  }
  FUNC_4();
  VAR_15 = ((void*)0);
  VAR_19 = FUNC_9(VAR_7, &VAR_15, VAR_5);
  if (VAR_19 == 0) {
   if (FUNC_2(VAR_15))
    VAR_20 = VAR_2;
   else
    VAR_20 = VAR_1;
   VAR_19 = FUNC_6(VAR_7, VAR_20);
  }
  if (VAR_19 == 0) {
   if (VAR_12)
    VAR_19 = FUNC_10(VAR_7, VAR_9 + VAR_10,
        0, VAR_14);
   else {
    VAR_19 = FUNC_7(VAR_4, VAR_7, VAR_8, VAR_18,
        VAR_9, VAR_3, VAR_0,
        VAR_6->td_ucred, VAR_14, ((void*)0), VAR_6);
    VAR_9 += VAR_18;
    VAR_10 -= VAR_18;
   }
   FUNC_3(VAR_7, 0);
  }
  if (VAR_15 != ((void*)0))
   FUNC_5(VAR_15);
 } while (!VAR_12 && VAR_10 > 0 && VAR_19 == 0);
 return (VAR_19);
}

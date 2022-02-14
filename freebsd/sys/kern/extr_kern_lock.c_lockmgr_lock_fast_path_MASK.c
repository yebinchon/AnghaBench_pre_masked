
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct lock_object {int dummy; } ;
struct lock_class {int (* lc_unlock ) (struct lock_object*) ;} ;
struct TYPE_2__ {int lo_flags; } ;
struct lock {int lk_lock; TYPE_1__ lock_object; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 struct lock_class* FUNC_1 (struct lock_object*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int,char const*,int,struct lock_object*) ;
 int FUNC_3 (struct lock*,int,struct lock_object*,int ,int ,int ,char const*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ,uintptr_t) ;
 int VAR_9 ;
 int FUNC_7 (struct lock*,int ,int ,char const*,int,int) ;
 int FUNC_8 (struct lock*,int ,int ,char const*,int,int) ;
 int FUNC_9 (struct lock*,int,struct lock_object*,char const*,int,int *) ;
 int FUNC_10 (struct lock*,uintptr_t*,int,int) ;
 int FUNC_11 (struct lock*,int,struct lock_object*,char const*,int,int *) ;
 int FUNC_12 (struct lock*,int,struct lock_object*,char const*,int,int *) ;
 int * VAR_10 ;
 int FUNC_13 (struct lock_object*) ;

int
FUNC_14(struct lock *VAR_11, u_int VAR_12, struct lock_object *VAR_13,
    const char *VAR_14, int VAR_15)
{
 struct lock_class *VAR_16;
 uintptr_t VAR_17, VAR_18;
 u_int VAR_19;
 bool VAR_20;

 if (FUNC_4(VAR_10 != ((void*)0)))
  return (0);

 VAR_19 = VAR_12 & VAR_4;
 VAR_20 = 0;
 switch (VAR_19) {
 case 130:
  if (FUNC_0(VAR_12))
   FUNC_2(&VAR_11->lock_object, VAR_8,
       VAR_14, VAR_15, VAR_12 & VAR_0 ? VAR_13 : ((void*)0));
  if (FUNC_4(VAR_11->lock_object.lo_flags & VAR_1))
   break;
  if (FUNC_10(VAR_11, &VAR_17, VAR_12, 1)) {
   FUNC_8(VAR_11, 0, 0,
       VAR_14, VAR_15, VAR_12);
   VAR_20 = 1;
  } else {
   return (FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
       ((void*)0)));
  }
  break;
 case 131:
  if (FUNC_0(VAR_12))
   FUNC_2(&VAR_11->lock_object, VAR_8 |
       VAR_7, VAR_14, VAR_15, VAR_12 & VAR_0 ?
       VAR_13 : ((void*)0));
  VAR_18 = (uintptr_t)VAR_9;
  if (VAR_11->lk_lock == VAR_5 &&
      FUNC_6(&VAR_11->lk_lock, VAR_5, VAR_18)) {
   FUNC_7(VAR_11, 0, 0, VAR_14, VAR_15,
       VAR_12);
   VAR_20 = 1;
  } else {
   return (FUNC_12(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
       ((void*)0)));
  }
  break;
 case 128:
 case 129:
  return (FUNC_11(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, ((void*)0)));
 default:
  break;
 }
 if (FUNC_5(VAR_20)) {
  if (FUNC_4(VAR_12 & VAR_0)) {
   VAR_16 = FUNC_1(VAR_13);
   VAR_16->lc_unlock(VAR_13);
  }
  return (0);
 } else {
  return (FUNC_3(VAR_11, VAR_12, VAR_13, VAR_6,
      VAR_2, VAR_3, VAR_14, VAR_15));
 }
}

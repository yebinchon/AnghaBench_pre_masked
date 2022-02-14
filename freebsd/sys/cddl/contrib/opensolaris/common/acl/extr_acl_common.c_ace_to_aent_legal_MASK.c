
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ a_type; int a_flags; int a_access_mask; } ;
typedef TYPE_1__ ace_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_1(ace_t *VAR_21)
{
 int VAR_22 = 0;
 int VAR_23;


 if ((VAR_21->a_type != VAR_0) &&
     (VAR_21->a_type != VAR_1)) {
  VAR_22 = VAR_20;
  goto out;
 }


 if (VAR_21->a_flags & ~(VAR_12)) {
  VAR_22 = VAR_19;
  goto out;
 }


 if (VAR_21->a_flags & (VAR_10 |
     VAR_4 |
     VAR_5)) {
  VAR_22 = VAR_20;
  goto out;
 }


 if (VAR_21->a_access_mask & ~(VAR_13)) {
  VAR_22 = VAR_19;
  goto out;
 }

 if ((VAR_21->a_flags & VAR_6)) {
  VAR_23 = 1;
 } else {
  VAR_23 = 0;
 }

 VAR_22 = FUNC_0(VAR_21, VAR_11, VAR_23);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_0(VAR_21, VAR_18, VAR_23);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_0(VAR_21, VAR_3, VAR_23);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_0(VAR_21, VAR_15, VAR_23);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_0(VAR_21, VAR_9, VAR_23);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_0(VAR_21, VAR_17, VAR_23);
 if (VAR_22)
  goto out;


 if (VAR_21->a_type == VAR_0) {
  if (! (VAR_21->a_access_mask & VAR_8)) {
   VAR_22 = VAR_20;
   goto out;
  }
  if ((VAR_21->a_access_mask & VAR_16) &&
      (! (VAR_21->a_access_mask & VAR_2))) {
   VAR_22 = VAR_20;
   goto out;
  }
  if ((! (VAR_21->a_access_mask & VAR_16)) &&
      (VAR_21->a_access_mask & VAR_2)) {
   VAR_22 = VAR_20;
   goto out;
  }
 }


 if ((VAR_21->a_access_mask & VAR_7) &&
     (VAR_21->a_type != VAR_0)) {
  VAR_22 = VAR_20;
  goto out;
 }
 if (VAR_21->a_access_mask & VAR_14) {
  if ((VAR_21->a_type == VAR_1) &&
      (VAR_23)) {
   VAR_22 = VAR_20;
   goto out;
  }
  if ((VAR_21->a_type == VAR_0) &&
      (! VAR_23)) {
   VAR_22 = VAR_20;
   goto out;
  }
 }

out:
 return (VAR_22);
}

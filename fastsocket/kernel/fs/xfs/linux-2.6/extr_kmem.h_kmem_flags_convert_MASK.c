
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_km_flags_t ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static inline gfp_t
FUNC_1(xfs_km_flags_t VAR_10)
{
 gfp_t VAR_11;

 FUNC_0(VAR_10 & ~(VAR_5|VAR_4|VAR_3|VAR_2));

 if (VAR_10 & VAR_4) {
  VAR_11 = VAR_0 | VAR_8;
 } else {
  VAR_11 = VAR_1 | VAR_8;
  if ((VAR_9->flags & VAR_6) || (VAR_10 & VAR_3))
   VAR_11 &= ~VAR_7;
 }
 return VAR_11;
}

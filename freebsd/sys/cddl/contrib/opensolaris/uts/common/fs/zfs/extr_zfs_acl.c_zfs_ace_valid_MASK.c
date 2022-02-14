
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_hints; int z_version; } ;
typedef TYPE_1__ zfs_acl_t ;
typedef scalar_t__ vtype_t ;
typedef int uint16_t ;
typedef int boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static boolean_t
FUNC_1(vtype_t VAR_10, zfs_acl_t *VAR_11, uint16_t VAR_12, uint16_t VAR_13)
{




 if (!FUNC_0(VAR_12, VAR_13))
  return (VAR_4);

 switch (VAR_12) {
 case 131:
 case 130:
 case 128:
 case 129:
  if (VAR_11->z_version < VAR_8)
   return (VAR_4);
  VAR_11->z_hints |= VAR_7;
 }





 if (VAR_10 == VAR_6 &&
     (VAR_13 & (VAR_1|VAR_0)))
  VAR_11->z_hints |= VAR_9;

 if (VAR_13 & (VAR_2|VAR_3)) {
  if ((VAR_13 & (VAR_1|
      VAR_0)) == 0) {
   return (VAR_4);
  }
 }

 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {int ae_perm; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
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

mode_t
FUNC_0(struct acl_entry *VAR_12,
    struct acl_entry *VAR_13, struct acl_entry *VAR_14)
{
 mode_t VAR_15;

 VAR_15 = 0;
 if (VAR_12->ae_perm & VAR_0)
  VAR_15 |= VAR_11;
 if (VAR_12->ae_perm & VAR_1)
  VAR_15 |= VAR_5;
 if (VAR_12->ae_perm & VAR_2)
  VAR_15 |= VAR_8;
 if (VAR_13->ae_perm & VAR_0)
  VAR_15 |= VAR_9;
 if (VAR_13->ae_perm & VAR_1)
  VAR_15 |= VAR_3;
 if (VAR_13->ae_perm & VAR_2)
  VAR_15 |= VAR_6;
 if (VAR_14->ae_perm & VAR_0)
  VAR_15 |= VAR_10;
 if (VAR_14->ae_perm & VAR_1)
  VAR_15 |= VAR_4;
 if (VAR_14->ae_perm & VAR_2)
  VAR_15 |= VAR_7;

 return (VAR_15);
}

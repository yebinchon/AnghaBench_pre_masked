
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int acl_perm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

int
FUNC_0(acl_perm_t VAR_12, ssize_t VAR_13, char *VAR_14)
{

 if (VAR_13 < VAR_10 + 1) {
  VAR_11 = VAR_9;
  return (-1);
 }

 if ((VAR_12 | VAR_1) != VAR_1) {
  VAR_11 = VAR_8;
  return (-1);
 }

 VAR_14[3] = 0;

 if (VAR_12 & VAR_2)
  VAR_14[0] = VAR_5;
 else
  VAR_14[0] = VAR_4;

 if (VAR_12 & VAR_7)
  VAR_14[1] = VAR_6;
 else
  VAR_14[1] = VAR_4;

 if (VAR_12 & VAR_0)
  VAR_14[2] = VAR_3;
 else
  VAR_14[2] = VAR_4;

 return (0);
}

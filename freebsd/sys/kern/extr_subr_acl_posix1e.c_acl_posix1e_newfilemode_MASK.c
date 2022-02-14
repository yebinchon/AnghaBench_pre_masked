
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acl*) ;

mode_t
FUNC_1(mode_t VAR_2, struct acl *VAR_3)
{
 mode_t VAR_4;

 VAR_4 = VAR_2;






 VAR_4 &= VAR_1;
 VAR_4 |= (VAR_0 & VAR_2 & FUNC_0(VAR_3));

 return (VAR_4);
}

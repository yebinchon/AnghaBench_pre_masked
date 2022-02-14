
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_ruid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ucred*,int ) ;
 int VAR_2 ;

int
FUNC_1(struct ucred *VAR_3, struct ucred *VAR_4)
{

 if (!VAR_2 && VAR_3->cr_ruid != VAR_4->cr_ruid) {
  if (FUNC_0(VAR_3, VAR_1) != 0)
   return (VAR_0);
 }
 return (0);
}

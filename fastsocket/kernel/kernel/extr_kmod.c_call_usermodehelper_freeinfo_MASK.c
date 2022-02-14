
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {scalar_t__ cred; int (* cleanup ) (struct subprocess_info*) ;} ;


 int FUNC_0 (struct subprocess_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct subprocess_info*) ;

void FUNC_3(struct subprocess_info *VAR_0)
{
 if (VAR_0->cleanup)
  (*VAR_0->cleanup)(VAR_0);
 if (VAR_0->cred)
  FUNC_1(VAR_0->cred);
 FUNC_0(VAR_0);
}

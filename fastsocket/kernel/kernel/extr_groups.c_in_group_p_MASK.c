
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {scalar_t__ fsgid; int group_info; } ;
typedef scalar_t__ gid_t ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(gid_t VAR_0)
{
 const struct cred *VAR_1 = FUNC_0();
 int VAR_2 = 1;

 if (VAR_0 != VAR_1->fsgid)
  VAR_2 = FUNC_1(VAR_1->group_info, VAR_0);
 return VAR_2;
}

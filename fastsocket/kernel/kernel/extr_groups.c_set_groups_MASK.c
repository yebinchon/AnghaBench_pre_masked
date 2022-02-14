
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int dummy; } ;
struct cred {struct group_info* group_info; } ;


 int FUNC_0 (struct group_info*) ;
 int FUNC_1 (struct group_info*) ;
 int FUNC_2 (struct group_info*) ;
 int FUNC_3 (struct group_info*) ;

int FUNC_4(struct cred *VAR_0, struct group_info *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0->group_info);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 VAR_0->group_info = VAR_1;
 return 0;
}

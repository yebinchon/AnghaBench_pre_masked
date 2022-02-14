
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (struct cred*) ;
 struct cred* FUNC_2 () ;
 int FUNC_3 (struct cred*,struct group_info*) ;

int FUNC_4(struct group_info *VAR_1)
{
 struct cred *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2();
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2);
  return VAR_3;
 }

 return FUNC_1(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (struct cred*) ;
 int FUNC_2 (struct cred*) ;
 struct cred* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 struct cred *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3();
 if (!VAR_2)
  return -VAR_1;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2);
  return VAR_3 != -VAR_0 ? VAR_3 : 0;
 }

 return FUNC_1(VAR_2);
}

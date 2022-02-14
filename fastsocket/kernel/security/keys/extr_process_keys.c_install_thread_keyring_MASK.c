
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int thread_keyring; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cred*) ;
 int FUNC_2 (struct cred*) ;
 int FUNC_3 (struct cred*) ;
 struct cred* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 struct cred *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_4();
 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_1->thread_keyring);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1);
  return VAR_2;
 }

 return FUNC_2(VAR_1);
}

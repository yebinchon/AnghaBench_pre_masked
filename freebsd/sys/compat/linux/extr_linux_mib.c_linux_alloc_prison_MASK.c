
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {int pr_mtx; } ;
struct linux_prison {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct linux_prison*,struct linux_prison*,int) ;
 int FUNC_1 (struct linux_prison*,int ) ;
 struct linux_prison* FUNC_2 (struct prison*,struct prison**) ;
 int VAR_2 ;
 struct linux_prison* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (struct prison*,int ,void**,struct linux_prison*) ;
 void** FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct prison *VAR_3, struct linux_prison **VAR_4)
{
 struct prison *VAR_5;
 struct linux_prison *VAR_6, *VAR_7;
 void **VAR_8;


 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_5 == VAR_3)
  goto done;




 FUNC_5(&VAR_5->pr_mtx);
 VAR_7 = FUNC_3(sizeof(struct linux_prison), VAR_0, VAR_1);
 VAR_8 = FUNC_8(VAR_2);
 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_5 == VAR_3) {
  FUNC_1(VAR_7, VAR_0);
  FUNC_6(VAR_8);
  goto done;
 }

 FUNC_4(&VAR_3->pr_mtx);
 (void)FUNC_7(VAR_3, VAR_2, VAR_8, VAR_7);
 FUNC_0(VAR_6, VAR_7, sizeof(*VAR_6));
 VAR_6 = VAR_7;
 FUNC_5(&VAR_5->pr_mtx);
 done:
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;
 else
  FUNC_5(&VAR_3->pr_mtx);
}

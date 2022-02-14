
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (int ,int ,int *,int ,int *,struct lwp**,char*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_8()
{
 struct lwp *VAR_8;
 int VAR_9;

 FUNC_6(&VAR_5, VAR_2, VAR_0);
 FUNC_0(&VAR_4, "jooei");
 VAR_9 = FUNC_3(VAR_3, VAR_1, ((void*)0),
     VAR_6, ((void*)0), &VAR_8, "ktest");
 if (VAR_9)
  FUNC_7("thread creation failed: %d", VAR_9);

 FUNC_4(&VAR_5);
 while (VAR_7 == 0)
  FUNC_1(&VAR_4, &VAR_5);
 FUNC_5(&VAR_5);


 FUNC_2("take1", 0, 1, ((void*)0));
}

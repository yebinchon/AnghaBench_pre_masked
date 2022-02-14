
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct pidfh* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (struct pidfh*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct pidfh *VAR_4;
 pid_t VAR_5;

 VAR_4 = FUNC_1(VAR_2, 0600, &VAR_5);
 if (VAR_4 != ((void*)0)) {

  FUNC_2(VAR_4);
  return;
 }
 if (VAR_3 != VAR_0) {

  return;
 }

 FUNC_0(VAR_5, VAR_1);
}

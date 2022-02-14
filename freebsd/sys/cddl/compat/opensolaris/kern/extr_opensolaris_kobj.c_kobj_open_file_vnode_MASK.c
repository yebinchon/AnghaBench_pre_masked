
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct nameidata {void* ni_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,char const*,struct thread*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,int ) ;
 struct thread* VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (struct nameidata*,int*,int ,int ,int ,int *) ;

__attribute__((used)) static void *
FUNC_5(const char *VAR_6)
{
 struct thread *VAR_7 = VAR_5;
 struct nameidata VAR_8;
 int VAR_9, VAR_10;

 FUNC_3();

 VAR_10 = VAR_0 | VAR_3;
 FUNC_1(&VAR_8, VAR_1, 0, VAR_4, VAR_6, VAR_7);
 VAR_9 = FUNC_4(&VAR_8, &VAR_10, 0, 0, VAR_5->td_ucred, ((void*)0));
 if (VAR_9 != 0)
  return (((void*)0));
 FUNC_0(&VAR_8, VAR_2);

 FUNC_2(VAR_8.ni_vp, 0);
 return (VAR_8.ni_vp);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct __sysctlbyname_args {int * oldlenp; int newlen; int new; int old; int namelen; int name; } ;
typedef int rv ;


 int FUNC_0 (size_t*,int *,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int *,int ,int ,size_t*,int ,int ) ;

int
FUNC_2(struct thread *VAR_0, struct __sysctlbyname_args *VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->name, VAR_1->namelen, VAR_1->old,
     VAR_1->oldlenp, VAR_1->new, VAR_1->newlen, &VAR_2, 0, 0);
 if (VAR_3 != 0)
  return (VAR_3);
 if (VAR_1->oldlenp != ((void*)0))
  VAR_3 = FUNC_0(&VAR_2, VAR_1->oldlenp, sizeof(VAR_2));

 return (VAR_3);
}

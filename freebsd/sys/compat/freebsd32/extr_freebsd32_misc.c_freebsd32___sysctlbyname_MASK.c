
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct thread {int dummy; } ;
struct freebsd32___sysctlbyname_args {int * oldlenp; int newlen; int new; int old; int namelen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (struct thread*,int ,int ,int ,size_t*,int ,int ,size_t*,int ,int) ;
 int FUNC_2 (int *,size_t) ;

int
FUNC_3(struct thread *VAR_2,
    struct freebsd32___sysctlbyname_args *VAR_3)
{
 size_t VAR_4, VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 if (VAR_3->oldlenp != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_3->oldlenp, &VAR_7);
  VAR_4 = VAR_7;
 } else {
  VAR_6 = VAR_4 = 0;
 }
 if (VAR_6 != 0)
  return (VAR_0);
 VAR_6 = FUNC_1(VAR_2, VAR_3->name, VAR_3->namelen, VAR_3->old,
     &VAR_4, VAR_3->new, VAR_3->newlen, &VAR_5, VAR_1, 1);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_3->oldlenp != ((void*)0))
  VAR_6 = FUNC_2(VAR_3->oldlenp, VAR_5);

 return (VAR_6);
}

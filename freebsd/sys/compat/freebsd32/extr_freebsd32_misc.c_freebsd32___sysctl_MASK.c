
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct thread {int dummy; } ;
struct freebsd32___sysctl_args {int namelen; scalar_t__ oldlenp; int newlen; int new; int old; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (scalar_t__,size_t*) ;
 int FUNC_2 (scalar_t__,size_t) ;
 int FUNC_3 (struct thread*,int*,int,int ,size_t*,int,int ,int ,size_t*,int ) ;

int
FUNC_4(struct thread *VAR_4, struct freebsd32___sysctl_args *VAR_5)
{
 int VAR_6, VAR_7[VAR_0];
 size_t VAR_8, VAR_9;
 uint32_t VAR_10;

 if (VAR_5->namelen > VAR_0 || VAR_5->namelen < 2)
  return (VAR_2);
  VAR_6 = FUNC_0(VAR_5->name, VAR_7, VAR_5->namelen * sizeof(int));
  if (VAR_6)
  return (VAR_6);
 if (VAR_5->oldlenp) {
  VAR_6 = FUNC_1(VAR_5->oldlenp, &VAR_10);
  VAR_9 = VAR_10;
 } else {
  VAR_9 = 0;
 }
 if (VAR_6 != 0)
  return (VAR_1);
 VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_5->namelen,
  VAR_5->old, &VAR_9, 1,
  VAR_5->new, VAR_5->newlen, &VAR_8, VAR_3);
 if (VAR_6)
  return (VAR_6);
 if (VAR_5->oldlenp)
  FUNC_2(VAR_5->oldlenp, VAR_8);
 return (0);
}

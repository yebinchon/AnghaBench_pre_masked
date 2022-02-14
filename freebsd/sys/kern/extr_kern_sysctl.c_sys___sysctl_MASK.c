
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sysctl_args {int namelen; int oldlenp; int newlen; int new; int old; int name; } ;
typedef int j ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int**,int) ;
 int FUNC_1 (size_t*,int ,int) ;
 int FUNC_2 (struct thread*,int*,int,int ,int ,int ,int ,int ,size_t*,int ) ;

int
FUNC_3(struct thread *VAR_3, struct sysctl_args *VAR_4)
{
 int VAR_5, VAR_6, VAR_7[VAR_0];
 size_t VAR_8;

 if (VAR_4->namelen > VAR_0 || VAR_4->namelen < 2)
  return (VAR_1);

  VAR_5 = FUNC_0(VAR_4->name, &VAR_7, VAR_4->namelen * sizeof(int));
  if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_2(VAR_3, VAR_7, VAR_4->namelen,
  VAR_4->old, VAR_4->oldlenp, 0,
  VAR_4->new, VAR_4->newlen, &VAR_8, 0);
 if (VAR_5 && VAR_5 != VAR_2)
  return (VAR_5);
 if (VAR_4->oldlenp) {
  VAR_6 = FUNC_1(&VAR_8, VAR_4->oldlenp, sizeof(VAR_8));
  if (VAR_6)
   return (VAR_6);
 }
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
struct freebsd11_statfs {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct freebsd11_statfs*,struct statfs*) ;
 int FUNC_2 (struct statfs*,long,int) ;
 int VAR_3 ;
 int FUNC_3 (struct freebsd11_statfs*) ;
 struct freebsd11_statfs* FUNC_4 (int) ;
 int FUNC_5 (int ,struct freebsd11_statfs*,int,int) ;

int
FUNC_6(struct statfs *VAR_4, long VAR_5, int VAR_6)
{
 struct freebsd11_statfs *VAR_7 = ((void*)0);
 ssize_t VAR_8 = 0;
 int VAR_9, VAR_10;

 if (FUNC_0() >= VAR_1)
  return (FUNC_2(VAR_4, VAR_5, VAR_6));
 if (VAR_4 != ((void*)0)) {
  VAR_8 = sizeof(struct freebsd11_statfs) *
      (VAR_5 / sizeof(struct statfs));
  VAR_7 = FUNC_4(VAR_8);
  if (VAR_7 == ((void*)0)) {
   VAR_3 = VAR_0;
   return (-1);
  }
 }
 VAR_9 = FUNC_5(VAR_2, VAR_7, VAR_8, VAR_6);
 if (VAR_9 != -1 && VAR_4 != ((void*)0)) {
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   FUNC_1(&VAR_7[VAR_10], &VAR_4[VAR_10]);
 }
 FUNC_3(VAR_7);
 return (VAR_9);
}

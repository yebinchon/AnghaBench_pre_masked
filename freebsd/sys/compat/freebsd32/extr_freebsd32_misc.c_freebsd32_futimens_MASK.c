
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts32 ;
struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_futimens_args {int fd; int * times; } ;


 int FUNC_0 (struct timespec32,struct timespec,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct timespec32*,int) ;
 int FUNC_2 (struct thread*,int ,struct timespec*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_3(struct thread *VAR_3, struct freebsd32_futimens_args *VAR_4)
{
 struct timespec32 VAR_5[2];
 struct timespec VAR_6[2], *VAR_7;
 int VAR_8;

 if (VAR_4->times != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_4->times, VAR_5, sizeof(VAR_5));
  if (VAR_8)
   return (VAR_8);
  FUNC_0(VAR_5[0], VAR_6[0], VAR_2);
  FUNC_0(VAR_5[0], VAR_6[0], VAR_1);
  FUNC_0(VAR_5[1], VAR_6[1], VAR_2);
  FUNC_0(VAR_5[1], VAR_6[1], VAR_1);
  VAR_7 = VAR_6;
 } else
  VAR_7 = ((void*)0);
 return (FUNC_2(VAR_3, VAR_4->fd, VAR_7, VAR_0));
}

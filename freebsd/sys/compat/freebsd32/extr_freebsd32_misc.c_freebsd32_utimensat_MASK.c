
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts32 ;
struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_utimensat_args {int flag; int path; int fd; int * times; } ;


 int FUNC_0 (struct timespec32,struct timespec,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct timespec32*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,struct timespec*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(struct thread *VAR_4, struct freebsd32_utimensat_args *VAR_5)
{
 struct timespec32 VAR_6[2];
 struct timespec VAR_7[2], *VAR_8;
 int VAR_9;

 if (VAR_5->times != ((void*)0)) {
  VAR_9 = FUNC_1(VAR_5->times, VAR_6, sizeof(VAR_6));
  if (VAR_9)
   return (VAR_9);
  FUNC_0(VAR_6[0], VAR_7[0], VAR_3);
  FUNC_0(VAR_6[0], VAR_7[0], VAR_2);
  FUNC_0(VAR_6[1], VAR_7[1], VAR_3);
  FUNC_0(VAR_6[1], VAR_7[1], VAR_2);
  VAR_8 = VAR_7;
 } else
  VAR_8 = ((void*)0);
 return (FUNC_2(VAR_4, VAR_5->fd, VAR_5->path, VAR_1,
     VAR_8, VAR_0, VAR_5->flag));
}

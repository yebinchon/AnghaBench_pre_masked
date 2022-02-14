
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval32 {int dummy; } ;
struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_lutimes_args {int path; int * tptr; } ;
typedef int s32 ;


 int FUNC_0 (struct timeval32,struct timeval,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct timeval32*,int) ;
 int FUNC_2 (struct thread*,int ,int ,struct timeval*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(struct thread *VAR_4, struct freebsd32_lutimes_args *VAR_5)
{
 struct timeval32 VAR_6[2];
 struct timeval VAR_7[2], *VAR_8;
 int VAR_9;

 if (VAR_5->tptr != ((void*)0)) {
  VAR_9 = FUNC_1(VAR_5->tptr, VAR_6, sizeof(VAR_6));
  if (VAR_9)
   return (VAR_9);
  FUNC_0(VAR_6[0], VAR_7[0], VAR_2);
  FUNC_0(VAR_6[0], VAR_7[0], VAR_3);
  FUNC_0(VAR_6[1], VAR_7[1], VAR_2);
  FUNC_0(VAR_6[1], VAR_7[1], VAR_3);
  VAR_8 = VAR_7;
 } else
  VAR_8 = ((void*)0);
 return (FUNC_2(VAR_4, VAR_5->path, VAR_1, VAR_8, VAR_0));
}

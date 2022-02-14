
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval32 {int dummy; } ;
struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_utimes_args {int path; int * tptr; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct timeval32,struct timeval,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct timeval32*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,struct timeval*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_3(struct thread *VAR_5, struct freebsd32_utimes_args *VAR_6)
{
 struct timeval32 VAR_7[2];
 struct timeval VAR_8[2], *VAR_9;
 int VAR_10;

 if (VAR_6->tptr != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_6->tptr, VAR_7, sizeof(VAR_7));
  if (VAR_10)
   return (VAR_10);
  FUNC_0(VAR_7[0], VAR_8[0], VAR_3);
  FUNC_0(VAR_7[0], VAR_8[0], VAR_4);
  FUNC_0(VAR_7[1], VAR_8[1], VAR_3);
  FUNC_0(VAR_7[1], VAR_8[1], VAR_4);
  VAR_9 = VAR_8;
 } else
  VAR_9 = ((void*)0);
 return (FUNC_2(VAR_5, VAR_0, VAR_6->path, VAR_2,
     VAR_9, VAR_1));
}

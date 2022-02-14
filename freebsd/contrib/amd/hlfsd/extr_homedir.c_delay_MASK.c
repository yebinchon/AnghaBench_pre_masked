
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ child; } ;
typedef TYPE_1__ uid2home_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (char*,long,int) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static void
FUNC_2(uid2home_t *VAR_0, int VAR_1)
{
  struct timeval VAR_2;

  if (VAR_0)
    FUNC_0("delaying on child %ld for %d seconds", (long) VAR_0->child, VAR_1);

  VAR_2.tv_usec = 0;

  do {
    VAR_2.tv_sec = VAR_1;
    if (FUNC_1(0, ((void*)0), ((void*)0), ((void*)0), &VAR_2) == 0)
      break;
  } while (--VAR_1 && VAR_0->child);
}

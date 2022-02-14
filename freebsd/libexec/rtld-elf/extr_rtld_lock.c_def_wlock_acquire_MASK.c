
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_2__ {int lock; } ;
typedef TYPE_1__ Lock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(void *VAR_6)
{
 Lock *VAR_7;
 sigset_t VAR_8;

 VAR_7 = (Lock *)VAR_6;
 for (;;) {
  FUNC_2(VAR_0, &VAR_3, &VAR_8);
  if (FUNC_0(&VAR_7->lock, 0, VAR_2))
   break;
  FUNC_2(VAR_1, &VAR_8, ((void*)0));
 }
 if (FUNC_1(&VAR_5, 1) == 0)
  VAR_4 = VAR_8;
}

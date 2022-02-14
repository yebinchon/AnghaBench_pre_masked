
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pthread {int dummy; } ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ pthread_once_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pthread*,int ) ;
 int FUNC_1 (struct pthread*,int ,TYPE_1__*) ;
 struct pthread* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int,int *,int ) ;
 int FUNC_5 (int*,int ,int ) ;
 scalar_t__ FUNC_6 (int*,int,int) ;
 scalar_t__ FUNC_7 (int*,int,int) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 () ;
 int VAR_6 ;

int
FUNC_10(pthread_once_t *VAR_7, void (*VAR_8)(void))
{
 struct pthread *VAR_9;
 int VAR_10;

 FUNC_3();

 for (;;) {
  VAR_10 = VAR_7->state;
  if (VAR_10 == VAR_2) {
   FUNC_9();
   return (0);
  }
  if (VAR_10 == VAR_4) {
   if (FUNC_6(&VAR_7->state, VAR_10,
       VAR_3))
    break;
  } else if (VAR_10 == VAR_3) {
   if (FUNC_6(&VAR_7->state, VAR_10,
       VAR_5))
    FUNC_4(&VAR_7->state,
        VAR_5, ((void*)0), 0);
  } else if (VAR_10 == VAR_5) {
   FUNC_4(&VAR_7->state, VAR_10,
       ((void*)0), 0);
  } else
   return (VAR_0);
        }

 VAR_9 = FUNC_2();
 FUNC_1(VAR_9, VAR_6, VAR_7);
 VAR_8();
 FUNC_0(VAR_9, 0);
 if (FUNC_7(&VAR_7->state, VAR_3,
     VAR_2))
  return (0);
 FUNC_8(&VAR_7->state, VAR_2);
 FUNC_5(&VAR_7->state, VAR_1, 0);
 return (0);
}

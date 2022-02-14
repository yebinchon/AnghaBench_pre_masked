
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pthread {int dummy; } ;
typedef TYPE_1__* pthread_t ;
struct TYPE_6__ {int cancel_pending; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pthread*,TYPE_1__*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(pthread_t VAR_2)
{
 struct pthread *VAR_3 = FUNC_1();
 int VAR_4;






 if ((VAR_4 = FUNC_2(VAR_3, VAR_2, 0)) == 0) {
  if (!VAR_2->cancel_pending) {
   VAR_2->cancel_pending = 1;
   if (VAR_2->state != VAR_0)
    FUNC_3(VAR_2, VAR_1);
  }
  FUNC_0(VAR_3, VAR_2);
 }
 return (VAR_4);
}

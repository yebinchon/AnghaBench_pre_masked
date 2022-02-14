
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sigev_notify; } ;
struct aiocb {TYPE_1__ aio_sigevent; } ;
typedef int ssize_t ;
typedef int sigev_id_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct aiocb*) ;
 int FUNC_4 (struct aiocb*) ;
 int VAR_4 ;

ssize_t
FUNC_5(struct aiocb *VAR_5)
{

 if (VAR_5->aio_sigevent.sigev_notify == VAR_2) {
  if (FUNC_3(VAR_5) == VAR_0) {





   VAR_4 = VAR_1;
   return (-1);
  }
  FUNC_1();
  FUNC_0(VAR_3, (sigev_id_t)VAR_5);
  FUNC_2();
 }

 return FUNC_4(VAR_5);
}

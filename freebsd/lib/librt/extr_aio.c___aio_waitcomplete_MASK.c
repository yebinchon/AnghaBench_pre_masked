
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {scalar_t__ sigev_notify; } ;
struct aiocb {TYPE_1__ aio_sigevent; } ;
typedef int ssize_t ;
typedef int sigev_id_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct aiocb**,struct timespec*) ;
 int VAR_2 ;

ssize_t
FUNC_4(struct aiocb **VAR_3, struct timespec *VAR_4)
{
 ssize_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (*VAR_3) {
  if ((*VAR_3)->aio_sigevent.sigev_notify == VAR_0) {
   VAR_6 = VAR_2;
   FUNC_1();
   FUNC_0(VAR_1, (sigev_id_t)(*VAR_3));
   FUNC_2();
   VAR_2 = VAR_6;
  }
 }

 return (VAR_5);
}

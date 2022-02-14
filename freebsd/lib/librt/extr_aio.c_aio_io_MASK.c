
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {scalar_t__ sigev_notify; } ;
struct sigev_node {int dummy; } ;
struct aiocb {struct sigevent aio_sigevent; } ;
typedef int sigev_id_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sigev_node*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct sigevent*,struct sigev_node**,struct sigevent*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct aiocb *VAR_2, int (*VAR_3)(struct aiocb *VAR_4))
{
 struct sigev_node *VAR_5;
 struct sigevent VAR_6;
 int VAR_7, VAR_8;

 if (VAR_2->aio_sigevent.sigev_notify != VAR_0) {
  VAR_7 = VAR_3(VAR_2);
  return (VAR_7);
 }

 VAR_7 = FUNC_3((sigev_id_t)VAR_2, &VAR_2->aio_sigevent, &VAR_5,
         &VAR_6);
 if (VAR_7)
  return (VAR_7);
 VAR_7 = VAR_3(VAR_2);
 VAR_2->aio_sigevent = VAR_6;
 if (VAR_7 != 0) {
  VAR_8 = VAR_1;
  FUNC_1();
  FUNC_0(VAR_5);
  FUNC_2();
  VAR_1 = VAR_8;
 }
 return (VAR_7);
}

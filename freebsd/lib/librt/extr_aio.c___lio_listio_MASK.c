
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {scalar_t__ sigev_notify; } ;
struct sigev_node {int dummy; } ;
struct aiocb {int dummy; } ;
typedef int sigev_id_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sigev_node*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,struct aiocb* const*,int,struct sigevent*) ;
 int FUNC_4 (int ,struct sigevent*,struct sigev_node**,struct sigevent*) ;
 int VAR_1 ;

int
FUNC_5(int VAR_2, struct aiocb * const VAR_3[], int VAR_4,
    struct sigevent *VAR_5)
{
 struct sigev_node *VAR_6;
 struct sigevent VAR_7;
 int VAR_8, VAR_9;

 if (VAR_5 == ((void*)0) || VAR_5->sigev_notify != VAR_0)
  return (FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5));

 VAR_8 = FUNC_4((sigev_id_t)VAR_3, VAR_5, &VAR_6, &VAR_7);
 if (VAR_8)
  return (VAR_8);
 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 *VAR_5 = VAR_7;
 if (VAR_8 != 0) {
  VAR_9 = VAR_1;
  FUNC_1();
  FUNC_0(VAR_6);
  FUNC_2();
  VAR_1 = VAR_9;
 }
 return (VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct itimerspec {struct timespec it_interval; struct timespec it_value; } ;
struct get_neigh_handler {int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int,int ,struct itimerspec*,int *) ;

__attribute__((used)) static int FUNC_4(struct get_neigh_handler *VAR_4)
{
 int VAR_5 = VAR_4->timeout/VAR_1;
 struct timespec VAR_6 = {
  .tv_sec = VAR_5 / 1000,
  .tv_nsec = (VAR_5 % 1000) * 1000000
 };
 struct itimerspec VAR_7 = {.it_value = VAR_6};
 int VAR_8;

 VAR_8 = FUNC_2(VAR_0, VAR_3 | VAR_2);
 if (VAR_8 == -1)
  return VAR_8;

 if (VAR_4->timeout) {
  if (VAR_1 <= 1)
   FUNC_0(&VAR_7.it_interval,
         sizeof(VAR_7.it_interval));
  else
   VAR_7.it_interval = VAR_6;
  if (FUNC_3(VAR_8, 0, &VAR_7, ((void*)0))) {
   FUNC_1(VAR_8);
   return -1;
  }
 }

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef struct pthread* pthread_t ;
typedef int lwpid_t ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pthread*,struct pthread*) ;
 int FUNC_1 (struct pthread*) ;
 struct pthread* FUNC_2 () ;
 int FUNC_3 (struct pthread*,struct pthread*,int ) ;
 int FUNC_4 (int ,int ,int,size_t,int const*) ;
 int VAR_2 ;

int
FUNC_5(pthread_t VAR_3, size_t VAR_4, const cpuset_t *VAR_5)
{
 struct pthread *VAR_6 = FUNC_2();
 lwpid_t VAR_7;
 int VAR_8;

 if (VAR_3 == VAR_6) {
  VAR_8 = FUNC_4(VAR_0, VAR_1,
   -1, VAR_4, VAR_5);
  if (VAR_8 == -1)
   VAR_8 = VAR_2;
 } else if ((VAR_8 = FUNC_3(VAR_6, VAR_3, 0)) == 0) {
  VAR_7 = FUNC_1(VAR_3);
  VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_7,
   VAR_4, VAR_5);
  if (VAR_8 == -1)
   VAR_8 = VAR_2;
  FUNC_0(VAR_6, VAR_3);
 }
 return (VAR_8);
}

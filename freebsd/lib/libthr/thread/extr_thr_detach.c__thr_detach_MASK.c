
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pthread {int dummy; } ;
typedef TYPE_1__* pthread_t ;
struct TYPE_6__ {int flags; int * joiner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pthread*,TYPE_1__*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*,TYPE_1__*,int) ;
 int FUNC_3 (struct pthread*,TYPE_1__*) ;

int
FUNC_4(pthread_t VAR_2)
{
 struct pthread *VAR_3 = FUNC_1();
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 if ((VAR_4 = FUNC_2(VAR_3, VAR_2,
                   1)) != 0) {
  return (VAR_4);
 }


 if ((VAR_2->flags & VAR_1) != 0 ||
     (VAR_2->joiner != ((void*)0))) {
  FUNC_0(VAR_3, VAR_2);
  return (VAR_0);
 }


 VAR_2->flags |= VAR_1;
 FUNC_3(VAR_3, VAR_2);

 return (0);
}

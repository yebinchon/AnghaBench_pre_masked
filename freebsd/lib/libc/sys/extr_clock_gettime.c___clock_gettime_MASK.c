
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,struct timespec*) ;
 int * VAR_1 ;

int
FUNC_2(clockid_t VAR_2, struct timespec *VAR_3)
{
 int VAR_4;

 if (&FUNC_1 != ((void*)0) && VAR_1 != ((void*)0))
  VAR_4 = FUNC_1(VAR_2, VAR_3);
 else
  VAR_4 = VAR_0;
 if (VAR_4 == VAR_0)
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 return (VAR_4);
}

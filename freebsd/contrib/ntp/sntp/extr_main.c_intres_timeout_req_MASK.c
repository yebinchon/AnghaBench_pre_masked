
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,struct timeval*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int,int,int *,int *) ;
 int VAR_4 ;

void
FUNC_4(
 u_int VAR_5
 )
{
 struct timeval VAR_6;

 if (((void*)0) == VAR_3) {
  VAR_3 = FUNC_3(VAR_2, -1,
           VAR_1 | VAR_0,
           &VAR_4, ((void*)0));
  FUNC_0(((void*)0) != VAR_3);
 } else {
  FUNC_2(VAR_3);
 }
 if (0 == VAR_5)
  return;
 VAR_6.tv_sec = VAR_5;
 VAR_6.tv_usec = 0;
 FUNC_1(VAR_3, &VAR_6);
}

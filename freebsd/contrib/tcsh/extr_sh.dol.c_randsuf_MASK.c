
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int Char ;


 int FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 int * FUNC_2 (int) ;

Char *
FUNC_3(void) {

 struct timeval VAR_0;
 (void) FUNC_1(&VAR_0, ((void*)0));
 return FUNC_2((((tcsh_number_t)VAR_0.tv_sec) ^
     ((tcsh_number_t)VAR_0.tv_usec) ^
     ((tcsh_number_t)FUNC_0())) & 0x00ffffff);



}

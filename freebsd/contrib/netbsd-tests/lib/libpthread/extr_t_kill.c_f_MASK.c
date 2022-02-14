
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threadinfo {int gotsignal; } ;



__attribute__((used)) static void *
FUNC_0(void *VAR_0)
{
 struct threadinfo volatile *VAR_1 = VAR_0;

 while (VAR_1->gotsignal < 1) {

 }

 return ((void*)0);
}

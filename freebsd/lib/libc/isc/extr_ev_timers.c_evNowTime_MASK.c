
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,struct timespec*) ;
 struct timespec FUNC_1 (int ,int ) ;
 struct timespec FUNC_2 (struct timeval) ;
 scalar_t__ FUNC_3 (struct timeval*,int *) ;

struct timespec
FUNC_4(void) {
 struct timeval VAR_3;
 if (FUNC_3(&VAR_3, ((void*)0)) < 0)
  return (FUNC_1(0, 0));
 return (FUNC_2(VAR_3));
}

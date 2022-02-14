
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int useconds_t ;
typedef struct timespec {int tv_nsec; int tv_sec; } const timespec ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct timespec const*,struct timespec const*) ;

int
FUNC_1(useconds_t VAR_2)
{
 struct timespec VAR_3;

 VAR_3.tv_nsec = (VAR_2 % 1000000) * 1000;
 VAR_3.tv_sec = VAR_2 / 1000000;
 return (((int (*)(const struct timespec *, struct timespec *))
     VAR_1[VAR_0])(&VAR_3, ((void*)0)));
}

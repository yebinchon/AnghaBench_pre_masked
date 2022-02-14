
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct timespec {unsigned int tv_sec; scalar_t__ tv_nsec; } const timespec ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct timespec const*,struct timespec const*) ;

unsigned int
FUNC_1(unsigned int VAR_5)
{
 struct timespec VAR_6;
 struct timespec VAR_7;





 if (VAR_5 > VAR_2)
  return (VAR_5 - VAR_2 + FUNC_1(VAR_2));

 VAR_6.tv_sec = VAR_5;
 VAR_6.tv_nsec = 0;
 if (((int (*)(const struct timespec *, struct timespec *))
     VAR_3[VAR_1])(
     &VAR_6, &VAR_7) != -1)
  return (0);
 if (VAR_4 != VAR_0)
  return (VAR_5);
 return (VAR_7.tv_sec +
     (VAR_7.tv_nsec != 0));
}

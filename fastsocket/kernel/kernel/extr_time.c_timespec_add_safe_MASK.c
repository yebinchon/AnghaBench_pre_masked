
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timespec*,scalar_t__,scalar_t__) ;

struct timespec FUNC_1(const struct timespec VAR_1,
      const struct timespec VAR_2)
{
 struct timespec VAR_3;

 FUNC_0(&VAR_3, VAR_1.tv_sec + VAR_2.tv_sec,
    VAR_1.tv_nsec + VAR_2.tv_nsec);

 if (VAR_3.tv_sec < VAR_1.tv_sec || VAR_3.tv_sec < VAR_2.tv_sec)
  VAR_3.tv_sec = VAR_0;

 return VAR_3;
}

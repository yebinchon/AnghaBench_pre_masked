
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, struct timespec *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 == 0)
  return (VAR_0);

 VAR_2->tv_sec = VAR_3;
 VAR_2->tv_nsec = 0;

 return (0);
}

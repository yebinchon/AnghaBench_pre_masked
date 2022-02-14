
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int suseconds_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int UINT16 ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static int
FUNC_1(UINT16 VAR_0)
{
 struct timeval VAR_1;

 VAR_1.tv_sec = (time_t)(VAR_0 / 1000);
 VAR_1.tv_usec = (suseconds_t)(VAR_0 % 1000) * 1000;

 return (FUNC_0(&VAR_1));
}

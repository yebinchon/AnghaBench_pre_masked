
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned int tv_sec; unsigned int tv_nsec; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_0 () ;

void
FUNC_1(unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, int VAR_8,
    struct timespec *VAR_9)
{
 unsigned VAR_10;


 VAR_9->tv_sec = (VAR_6 & 0x1f) << 1;
 VAR_9->tv_sec += ((VAR_6 & 0x7e0) >> 5) * 60;
 VAR_9->tv_sec += ((VAR_6 & 0xf800) >> 11) * 3600;
 VAR_9->tv_sec += VAR_7 / 100;
 VAR_9->tv_nsec = (VAR_7 % 100) * 10000000;


 VAR_10 = (VAR_5 & 0x1f) - 1;


 VAR_10 += VAR_2 * ((VAR_5 >> 11) & 0x1f);


 VAR_10 += VAR_4[(VAR_5 >> 5) & 0x3f];





 if (VAR_10 >= ((2100 - 1980) / 4 * VAR_2 + VAR_1))
  VAR_10--;


 VAR_10 += VAR_3;

 VAR_9->tv_sec += VAR_0 * VAR_10;
 if (!VAR_8)
  VAR_9->tv_sec += FUNC_0();
}

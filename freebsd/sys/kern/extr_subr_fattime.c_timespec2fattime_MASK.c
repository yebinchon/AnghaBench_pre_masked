
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_2__ {unsigned int days; scalar_t__ coded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 () ;

void
FUNC_1(const struct timespec *VAR_5, int VAR_6, uint16_t *VAR_7,
    uint16_t *VAR_8, uint8_t *VAR_9)
{
 time_t VAR_10;
 unsigned VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_5->tv_sec;
 if (!VAR_6)
  VAR_10 -= FUNC_0();

 if (VAR_9 != ((void*)0))
  *VAR_9 = (VAR_5->tv_sec & 1) * 100 + VAR_5->tv_nsec / 10000000;
 if (VAR_8 != ((void*)0)) {
  *VAR_8 = (VAR_10 / 2) % 30;
  *VAR_8 |= ((VAR_10 / 60) % 60) << 5;
  *VAR_8 |= ((VAR_10 / 3600) % 24) << 11;
 }
 if (VAR_7 != ((void*)0)) {
  VAR_11 = VAR_10 / VAR_0;
  if (VAR_11 < VAR_3) {

   *VAR_7 = 0x0021;
  } else {
   VAR_11 -= VAR_3;





   if (VAR_11 >= ((2100 - 1980) / 4 * VAR_2 + VAR_1))
    VAR_11++;


   VAR_12 = VAR_11 / VAR_2;
   *VAR_7 = (VAR_12 * 4) << 9;
   VAR_11 -= VAR_12 * VAR_2;


   VAR_13 = VAR_11 / 32;


   while (VAR_13 < 47 && VAR_4[VAR_13 + 1].days <= VAR_11)
    VAR_13++;


   *VAR_7 += VAR_4[VAR_13].coded;


   VAR_11 -= VAR_4[VAR_13].days - 1;
   *VAR_7 |= VAR_11;
  }
 }
}

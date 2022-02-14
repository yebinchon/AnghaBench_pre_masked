
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,...) ;

__attribute__((used)) static uint32_t
FUNC_2(struct timeval VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;






 if (VAR_5.tv_sec == 0) {
  if (VAR_5.tv_usec == 0)
   return (0);
  VAR_8 = 0;
  VAR_7 = VAR_5.tv_usec;
 } else {




  VAR_6 = FUNC_0(VAR_5.tv_sec) - 1;
  if (VAR_6 + VAR_3 < VAR_0) {
   VAR_8 = 0;
   VAR_7 = 1000000 * VAR_5.tv_sec + VAR_5.tv_usec;
  } else {
   VAR_8 = VAR_6 + VAR_3 - VAR_0;
   VAR_7 = (unsigned int)(((uint64_t)1000000 * VAR_5.tv_sec +
       VAR_5.tv_usec) >> VAR_8);
  }
 }

 VAR_9 = FUNC_0(VAR_7) - 1;
 VAR_10 = VAR_1 - VAR_9 - 1;






 return (((VAR_2 - 1 + VAR_8 + VAR_9) << (VAR_1 - 1)) |
     ((VAR_10 > 0 ? VAR_7 << VAR_10 : VAR_7 >> -VAR_10) & VAR_4));
}

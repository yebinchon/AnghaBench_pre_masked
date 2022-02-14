
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_6__ {size_t ncodechars; unsigned int* codechars; struct timeval* codetimes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*,TYPE_1__*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct timeval*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (char*,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_5 ;

void
FUNC_4(
 unsigned int VAR_6,
 struct timeval *VAR_7
 )
{
 static struct timeval VAR_8[10];
 struct timeval VAR_9;
 l_fp VAR_10;

 if ((VAR_6 & 0xf) > 9 || ((VAR_6>>4)&0xf) > 9) {
  if (VAR_3)
      (void) FUNC_2(VAR_5,
       "character %02x failed BCD test\n", VAR_6);
  VAR_2.ncodechars = 0;
  return;
 }

 if (VAR_2.ncodechars > 0) {
  VAR_9.tv_sec = VAR_7->tv_sec
   - VAR_2.codetimes[VAR_2.ncodechars].tv_sec;
  VAR_9.tv_usec = VAR_7->tv_usec
   - VAR_2.codetimes[VAR_2.ncodechars].tv_usec;
  if (VAR_9.tv_usec < 0) {
   VAR_9.tv_sec--;
   VAR_9.tv_usec += 1000000;
  }







 }

 VAR_2.codechars[VAR_2.ncodechars] = VAR_6;
 VAR_2.codetimes[VAR_2.ncodechars] = *VAR_7;
 if (VAR_2.ncodechars > 0)
     VAR_8[VAR_2.ncodechars] = VAR_9;
 if (++VAR_2.ncodechars == 10) {
  if (VAR_4) {
   FUNC_0(&VAR_2.codetimes[VAR_1-1], &VAR_10);
   VAR_10.l_ui += VAR_0;
   FUNC_1(&VAR_2, &VAR_2.codetimes[VAR_1-1]);
  } else {
   register int VAR_11;

   for (VAR_11 = 0; VAR_11 < VAR_2.ncodechars; VAR_11++) {
    (void) FUNC_3("%x%x\t%lu.%06lu\t%lu.%06lu\n",
           VAR_2.codechars[VAR_11] & 0xf,
           (VAR_2.codechars[VAR_11] >>4 ) & 0xf,
           VAR_2.codetimes[VAR_11].tv_sec,
           VAR_2.codetimes[VAR_11].tv_usec,
           VAR_8[VAR_11].tv_sec, VAR_8[VAR_11].tv_usec);
   }
  }
  VAR_2.ncodechars = 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct chucode {int* codechars; TYPE_2__* codetimes; } ;
struct TYPE_4__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_5__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 char* VAR_3 ;
 int FUNC_5 (int,char*,int) ;
 int VAR_4 ;

int
FUNC_6(
 int VAR_5
 )
{
 struct chucode VAR_6;
 int VAR_7;
 register int VAR_8;
 struct timeval VAR_9;
 l_fp VAR_10;
 void FUNC_7();

 while ((VAR_7 = FUNC_5(VAR_5, (char *)&VAR_6, sizeof VAR_6)) > 0) {
  if (VAR_7 != sizeof VAR_6) {
   (void) FUNC_3(VAR_4, "Expected %lu, got %d\n",
           sizeof VAR_6, VAR_7);
   continue;
  }

  if (VAR_2) {
   FUNC_0(&VAR_6.codetimes[VAR_1-1], &VAR_10);
   VAR_10.l_ui += VAR_0;
   FUNC_7(&VAR_6, &VAR_10);
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_8 == 0)
        VAR_9.tv_sec = VAR_9.tv_usec = 0;
    else {
     VAR_9.tv_sec = VAR_6.codetimes[VAR_8].tv_sec
      - VAR_6.codetimes[VAR_8-1].tv_sec;
     VAR_9.tv_usec = VAR_6.codetimes[VAR_8].tv_usec
      - VAR_6.codetimes[VAR_8-1].tv_usec;
     if (VAR_9.tv_usec < 0) {
      VAR_9.tv_sec--;
      VAR_9.tv_usec += 1000000;
     }
    }
    (void) FUNC_4("%x%x\t%lu.%06lu\t%lu.%06lu\n",
           VAR_6.codechars[VAR_8] & 0xf, (VAR_6.codechars[VAR_8]>>4)&0xf,
           VAR_6.codetimes[VAR_8].tv_sec, VAR_6.codetimes[VAR_8].tv_usec,
           VAR_9.tv_sec, VAR_9.tv_usec);
   }
  }
 }
 if (VAR_7 == 0) {
  (void) FUNC_3(VAR_4, "%s: zero returned on read\n", VAR_3);
  FUNC_2(1);
 } else
     FUNC_1("read()", "", "");
}

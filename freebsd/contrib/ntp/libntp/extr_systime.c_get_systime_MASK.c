
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct TYPE_14__ {scalar_t__ l_i; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (double,TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 () ;
 struct timespec FUNC_12 (struct timespec,int) ;
 scalar_t__ FUNC_13 (struct timespec,struct timespec) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct timespec*) ;
 int VAR_3 ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (int ,char*,scalar_t__) ;
 int FUNC_18 () ;
 struct timespec FUNC_19 (struct timespec,struct timespec) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ FUNC_20 (struct timespec) ;

void
FUNC_21(
 l_fp *VAR_9
 )
{
        static struct timespec VAR_10;
 static struct timespec VAR_11;
 static l_fp VAR_12;
 struct timespec VAR_13;
 struct timespec VAR_14;
 struct timespec VAR_15;
 double VAR_16;
 l_fp VAR_17;
 l_fp VAR_18;
 l_fp VAR_19;

 FUNC_15(&VAR_13);
 FUNC_0(VAR_8);
 FUNC_3();
        if (FUNC_13(FUNC_12(VAR_13, 50000000), VAR_10) < 0) {
                VAR_3 = 1;
                VAR_6++;
 }
        VAR_10 = VAR_13;
 if (!FUNC_11()) {
  VAR_14 = FUNC_12(VAR_11, VAR_5);
  if (FUNC_13(VAR_13, VAR_14) < 0) {
   VAR_15 = FUNC_19(VAR_14, VAR_13);
   if (VAR_15.tv_sec > 0 && !VAR_3) {
    FUNC_17(VAR_2,
     "get_systime Lamport advance exceeds one second (%.9f)",
     VAR_15.tv_sec +
         1e-9 * VAR_15.tv_nsec);
    FUNC_14(1);
   }
   if (!VAR_3)
    VAR_13 = VAR_14;
  }
  VAR_11 = VAR_13;
 }


 VAR_17 = FUNC_20(VAR_13);






 VAR_16 = FUNC_18() * 2. / VAR_1 * VAR_4;
 FUNC_2(VAR_16, &VAR_18);
 FUNC_5(&VAR_17, &VAR_18);
 if (!FUNC_11()) {
  if ( !FUNC_7(&VAR_12)
      && !VAR_3
      && (VAR_4 > 0.0)
     ) {
   VAR_19 = VAR_17;
   FUNC_9(&VAR_19, &VAR_12);
   FUNC_10(&VAR_19, 1);
   if (VAR_19.l_i < 0)
   {
    FUNC_8(&VAR_19);
    FUNC_1(1, ("get_systime: postcond failed by %s secs, fixed\n",
         FUNC_16(&VAR_19, 9)));
    VAR_17 = VAR_12;
    FUNC_6(&VAR_17, 1);
    VAR_7++;
   }
  }
  VAR_12 = VAR_17;
  if (VAR_3)
   VAR_3 = VAR_0;
 }
 FUNC_4();
 *VAR_9 = VAR_17;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct ring_buffer_event {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (unsigned long long,int ) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long long FUNC_4 (int ) ;
 int* FUNC_5 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_6 (int ,int) ;
 unsigned long long FUNC_7 (int ) ;
 int FUNC_8 (int ,struct ring_buffer_event*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_14(void)
{
 struct timeval VAR_14;
 struct timeval VAR_15;
 unsigned long long VAR_16;
 unsigned long long VAR_17;
 unsigned long long VAR_18;
 unsigned long VAR_19 = 0;
 unsigned long VAR_20 = 0;
 unsigned long VAR_21;
 int VAR_22 = 0;





 FUNC_11("Starting ring buffer hammer\n");
 FUNC_2(&VAR_14);
 do {
  struct ring_buffer_event *VAR_23;
  int *VAR_24;

  VAR_23 = FUNC_6(VAR_4, 10);
  if (!VAR_23) {
   VAR_19++;
  } else {
   VAR_20++;
   VAR_24 = FUNC_5(VAR_23);
   *VAR_24 = FUNC_9();
   FUNC_8(VAR_4, VAR_23);
  }
  FUNC_2(&VAR_15);

  VAR_22++;
  if (VAR_5 && !(VAR_22 % VAR_13))
   FUNC_13(VAR_5);
  if (VAR_22 % VAR_13)
   FUNC_0();


 } while (VAR_15.tv_sec < (VAR_14.tv_sec + VAR_1) && !VAR_7);
 FUNC_11("End ring buffer hammer\n");

 if (VAR_5) {

  FUNC_3(&VAR_11);
  FUNC_3(&VAR_9);

  FUNC_10();
  VAR_12 = 1;

  FUNC_10();
  FUNC_13(VAR_5);
  FUNC_12(&VAR_9);
 }

 VAR_16 = VAR_15.tv_sec - VAR_14.tv_sec;
 VAR_16 *= VAR_3;
 VAR_16 += (long long)((long)VAR_15.tv_usec - (long)VAR_14.tv_usec);

 VAR_17 = FUNC_4(VAR_4);
 VAR_18 = FUNC_7(VAR_4);

 if (VAR_7)
  FUNC_11("ERROR!\n");
 FUNC_11("Time:     %lld (usecs)\n", VAR_16);
 FUNC_11("Overruns: %lld\n", VAR_18);
 if (VAR_6)
  FUNC_11("Read:     (reader disabled)\n");
 else
  FUNC_11("Read:     %ld  (by %s)\n", VAR_8,
   VAR_10 ? "events" : "pages");
 FUNC_11("Entries:  %lld\n", VAR_17);
 FUNC_11("Total:    %lld\n", VAR_17 + VAR_18 + VAR_8);
 FUNC_11("Missed:   %ld\n", VAR_19);
 FUNC_11("Hit:      %ld\n", VAR_20);


 FUNC_1(VAR_16, VAR_2);
 if (VAR_16)
  VAR_20 /= (long)VAR_16;
 else
  FUNC_11("TIME IS ZERO??\n");

 FUNC_11("Entries per millisec: %ld\n", VAR_20);

 if (VAR_20) {

  VAR_21 = VAR_0 / VAR_20;
  FUNC_11("%ld ns per entry\n", VAR_21);
 }

 if (VAR_19) {
  if (VAR_16)
   VAR_19 /= (long)VAR_16;

  FUNC_11("Total iterations per millisec: %ld\n",
        VAR_20 + VAR_19);


  if (!(VAR_20 + VAR_19)) {
   FUNC_11("hit + missed overflowed and totalled zero!\n");
   VAR_20--;
  }


  VAR_21 = VAR_0 / (VAR_20 + VAR_19);
  FUNC_11("%ld ns per entry\n", VAR_21);
 }
}

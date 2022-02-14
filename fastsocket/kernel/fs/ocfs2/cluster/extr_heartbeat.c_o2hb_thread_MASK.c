
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct o2hb_region {unsigned int hr_timeout_ms; int hr_blocks; int * hr_slots; int hr_unclean_stop; } ;
struct o2hb_bio_wait_ctxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct o2hb_region*) ;
 int FUNC_6 (struct o2hb_region*) ;
 unsigned int FUNC_7 (struct timeval*,struct timeval*) ;
 int FUNC_8 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*) ;
 int FUNC_9 (struct o2hb_region*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(void *VAR_3)
{
 int VAR_4, VAR_5;
 struct o2hb_region *VAR_6 = VAR_3;
 struct o2hb_bio_wait_ctxt VAR_7;
 struct timeval VAR_8, VAR_9;
 unsigned int VAR_10;

 FUNC_2(VAR_0|VAR_1, "hb thread running\n");

 FUNC_12(VAR_2, -20);

 while (!FUNC_1() && !VAR_6->hr_unclean_stop) {





  FUNC_0(&VAR_8);

  VAR_4 = 0;
  do {
   VAR_5 = FUNC_6(VAR_6);
  } while (VAR_5 && ++VAR_4 < 2);

  FUNC_0(&VAR_9);
  VAR_10 = FUNC_7(&VAR_8, &VAR_9);

  FUNC_2(0, "start = %lu.%lu, end = %lu.%lu, msec = %u\n",
       VAR_8.tv_sec, (unsigned long) VAR_8.tv_usec,
       VAR_9.tv_sec, (unsigned long) VAR_9.tv_usec,
       VAR_10);

  if (VAR_10 < VAR_6->hr_timeout_ms) {


   FUNC_4(VAR_6->hr_timeout_ms - VAR_10);
  }
 }

 FUNC_5(VAR_6);


 for(VAR_4 = 0; !VAR_6->hr_unclean_stop && VAR_4 < VAR_6->hr_blocks; VAR_4++)
  FUNC_10(&VAR_6->hr_slots[VAR_4]);







 FUNC_9(VAR_6, 0);
 VAR_5 = FUNC_8(VAR_6, &VAR_7);
 if (VAR_5 == 0) {
  FUNC_11(VAR_6, &VAR_7);
 } else {
  FUNC_3(VAR_5);
 }

 FUNC_2(VAR_0|VAR_1, "hb thread exiting\n");

 return 0;
}

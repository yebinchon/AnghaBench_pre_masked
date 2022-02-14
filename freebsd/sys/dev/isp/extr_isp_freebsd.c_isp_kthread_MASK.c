
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct isp_fc {scalar_t__ loop_seen_once; int loop_down_limit; int loop_down_time; int num_threads; TYPE_3__* isp; } ;
struct TYPE_10__ {struct isp_fc* fc; } ;
struct TYPE_11__ {scalar_t__ is_exiting; TYPE_1__ pc; } ;
struct TYPE_12__ {int isp_lock; TYPE_2__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int,char*,int,...) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (struct isp_fc*,int *,int ,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_9(void *VAR_7)
{
 struct isp_fc *VAR_8 = VAR_7;
 ispsoftc_t *VAR_9 = VAR_8->isp;
 int VAR_10 = VAR_8 - VAR_9->isp_osinfo.pc.fc;
 int VAR_11 = 0, VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_9);
 while (VAR_9->isp_osinfo.is_exiting == 0) {
  FUNC_6(VAR_9, VAR_1|VAR_0,
      "Chan %d Checking FC state", VAR_10);
  VAR_13 = FUNC_3(VAR_9, VAR_10, 250000);
  FUNC_6(VAR_9, VAR_1|VAR_0,
      "Chan %d FC got to %s state", VAR_10,
      FUNC_2(VAR_13));
  if (VAR_13 == VAR_2 || VAR_13 < 0) {
   VAR_11 = 0;
  } else {






   if (VAR_8->loop_seen_once == 0)
    VAR_14 = VAR_5;
   else
    VAR_14 = VAR_8->loop_down_limit;
   VAR_12 = VAR_6 - VAR_8->loop_down_time;
   if (VAR_12 >= VAR_14)
    VAR_11 = 0;
   else if (VAR_12 < 10)
    VAR_11 = 1;
   else if (VAR_12 < 30)
    VAR_11 = 5;
   else if (VAR_12 < 60)
    VAR_11 = 10;
   else if (VAR_12 < 120)
    VAR_11 = 20;
   else
    VAR_11 = 30;
  }

  if (VAR_11 == 0) {
   if (VAR_13 == VAR_2)
    FUNC_5(VAR_9, VAR_10);
   else
    FUNC_4(VAR_9, VAR_10);
  }

  FUNC_6(VAR_9, VAR_1|VAR_0,
      "Chan %d sleep for %d seconds", VAR_10, VAR_11);
  FUNC_8(VAR_8, &VAR_9->isp_lock, VAR_3, "ispf", VAR_11 * VAR_4);
 }
 VAR_8->num_threads -= 1;
 FUNC_1(VAR_9);
 FUNC_7();
}

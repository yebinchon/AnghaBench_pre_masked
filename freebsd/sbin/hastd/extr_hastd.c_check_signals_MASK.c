
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int sigset_t ;
struct TYPE_2__ {int hc_controlconn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;




 TYPE_1__* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *,int *,struct timespec*) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct timespec VAR_3;
 sigset_t VAR_4;
 int VAR_5;

 VAR_3.tv_sec = 0;
 VAR_3.tv_nsec = 0;

 FUNC_1(FUNC_7(&VAR_4) == 0);
 FUNC_1(FUNC_6(&VAR_4, 130) == 0);
 FUNC_1(FUNC_6(&VAR_4, 129) == 0);
 FUNC_1(FUNC_6(&VAR_4, 128) == 0);
 FUNC_1(FUNC_6(&VAR_4, 131) == 0);

 while ((VAR_5 = FUNC_8(&VAR_4, ((void*)0), &VAR_3)) != -1) {
  switch (VAR_5) {
  case 129:
  case 128:
   VAR_2 = 1;
   FUNC_9();
   FUNC_5(VAR_1->hc_controlconn);
   FUNC_3(VAR_0);
   break;
  case 131:
   FUNC_2();
   break;
  case 130:
   FUNC_4();
   break;
  default:
   FUNC_0("Unexpected signal (%d).", VAR_5);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;




 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *,struct timespec*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct timespec VAR_2;
 sigset_t VAR_3;
 int VAR_4;

 VAR_2.tv_sec = 0;
 VAR_2.tv_nsec = 0;

 FUNC_1(FUNC_6(&VAR_3) == 0);
 FUNC_1(FUNC_5(&VAR_3, 130) == 0);
 FUNC_1(FUNC_5(&VAR_3, 129) == 0);
 FUNC_1(FUNC_5(&VAR_3, 128) == 0);
 FUNC_1(FUNC_5(&VAR_3, 131) == 0);

 while ((VAR_4 = FUNC_7(&VAR_3, ((void*)0), &VAR_2)) != -1) {
  switch (VAR_4) {
  case 129:
  case 128:
   VAR_1 = 1;
   FUNC_8();
   FUNC_4(VAR_0);
   break;
  case 131:
   FUNC_3();
   break;
  case 130:
   FUNC_2();
   break;
  default:
   FUNC_0("Unexpected signal (%d).", VAR_4);
  }
 }
}

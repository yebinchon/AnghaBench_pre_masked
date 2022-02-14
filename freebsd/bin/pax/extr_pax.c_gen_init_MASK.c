
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
struct rlimit {int rlim_max; int rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_13 ;
 int FUNC_3 (int ,struct rlimit*) ;
 scalar_t__ FUNC_4 (int ,struct sigaction*) ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (int ,struct sigaction*,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int,int ,char*) ;

__attribute__((used)) static int
FUNC_9(void)
{
 struct rlimit VAR_15;
 struct sigaction VAR_16;





 if (FUNC_0(VAR_0 , &VAR_15) == 0){
  VAR_15.rlim_cur = VAR_15.rlim_max;
  (void)FUNC_3(VAR_0 , &VAR_15);
 }





 if (FUNC_0(VAR_1 , &VAR_15) == 0){
  VAR_15.rlim_cur = VAR_15.rlim_max;
  (void)FUNC_3(VAR_1 , &VAR_15);
 }




 if (FUNC_0(VAR_3 , &VAR_15) == 0){
  VAR_15.rlim_cur = VAR_15.rlim_max;
  (void)FUNC_3(VAR_3 , &VAR_15);
 }




 if (FUNC_0(VAR_2 , &VAR_15) == 0){
  VAR_15.rlim_cur = VAR_15.rlim_max;
  (void)FUNC_3(VAR_2 , &VAR_15);
 }







 if ((FUNC_7(&VAR_13) < 0) || (FUNC_6(&VAR_13, VAR_8) < 0) ||
     (FUNC_6(&VAR_13,VAR_5) < 0)||(FUNC_6(&VAR_13,VAR_4) < 0) ||
     (FUNC_6(&VAR_13,VAR_6) < 0)||(FUNC_6(&VAR_13,VAR_7)<0) ||
     (FUNC_6(&VAR_13,VAR_9) < 0)||(FUNC_6(&VAR_13,VAR_10)<0)) {
  FUNC_2(1, "Unable to set up signal mask");
  return(-1);
 }
 FUNC_1(&VAR_16, 0, sizeof VAR_16);
 VAR_16.sa_mask = VAR_13;
 VAR_16.sa_flags = 0;
 VAR_16.sa_handler = VAR_14;

 if (FUNC_4(VAR_4, &VAR_16) ||
    FUNC_4(VAR_8, &VAR_16) ||
    FUNC_4(VAR_5, &VAR_16) ||
    FUNC_4(VAR_7, &VAR_16) ||
    FUNC_4(VAR_9, &VAR_16))
  goto out;

 VAR_16.sa_handler = VAR_11;
 if ((FUNC_5(VAR_6, &VAR_16, ((void*)0)) < 0) ||
     (FUNC_5(VAR_10, &VAR_16, ((void*)0)) < 0))
  goto out;
 return(0);

    out:
 FUNC_8(1, VAR_12, "Unable to set up signal handler");
 return(-1);
}

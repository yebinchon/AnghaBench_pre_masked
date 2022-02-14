
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int path ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int FUNC_6 (unsigned int) ;

int
FUNC_7(const char *VAR_13, int VAR_14)
{
 char VAR_15[VAR_1];
 sigset_t VAR_16, VAR_17;
 int VAR_18;

 (void)FUNC_3(&VAR_16);
 (void)FUNC_2(&VAR_16, VAR_3);
 (void)FUNC_2(&VAR_16, VAR_4);
 (void)FUNC_2(&VAR_16, VAR_5);
 (void)FUNC_2(&VAR_16, VAR_6);
 (void)FUNC_2(&VAR_16, VAR_8);
 (void)FUNC_2(&VAR_16, VAR_9);
 (void)FUNC_2(&VAR_16, VAR_7);
 (void)FUNC_2(&VAR_16, VAR_2);

 (void)FUNC_5(VAR_15, sizeof(VAR_15), "%s.lock", VAR_13);

 VAR_18 = -1;
 for (;;) {
  FUNC_1();
  (void)FUNC_4(VAR_10, &VAR_16, &VAR_17);
  if (FUNC_0(VAR_15) != -1) {
   (void)FUNC_4(VAR_11, &VAR_17, ((void*)0));
   VAR_18 = 0;
   break;
  }
  else
   (void)FUNC_4(VAR_11, &VAR_17, ((void*)0));

  if (VAR_12 != VAR_0)
   break;

  if (VAR_14) {
   if (VAR_14 == -1) {
    VAR_12 = VAR_0;
    break;
   }
   (void)FUNC_6((unsigned int)VAR_14 * 1000);
  }
 }
 FUNC_1();
 return VAR_18;
}

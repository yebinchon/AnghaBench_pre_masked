
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int fds ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_14 ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int VAR_15 ;

int
FUNC_10(int VAR_16, char *VAR_17[])
{
 const char *VAR_18 = "/dev/null";
 int VAR_19, VAR_20, VAR_21[10];
 struct sigaction VAR_22;

 if (VAR_16 > 1) {
  (void) FUNC_3(VAR_15, "Usage: %s\n", VAR_17[0]);
  return (VAR_0);
 }

 VAR_22.sa_handler = VAR_14;
 VAR_22.sa_flags = 0;

 (void) FUNC_8(&VAR_22.sa_mask);
 (void) FUNC_7(VAR_12, &VAR_22, ((void*)0));

 FUNC_1(0);
 VAR_20 = 0;





 if (FUNC_9(VAR_13, 1) == 0) {
  for (;;)
   (void) FUNC_4(-1, 0, ((void*)0));
 }





 VAR_21[VAR_20++] = FUNC_6(VAR_18, VAR_6);
 VAR_21[VAR_20++] = FUNC_6(VAR_18, VAR_10);
 VAR_21[VAR_20++] = FUNC_6(VAR_18, VAR_7);

 VAR_21[VAR_20++] = FUNC_6(VAR_18, VAR_7 | VAR_1 | VAR_2 |
     VAR_4 | VAR_5 | VAR_3 | VAR_8 | VAR_9 | 0666);

 VAR_21[VAR_20++] = FUNC_6(VAR_18, VAR_7);
 (void) FUNC_5(VAR_21[VAR_20 - 1], 123, VAR_11);






 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
  (void) FUNC_4(VAR_21[VAR_19], 0, ((void*)0));

 FUNC_0(VAR_20 <= sizeof (VAR_21) / sizeof (VAR_21[0]));
 FUNC_2(0);
}

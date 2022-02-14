
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; int rlim_cur; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ FUNC_3 (int ,struct rlimit*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,struct rlimit*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;

int
FUNC_10(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8 = 0;
 struct rlimit VAR_9;

 while ((VAR_7 = FUNC_2(VAR_5, VAR_6, "bfp")) != -1) {
  switch (VAR_7) {
  case 'b':
   VAR_2++;
   break;
  case 'p':
   VAR_4++;
   break;
  case 'f':
   VAR_1++;
   break;
  default:
   FUNC_8();
  }
 }
 if (VAR_5 - VAR_3 < 1)
  FUNC_8();

 FUNC_7();


 if (FUNC_3(VAR_0, &VAR_9) == 0) {
  VAR_9.rlim_cur = VAR_9.rlim_max;
  if (FUNC_6(VAR_0, &VAR_9) < 0)
   FUNC_9("can't get resource limit to max data size");
 } else
  FUNC_9("can't get resource limit for data size");

 for (VAR_7 = VAR_3; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_5 - VAR_3 != 1)
   (void)FUNC_5(VAR_6[VAR_7]);
  VAR_8 += FUNC_1(VAR_6[VAR_7]);
  if (VAR_7 < VAR_5 - 1)
   FUNC_4('\n');
 }

 FUNC_0(VAR_8);
}

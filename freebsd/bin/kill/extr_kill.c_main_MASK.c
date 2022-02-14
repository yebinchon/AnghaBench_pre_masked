
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (long,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 void* FUNC_11 (char*,char**,int) ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;

int
FUNC_15(int VAR_4, char *VAR_5[])
{
 long VAR_6;
 pid_t VAR_7;
 int VAR_8, VAR_9, VAR_10;
 char *VAR_11;

 if (VAR_4 < 2)
  FUNC_12();

 VAR_9 = VAR_0;

 VAR_4--, VAR_5++;
 if (!FUNC_9(*VAR_5, "-l")) {
  VAR_4--, VAR_5++;
  if (VAR_4 > 1)
   FUNC_12();
  if (VAR_4 == 1) {
   if (!FUNC_2(**VAR_5))
    FUNC_12();
   VAR_9 = FUNC_11(*VAR_5, &VAR_11, 10);
   if (!**VAR_5 || *VAR_11)
    FUNC_0(2, "illegal signal number: %s", *VAR_5);
   if (VAR_9 >= 128)
    VAR_9 -= 128;
   if (VAR_9 <= 0 || VAR_9 >= VAR_2)
    FUNC_5(*VAR_5);
   FUNC_6("%s\n", VAR_3[VAR_9]);
   return (0);
  }
  FUNC_7(VAR_1);
  return (0);
 }

 if (!FUNC_9(*VAR_5, "-s")) {
  VAR_4--, VAR_5++;
  if (VAR_4 < 1) {
   FUNC_14("option requires an argument -- s");
   FUNC_12();
  }
  if (FUNC_9(*VAR_5, "0")) {
   if ((VAR_9 = FUNC_8(*VAR_5)) < 0)
    FUNC_5(*VAR_5);
  } else
   VAR_9 = 0;
  VAR_4--, VAR_5++;
 } else if (**VAR_5 == '-' && *(*VAR_5 + 1) != '-') {
  ++*VAR_5;
  if (FUNC_1(**VAR_5)) {
   if ((VAR_9 = FUNC_8(*VAR_5)) < 0)
    FUNC_5(*VAR_5);
  } else if (FUNC_2(**VAR_5)) {
   VAR_9 = FUNC_11(*VAR_5, &VAR_11, 10);
   if (!**VAR_5 || *VAR_11)
    FUNC_0(2, "illegal signal number: %s", *VAR_5);
   if (VAR_9 < 0)
    FUNC_5(*VAR_5);
  } else
   FUNC_5(*VAR_5);
  VAR_4--, VAR_5++;
 }

 if (VAR_4 > 0 && FUNC_10(*VAR_5, "--", 2) == 0)
  VAR_4--, VAR_5++;

 if (VAR_4 == 0)
  FUNC_12();

 for (VAR_8 = 0; VAR_4; VAR_4--, VAR_5++) {





  {
   VAR_6 = FUNC_11(*VAR_5, &VAR_11, 10);

   VAR_7 = (pid_t)VAR_6;
   if (!**VAR_5 || *VAR_11 || VAR_7 != VAR_6)
    FUNC_0(2, "illegal process id: %s", *VAR_5);
   VAR_10 = FUNC_3(VAR_7, VAR_9);
  }
  if (VAR_10 == -1) {
   FUNC_13("%s", *VAR_5);
   VAR_8 = 1;
  }
 }

 return (VAR_8);
}

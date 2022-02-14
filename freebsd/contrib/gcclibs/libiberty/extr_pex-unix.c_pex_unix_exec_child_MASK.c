
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 char** VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char const*,char* const*) ;
 int FUNC_3 (char const*,char* const*) ;
 int FUNC_4 (struct pex_obj*,char const*,char*,int) ;
 int FUNC_5 (int volatile) ;
 int FUNC_6 () ;

__attribute__((used)) static long
FUNC_7 (struct pex_obj *VAR_8, int VAR_9, const char *VAR_10,
       char * const * VAR_11, char * const * VAR_12,
                     int VAR_13, int VAR_14, int VAR_15,
       int VAR_16, const char **VAR_17, int *VAR_18)
{
  pid_t VAR_19;



  volatile int VAR_20;
  volatile int VAR_21;

  VAR_20 = 1;
  VAR_19 = -1;
  for (VAR_21 = 0; VAR_21 < 4; ++VAR_21)
    {
      VAR_19 = FUNC_6 ();
      if (VAR_19 >= 0)
 break;
      FUNC_5 (VAR_20);
      VAR_20 *= 2;
    }

  switch (VAR_19)
    {
    case -1:
      *VAR_18 = VAR_7;
      *VAR_17 = VAR_5;
      return -1;

    case 0:

      if (VAR_13 != VAR_3)
 {
   if (FUNC_1 (VAR_13, VAR_3) < 0)
     FUNC_4 (VAR_8, VAR_10, "dup2", VAR_7);
   if (FUNC_0 (VAR_13) < 0)
     FUNC_4 (VAR_8, VAR_10, "close", VAR_7);
 }
      if (VAR_14 != VAR_4)
 {
   if (FUNC_1 (VAR_14, VAR_4) < 0)
     FUNC_4 (VAR_8, VAR_10, "dup2", VAR_7);
   if (FUNC_0 (VAR_14) < 0)
     FUNC_4 (VAR_8, VAR_10, "close", VAR_7);
 }
      if (VAR_15 != VAR_2)
 {
   if (FUNC_1 (VAR_15, VAR_2) < 0)
     FUNC_4 (VAR_8, VAR_10, "dup2", VAR_7);
   if (FUNC_0 (VAR_15) < 0)
     FUNC_4 (VAR_8, VAR_10, "close", VAR_7);
 }
      if (VAR_16 >= 0)
 {
   if (FUNC_0 (VAR_16) < 0)
     FUNC_4 (VAR_8, VAR_10, "close", VAR_7);
 }
      if ((VAR_9 & VAR_1) != 0)
 {
   if (FUNC_1 (VAR_4, VAR_2) < 0)
     FUNC_4 (VAR_8, VAR_10, "dup2", VAR_7);
 }

      if (VAR_12)
        VAR_6 = (char**) VAR_12;

      if ((VAR_9 & VAR_0) != 0)
 {
   FUNC_3 (VAR_10, VAR_11);
   FUNC_4 (VAR_8, VAR_10, "execvp", VAR_7);
 }
      else
 {
   FUNC_2 (VAR_10, VAR_11);
   FUNC_4 (VAR_8, VAR_10, "execv", VAR_7);
 }


      return -1;

    default:

      if (VAR_13 != VAR_3)
 {
   if (FUNC_0 (VAR_13) < 0)
     {
       *VAR_18 = VAR_7;
       *VAR_17 = "close";
       return -1;
     }
 }
      if (VAR_14 != VAR_4)
 {
   if (FUNC_0 (VAR_14) < 0)
     {
       *VAR_18 = VAR_7;
       *VAR_17 = "close";
       return -1;
     }
 }
      if (VAR_15 != VAR_2)
 {
   if (FUNC_0 (VAR_15) < 0)
     {
       *VAR_18 = VAR_7;
       *VAR_17 = "close";
       return -1;
     }
 }

      return (long) VAR_19;
    }
}

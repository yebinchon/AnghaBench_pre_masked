
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttstate_t ;
typedef int ttreq_t ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int,int,int,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int VAR_6 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13 (ttreq_t VAR_7, int VAR_8, TTRACE_ARG_TYPE VAR_9,
      TTRACE_ARG_TYPE VAR_10, TTRACE_ARG_TYPE VAR_11)
{
  lwpid_t VAR_12;
  int VAR_13;
  ttreq_t VAR_14;
  int VAR_15;
  char VAR_16[100];
  if (VAR_8 == 0)
    {
      VAR_4 = VAR_0;
      return -1;
    }




  if (!FUNC_2 ())
    {




      VAR_4 = VAR_0;
      return -1;
    }




  VAR_12 = FUNC_9 (VAR_8);
  VAR_13 = FUNC_5 (VAR_12);





  if (0 == VAR_13)
    {
      ttstate_t VAR_17;






      if (FUNC_7 (VAR_7))
 {







   VAR_14 = FUNC_8 (VAR_7);
   if (VAR_14 == -1)
     {
       if (! FUNC_11 (VAR_6, VAR_5))
  {






    VAR_13 = FUNC_0 (VAR_6);
    VAR_12 = VAR_8;
  }

       else
  FUNC_4 ("Unable to perform thread operation");
     }

   else
     {



       VAR_13 = VAR_8;
       VAR_12 = 0;
       VAR_7 = VAR_14;
     }
 }

      else
 {


   FUNC_4 ("Thread request with no threads (%s)",
   FUNC_6 (VAR_7));
 }
    }




  if (FUNC_7 (VAR_7))
    {
      VAR_12 = 0;
    }
  VAR_15 = FUNC_3 (VAR_7, VAR_13, VAR_12, VAR_9, VAR_10, VAR_11);
  return VAR_15;
}

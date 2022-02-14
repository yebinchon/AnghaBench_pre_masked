
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int*,int*) ;
 scalar_t__ FUNC_6 (int ,char**,int*,int*) ;
 struct frame_info* FUNC_7 () ;
 int FUNC_8 (struct frame_info*) ;
 struct cleanup* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (char**) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 () ;

__attribute__((used)) static void
FUNC_19 (int VAR_14, int VAR_15, char *VAR_16)
{
  int VAR_17 = 1;
  struct frame_info *VAR_18;
  struct cleanup *VAR_19 = 0;
  int VAR_20 = 0;

  VAR_0;

  if (VAR_16)
    VAR_20 = FUNC_16 (&VAR_16);



  if (VAR_5 && VAR_20 && !FUNC_17 ())
    FUNC_4 ("Asynchronous execution not supported on this target.");



  if (VAR_5 && !VAR_20 && FUNC_17 ())
    {

      FUNC_0 ();
    }

  VAR_17 = VAR_16 ? FUNC_11 (VAR_16) : 1;

  if (!VAR_15 || VAR_14)
    {
      FUNC_3 ();
      if (!VAR_5 || !FUNC_17 ())
 VAR_19 = FUNC_9 (VAR_4, 0 );
      else
        FUNC_10 (VAR_4, 0 );
    }


  if (!VAR_5 || !FUNC_17 ())
    {
      for (; VAR_17 > 0; VAR_17--)
 {
   FUNC_1 ();

   VAR_18 = FUNC_7 ();
   if (!VAR_18)
     FUNC_4 ("No current frame");
   VAR_6 = FUNC_8 (VAR_18);
   VAR_11 = FUNC_14 ();

   if (!VAR_15)
     {
       FUNC_5 (VAR_12, &VAR_10, &VAR_9);
       if (VAR_9 == 0)
  {
    char *VAR_21;
    if (FUNC_6 (VAR_12, &VAR_21, &VAR_10,
      &VAR_9) == 0)
      FUNC_4 ("Cannot find bounds of current function");

    FUNC_18 ();
    FUNC_12 ("Single stepping until exit from function %s, \nwhich has no line number information.\n", VAR_21);


  }
     }
   else
     {

       VAR_10 = VAR_9 = 1;
       if (!VAR_14)



  VAR_8 = VAR_2;
     }

   if (VAR_14)
     VAR_8 = VAR_1;

   VAR_7 = (VAR_17 > 1);
   FUNC_13 ((CORE_ADDR) -1, VAR_3, 1);

   if (!VAR_13)
     break;
 }

      if (!VAR_15 || VAR_14)
 FUNC_2 (VAR_19);
      return;
    }




  else
    {
      if (VAR_5 && FUNC_17 ())
 FUNC_15 (VAR_14, VAR_15, VAR_17);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int to_sections_end; int to_sections; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (char*,char*,char*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_10 (char*) ;
 int VAR_6 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,char*,int,int ,char**) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 () ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_24 (char*) ;

void
FUNC_25 (char *VAR_10, int VAR_11)
{

  FUNC_22 (&VAR_5);



  if (!VAR_10)
    {
      if (VAR_11)
        FUNC_15 ("No executable file now.\n");
    }
  else
    {
      char *VAR_12;
      int VAR_13;

      VAR_13 = FUNC_13 (FUNC_10 ("PATH"), 1, VAR_10,
     VAR_8 ? VAR_2 | VAR_0 : VAR_1 | VAR_0, 0,
       &VAR_12);
      if (VAR_13 < 0)
 FUNC_14 (VAR_10);
      VAR_4 = FUNC_4 (VAR_12, VAR_6, VAR_13);

      if (!VAR_4)
 FUNC_7 ("\"%s\": could not open as an executable file: %s",
        VAR_12, FUNC_3 (FUNC_5 ()));





      VAR_12 = FUNC_24 (VAR_12);
      FUNC_11 (VAR_9, VAR_12);

      if (!FUNC_2 (VAR_4, VAR_3))
 {


   FUNC_8 (0);
   FUNC_7 ("\"%s\": not in executable format: %s",
   VAR_12, FUNC_3 (FUNC_5 ()));
 }
      if (FUNC_6 (VAR_4, &VAR_5.to_sections,
          &VAR_5.to_sections_end))
 {


   FUNC_8 (0);
   FUNC_7 ("\"%s\": can't find the file sections: %s",
   VAR_12, FUNC_3 (FUNC_5 ()));
 }





      FUNC_23 ();

      FUNC_17 (VAR_4);

      FUNC_16 (&VAR_5);


      if (&FUNC_9)
 FUNC_9) (VAR_10);
    }
}

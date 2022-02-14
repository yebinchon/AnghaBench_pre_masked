
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct defsym_list {struct defsym_list* next; int value; int name; } ;
typedef int segT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int VAR_11 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 scalar_t__ VAR_15 ;
 struct defsym_list* VAR_16 ;
 int VAR_17 ;
 int FUNC_15 () ;
 int FUNC_16 (int*,char***) ;
 int FUNC_17 () ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_18 () ;
 int FUNC_19 (struct defsym_list*) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int VAR_25 ;
 int FUNC_27 (int ) ;
 int VAR_26 ;
 int FUNC_28 (int ,int,int,int ) ;
 int FUNC_29 () ;
 char* VAR_27 ;
 int VAR_28 ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int*,char***) ;
 int FUNC_32 (int,char**) ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 scalar_t__ FUNC_35 () ;
 int FUNC_36 (int,char**) ;
 int FUNC_37 (int ,char*) ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_38 (char*,int ) ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 int * FUNC_42 (int ,int ,int ,int *) ;
 int FUNC_43 (int *) ;
 int FUNC_44 () ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 () ;
 int FUNC_48 (int ) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (char*) ;
 int VAR_31 ;

int
FUNC_51 (int VAR_32, char ** VAR_33)
{
  int VAR_34;
  int VAR_35;

  VAR_29 = FUNC_20 ();







  FUNC_11 (VAR_8, VAR_5);
  FUNC_45 (VAR_8);

  if (VAR_15)
    VAR_13 = 64;





  VAR_27 = VAR_33[0];
  FUNC_50 (VAR_27);

  FUNC_16 (&VAR_32, &VAR_33);

  FUNC_3 (VAR_27, 0);





  VAR_28 = "a.out";

  FUNC_23 ();
  FUNC_8 ();
  FUNC_9 (VAR_27);





  FUNC_2 (1);


  FUNC_31 (&VAR_32, &VAR_33);
  FUNC_41 ();
  FUNC_18 ();
  FUNC_39 ();
  FUNC_34 ();
  FUNC_24 ();
  FUNC_17 ();



  FUNC_48 (VAR_14);


  if (VAR_24)
    FUNC_48 (VAR_17);

  VAR_34 = 0;




  FUNC_28 (VAR_21, VAR_22, VAR_34, VAR_26);

  FUNC_2 (1);

  FUNC_30 (VAR_28);
  FUNC_7 (VAR_30 != 0);





  FUNC_26 ();




  while (VAR_16 != ((void*)0))
    {
      symbolS *VAR_36;
      struct defsym_list *VAR_37;

      VAR_36 = FUNC_42 (VAR_16->name, VAR_11, VAR_16->value,
   &VAR_31);




      FUNC_4 (VAR_36);
      FUNC_43 (VAR_36);
      VAR_37 = VAR_16->next;
      FUNC_19 (VAR_16);
      VAR_16 = VAR_37;
    }

  FUNC_2 (1);


  FUNC_32 (VAR_32, VAR_33);

  FUNC_13 (-1);
  FUNC_15 ();



  FUNC_12 ();

  if (FUNC_35 ()
      && (VAR_18 || FUNC_21 () == 0))
    VAR_35 = 1;
  else
    VAR_35 = 0;





  FUNC_40 ();

  if (VAR_35)
    FUNC_47 ();


  FUNC_27 (VAR_25);


  if (VAR_20 && FUNC_22 () > 0 && FUNC_21 () == 0)
    FUNC_6 (FUNC_5("%d warnings, treating warnings as errors"), FUNC_22 ());

  if (FUNC_21 () > 0 && ! VAR_18)
    VAR_35 = 0;

  if (!VAR_35)
    FUNC_46 (VAR_28);

  FUNC_25 ();

  FUNC_0 (VAR_27);



  if (FUNC_21 () > 0)
    FUNC_49 (VAR_0);


  FUNC_33 ();

  FUNC_49 (VAR_1);
}

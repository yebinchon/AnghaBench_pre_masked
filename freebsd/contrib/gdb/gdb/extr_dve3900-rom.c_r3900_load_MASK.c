
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int section_map_func ;
typedef int buffer ;
typedef int bfd ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,...) ;
 int VAR_0 ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;
 int * VAR_3 ;
 char* FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int VAR_6 ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,long) ;
 int FUNC_12 (unsigned char*,int) ;
 int FUNC_13 (unsigned int,int ,int ) ;
 int FUNC_14 (char,char*,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (unsigned char*,long) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static void
FUNC_18 (char *VAR_7, int VAR_8)
{
  bfd *VAR_9;
  unsigned int VAR_10 = 0;
  time_t VAR_11, VAR_12;
  int VAR_13 = 0;
  unsigned char VAR_14[8];



  if (!VAR_2)
    {
      FUNC_10 (VAR_7, VAR_8);
      return;
    }


  if (VAR_7 == ((void*)0) || VAR_7[0] == 0)
    VAR_7 = FUNC_6 (1);
  VAR_9 = FUNC_3 (VAR_7, 0);
  if (!VAR_9)
    FUNC_5 ("Unable to open file %s\n", VAR_7);
  if (FUNC_0 (VAR_9, VAR_0) == 0)
    FUNC_5 ("File is not an object file\n");




  FUNC_9 ("vconsi\r");
  FUNC_7 ();
  FUNC_8 (((void*)0), 0);



  FUNC_9 ("Rm\r");
  FUNC_7 ();
  FUNC_14 ('a', "", 0, 0);


  FUNC_2 ((bfd *) VAR_9, (section_map_func) VAR_1,
    &VAR_13);
  FUNC_16 (&VAR_14[0], (long) VAR_13);
  if (VAR_3)
    FUNC_16 (&VAR_14[4], (long) FUNC_1 (VAR_3));
  else
    FUNC_16 (&VAR_14[4], 0);
  FUNC_12 (VAR_14, sizeof (VAR_14));


  VAR_11 = FUNC_15 (((void*)0));
  FUNC_2 (VAR_9, (section_map_func) VAR_5, &VAR_10);
  VAR_12 = FUNC_15 (((void*)0));



  FUNC_7 ();
  FUNC_14 ('a', "", 0, 0);
  FUNC_8 (((void*)0), 0);
  FUNC_9 ("vconsx\r");
  FUNC_8 (((void*)0), 0);


  FUNC_11 ("Start address 0x%lx\n", (long) FUNC_1 (VAR_9));
  FUNC_13 (VAR_10, VAR_11, VAR_12);


  if (VAR_3)
    FUNC_17 (FUNC_1 (VAR_3));

  VAR_4 = VAR_6;







  FUNC_4 ();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int time_t ;
struct cleanup {int dummy; } ;
typedef scalar_t__ file_ptr ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_17__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_18__ {struct TYPE_18__* next; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,char*,scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_9 (char*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct cleanup*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (char*,char*,...) ;
 TYPE_1__* VAR_6 ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (char*,int) ;
 char* FUNC_18 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_19 (char) ;
 struct cleanup* FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (scalar_t__,int ) ;
 int VAR_11 ;
 int FUNC_22 (int) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*,int ,int ,int ) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (char*) ;
 int VAR_12 ;
 int FUNC_28 (unsigned long,int ,int ) ;
 int FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int ,char*,int) ;
 int FUNC_31 (char*) ;
 scalar_t__ FUNC_32 (char*,char*,int ) ;
 int FUNC_33 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_34 (char*) ;
 int FUNC_35 (int) ;

__attribute__((used)) static void
FUNC_36 (char *VAR_15, int VAR_16)
{
  struct cleanup *VAR_17;
  asection *VAR_18;
  bfd *VAR_19;
  bfd_vma VAR_20;

  char VAR_21[2 + 4 + 4 + 0x1000];
  char *VAR_22;
  int VAR_23;
  int VAR_24;
  time_t VAR_25, VAR_26;
  unsigned long VAR_27;
  int VAR_28 = VAR_13;

  VAR_13 = VAR_12;



  if (!VAR_14)
    {
      FUNC_17 (VAR_15, VAR_16);
      return;
    }


  VAR_21[0] = 'D';
  VAR_21[1] = 'T';
  VAR_23 = 0;
  VAR_24 = 0;
  VAR_22 = ((void*)0);

  while (*VAR_15 != '\000')
    {
      char *VAR_29;

      while (FUNC_19 (*VAR_15))
 VAR_15++;

      VAR_29 = VAR_15;

      while ((*VAR_15 != '\000') && !FUNC_19 (*VAR_15))
 VAR_15++;

      if (*VAR_15 != '\000')
 *VAR_15++ = '\000';

      if (*VAR_29 != '-')
 VAR_22 = VAR_29;
      else if (FUNC_32 (VAR_29, "-quiet", FUNC_31 (VAR_29)) == 0)
 VAR_23 = 1;
      else if (FUNC_32 (VAR_29, "-nostart", FUNC_31 (VAR_29)) == 0)
 VAR_24 = 1;
      else
 FUNC_12 ("unknown option `%s'", VAR_29);
    }

  if (!VAR_22)
    VAR_22 = FUNC_18 (1);

  VAR_19 = FUNC_9 (VAR_22, VAR_9);
  if (VAR_19 == ((void*)0))
    {
      FUNC_24 (VAR_22);
      return;
    }
  VAR_17 = FUNC_20 (VAR_19);

  if (!FUNC_0 (VAR_19, VAR_3))
    FUNC_12 ("\"%s\" is not an object file: %s", VAR_22,
    FUNC_1 (FUNC_2 ()));

  VAR_25 = FUNC_33 (((void*)0));
  VAR_27 = 0;

  FUNC_27 ("mw\r");

  FUNC_13 ("\nOK");

  for (VAR_18 = VAR_19->sections; VAR_18; VAR_18 = VAR_18->next)
    {
      if (FUNC_4 (VAR_19, VAR_18) & VAR_1)
 {
   bfd_vma VAR_30;
   bfd_size_type VAR_31;
   file_ptr VAR_32;

   VAR_30 = FUNC_7 (VAR_19, VAR_18);
   VAR_31 = FUNC_6 (VAR_18);

   if (!VAR_23)
     FUNC_25 ("[Loading section %s at 0x%s (%s bytes)]\n",
        FUNC_5 (VAR_19, VAR_18),
        FUNC_22 (VAR_30),
        FUNC_23 (VAR_31));

   VAR_32 = 0;

   VAR_27 += VAR_31;

   while (VAR_31 > 0)
     {
       int VAR_33;
       static char VAR_34[] = "|/-\\";
       static int VAR_35 = 0;

       VAR_0;

       VAR_33 = FUNC_21 (VAR_31, 0x1000);

       VAR_21[2] = VAR_30 >> 24;
       VAR_21[3] = VAR_30 >> 16;
       VAR_21[4] = VAR_30 >> 8;
       VAR_21[5] = VAR_30;

       VAR_21[6] = VAR_33 >> 24;
       VAR_21[7] = VAR_33 >> 16;
       VAR_21[8] = VAR_33 >> 8;
       VAR_21[9] = VAR_33;

       FUNC_3 (VAR_19, VAR_18, VAR_21 + 10, VAR_32, VAR_33);

       if (FUNC_30 (VAR_4, VAR_21, VAR_33 + 10))
  FUNC_15 (VAR_7,
        "e7000_load: serial_write failed: %s\n",
        FUNC_29 (VAR_5));

       FUNC_13 ("OK");

       if (!VAR_23)
  {
    FUNC_26 ("\r%c", VAR_34[VAR_35++ % 4]);
    FUNC_16 (VAR_8);
  }

       VAR_30 += VAR_33;
       VAR_32 += VAR_33;
       VAR_31 -= VAR_33;
     }
 }
    }

  FUNC_34 ("ED");

  FUNC_14 ();

  VAR_26 = FUNC_33 (((void*)0));



  if (VAR_6)
    FUNC_35 (FUNC_8 (VAR_6));

  VAR_10 = VAR_11;







  FUNC_10 ();

  if (!VAR_24)
    {
      VAR_20 = FUNC_8 (VAR_19);

      if (!VAR_23)
 FUNC_26 ("[Starting %s at 0x%s]\n", VAR_22, FUNC_22 (VAR_20));


    }

  FUNC_28 (VAR_27, VAR_25, VAR_26);

  FUNC_11 (VAR_17);
  VAR_13 = VAR_28;
}

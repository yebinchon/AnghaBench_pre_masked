
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {scalar_t__ has_arg; char* name; } ;
struct TYPE_4__ {char* doc; char shortopt; scalar_t__ control; char* arg; TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (char*) ;
 char** FUNC_1 () ;
 int FUNC_2 (char const**) ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char*,...) ;
 char* VAR_9 ;
 int FUNC_6 (char) ;
 int VAR_10 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  unsigned VAR_11;
  const char **VAR_12, **VAR_13;
  int VAR_14;

  FUNC_5 (FUNC_0("Usage: %s [options] file...\n"), VAR_9);

  FUNC_5 (FUNC_0("Options:\n"));
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
    {
      if (VAR_7[VAR_11].doc != ((void*)0))
 {
   bfd_boolean VAR_15;
   unsigned VAR_16;

   FUNC_5 ("  ");

   VAR_15 = VAR_1;
   VAR_14 = 2;

   VAR_16 = VAR_11;
   do
     {
       if (VAR_7[VAR_16].shortopt != '\0'
    && VAR_7[VAR_16].control != VAR_2)
  {
    FUNC_5 ("%s-%c", VAR_15 ? ", " : "", VAR_7[VAR_16].shortopt);
    VAR_14 += (VAR_15 ? 2 : 0) + 2;
    if (VAR_7[VAR_16].arg != ((void*)0))
      {
        if (VAR_7[VAR_16].opt.has_arg != VAR_8)
   {
     FUNC_5 (" ");
     ++VAR_14;
   }
        FUNC_5 ("%s", FUNC_0(VAR_7[VAR_16].arg));
        VAR_14 += FUNC_7 (FUNC_0(VAR_7[VAR_16].arg));
      }
    VAR_15 = VAR_5;
  }
       ++VAR_16;
     }
   while (VAR_16 < VAR_3 && VAR_7[VAR_16].doc == ((void*)0));

   VAR_16 = VAR_11;
   do
     {
       if (VAR_7[VAR_16].opt.name != ((void*)0)
    && VAR_7[VAR_16].control != VAR_2)
  {
    int VAR_17 =
      (VAR_7[VAR_16].control == VAR_6
       || VAR_7[VAR_16].control == VAR_0);

    FUNC_5 ("%s-%s%s",
     VAR_15 ? ", " : "",
     VAR_17 ? "-" : "",
     VAR_7[VAR_16].opt.name);
    VAR_14 += ((VAR_15 ? 2 : 0)
     + 1
     + (VAR_17 ? 1 : 0)
     + FUNC_7 (VAR_7[VAR_16].opt.name));
    if (VAR_7[VAR_16].arg != ((void*)0))
      {
        FUNC_5 (" %s", FUNC_0(VAR_7[VAR_16].arg));
        VAR_14 += 1 + FUNC_7 (FUNC_0(VAR_7[VAR_16].arg));
      }
    VAR_15 = VAR_5;
  }
       ++VAR_16;
     }
   while (VAR_16 < VAR_3 && VAR_7[VAR_16].doc == ((void*)0));

   if (VAR_14 >= 30)
     {
       FUNC_5 ("\n");
       VAR_14 = 0;
     }

   for (; VAR_14 < 30; VAR_14++)
     FUNC_6 (' ');

   FUNC_5 ("%s\n", FUNC_0(VAR_7[VAR_11].doc));
 }
    }
  FUNC_5 (FUNC_0("  @FILE"));
  for (VAR_14 = FUNC_7 ("  @FILE"); VAR_14 < 30; VAR_14++)
    FUNC_6 (' ');
  FUNC_5 (FUNC_0("Read options from FILE\n"));




  FUNC_5 (FUNC_0("%s: supported targets:"), VAR_9);
  VAR_12 = FUNC_1 ();
  for (VAR_13 = VAR_12; *VAR_13 != ((void*)0); VAR_13++)
    FUNC_5 (" %s", *VAR_13);
  FUNC_2 (VAR_12);
  FUNC_5 ("\n");


  FUNC_5 (FUNC_0("%s: supported emulations: "), VAR_9);
  FUNC_4 (VAR_10);
  FUNC_5 ("\n");


  FUNC_5 (FUNC_0("%s: emulation specific options:\n"), VAR_9);
  FUNC_3 (VAR_10);
  FUNC_5 ("\n");

  if (VAR_4[0])
    FUNC_5 (FUNC_0("Report bugs to %s\n"), VAR_4);
}

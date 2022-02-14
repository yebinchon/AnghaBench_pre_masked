
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef int bfd ;
typedef int asection ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,void*,int ,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct cleanup*) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int ,char*,char*) ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct cleanup* FUNC_19 (int *) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*,int) ;
 int VAR_7 ;
 void* FUNC_22 (int *,int*) ;
 int FUNC_23 (char*,int ) ;

__attribute__((used)) static void
FUNC_24 (char *VAR_8, int VAR_9)
{
  struct cleanup *VAR_10;
  char *VAR_11, VAR_12[40];
  asection *VAR_13 = ((void*)0);
  bfd *VAR_14;
  void *VAR_15 = ((void*)0);
  int VAR_16 = 0;


  if (!VAR_7)
    FUNC_20 ();

  if (VAR_8 && *VAR_8)
    VAR_11 = VAR_8;
  else
    {

      FUNC_21 (VAR_12, "core.%d", FUNC_0 (VAR_5));
      VAR_11 = VAR_12;
    }

  if (VAR_6)
    FUNC_17 (VAR_4,
        "Opening corefile '%s' for output.\n", VAR_11);


  VAR_14 = FUNC_4 (VAR_11, FUNC_14 ());
  if (!VAR_14)
    FUNC_16 ("Failed to open '%s' for output.", VAR_11);


  VAR_10 = FUNC_19 (VAR_14);

  FUNC_6 (VAR_14, VAR_3);
  FUNC_5 (VAR_14, FUNC_12 (), FUNC_13 ());


  VAR_15 = FUNC_22 (VAR_14, &VAR_16);


  if (VAR_15 != ((void*)0) && VAR_16 != 0)
    {
      VAR_13 = FUNC_3 (VAR_14, "note0");
      if (VAR_13 == ((void*)0))
 FUNC_16 ("Failed to create 'note' section for corefile: %s",
        FUNC_1 (FUNC_2 ()));

      FUNC_11 (VAR_14, VAR_13, 0);
      FUNC_9 (VAR_14, VAR_13,
        VAR_1 | VAR_2 | VAR_0);
      FUNC_7 (VAR_14, VAR_13, 0);
      FUNC_10 (VAR_14, VAR_13, VAR_16);
    }


  if (FUNC_18 (VAR_14) == 0)
    FUNC_16 ("gcore: failed to get corefile memory sections from target.");


  if (VAR_15 != ((void*)0) && VAR_16 != 0)
    {
      if (!FUNC_8 (VAR_14, VAR_13, VAR_15, 0, VAR_16))
 FUNC_23 ("writing note section (%s)", FUNC_1 (FUNC_2 ()));
    }


  FUNC_17 (VAR_4, "Saved corefile %s\n", VAR_11);


  FUNC_15 (VAR_10);
  return;
}

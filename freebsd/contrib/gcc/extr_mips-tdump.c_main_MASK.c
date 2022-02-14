
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_13__ {size_t ifd; int asym; } ;
struct TYPE_12__ {scalar_t__ iauxBase; int caux; } ;
struct TYPE_11__ {int ifdMax; int iauxMax; int iextMax; scalar_t__ cbExtOffset; } ;
struct TYPE_10__ {scalar_t__ isym; } ;
typedef int FDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_4__* VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char**,char*,int ,int *) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__,int,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int *,int,int ,TYPE_1__*,size_t,TYPE_4__*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (TYPE_1__*,int,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;

int
FUNC_13 (int VAR_22, char **VAR_23)
{
  int VAR_24, VAR_25;




  while ((VAR_25 = FUNC_4 (VAR_22, VAR_23, "alrsvt", VAR_9, ((void*)0))) != -1)
    switch (VAR_25)
      {
      default: VAR_6++; break;
      case 'a': VAR_18++; break;
      case 'l': VAR_19++; break;
      case 'r': VAR_20++; break;
      case 's': VAR_21++; break;
      case 'v': VAR_15++; break;
      case 'V': VAR_16++; break;
      case 't': VAR_13++; break;

      }

  if (VAR_16)
    {
      FUNC_10 ("mips-tdump (GCC) %s\n", VAR_17);
      FUNC_3 ("Copyright (C) 2006 Free Software Foundation, Inc.\n", VAR_11);
      FUNC_3 ("This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n",

             VAR_11);
      FUNC_0 (0);
    }

  if (VAR_8 != VAR_22 - 1)
    VAR_6++;

  if (VAR_15 || VAR_6)
    {
      FUNC_1 (VAR_10, "mips-tdump (GCC) %s", VAR_17);



      FUNC_2 ('\n', VAR_10);
    }

  if (VAR_6)
    {
      FUNC_1 (VAR_10, "Calling Sequence:\n");
      FUNC_1 (VAR_10, "\t%s [-alrst] <object-or-T-file>\n", VAR_23[0]);
      FUNC_1 (VAR_10, "\n");
      FUNC_1 (VAR_10, "switches:\n");
      FUNC_1 (VAR_10, "\t-a Print out auxiliary table.\n");
      FUNC_1 (VAR_10, "\t-l Print out line numbers.\n");
      FUNC_1 (VAR_10, "\t-r Print out relative file descriptors.\n");
      FUNC_1 (VAR_10, "\t-s Print out the current scopes for an item.\n");
      FUNC_1 (VAR_10, "\t-t Assume there is no global header (ie, a T-file).\n");
      FUNC_1 (VAR_10, "\t-v Print program version.\n");
      return 1;
    }




  VAR_14 = FUNC_5 (VAR_23[VAR_8], VAR_0);
  if (VAR_14 < 0)
    {
      FUNC_6 (VAR_23[VAR_8]);
      return 1;
    }

  FUNC_11 ();




  if (VAR_18)
    {
      long VAR_26;

      if (VAR_12.ifdMax != 0 && VAR_7[0].iauxBase != 0)
 {
   FUNC_10 ("\nGlobal auxiliary entries before first file:\n");
   for (VAR_24 = 0; VAR_24 < VAR_7[0].iauxBase; VAR_24++)
     FUNC_7 (VAR_2[VAR_24], 0, VAR_3[VAR_24]);
 }

      if (VAR_12.ifdMax == 0)
 VAR_26 = 0;
      else
 VAR_26
   = (VAR_7[VAR_12.ifdMax-1].iauxBase
      + VAR_7[VAR_12.ifdMax-1].caux - 1);

      if (VAR_26 < VAR_12.iauxMax-1)
 {
   FUNC_10 ("\nGlobal auxiliary entries after last file:\n");
   for (VAR_24 = VAR_26; VAR_24 < VAR_12.iauxMax; VAR_24++)
     FUNC_7 (VAR_2[VAR_24], VAR_24 - VAR_26, VAR_3[VAR_24]);
 }
    }




  for (VAR_24 = 0; VAR_24 < VAR_12.ifdMax; VAR_24++)
    FUNC_8 (&VAR_7[VAR_24], VAR_24);




  VAR_21 = 0;
  FUNC_10 ("\nThere are %lu external symbols, starting at %lu\n",
   (ulong) VAR_12.iextMax,
   (ulong) VAR_12.cbExtOffset);

  for(VAR_24 = 0; VAR_24 < VAR_12.iextMax; VAR_24++)
    FUNC_9 (&VAR_5[VAR_24].asym, VAR_24, VAR_4,
    VAR_2 + VAR_7[VAR_5[VAR_24].ifd].iauxBase,
    VAR_5[VAR_24].ifd,
    &VAR_7[VAR_5[VAR_24].ifd]);





  if (VAR_18)
    {
      int VAR_27 = 1;

      for (VAR_24 = 0; VAR_24 < VAR_12.iauxMax; VAR_24++)
 {
   if (! VAR_3[VAR_24])
     {
       if (VAR_27)
  {
    FUNC_10 ("\nThe following auxiliary table entries were unused:\n\n");
    VAR_27 = 0;
  }

       FUNC_10 ("    #%-5d %11ld  0x%08lx  %s\n",
        VAR_24,
        (long) VAR_2[VAR_24].isym,
        (long) VAR_2[VAR_24].isym,
        FUNC_12 (VAR_2, VAR_24, (FDR *) 0));
     }
 }
    }

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef char bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int *,char*,int ,int) ;
 int FUNC_8 (int *,int *) ;
 char* FUNC_9 (char*,char*,char const*) ;
 int FUNC_10 (void*,void*) ;
 int FUNC_11 (int ,char*,char*,char const*,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (void*,void*,int,int,int,char*) ;
 int FUNC_15 (int,int,int,char*) ;
 int FUNC_16 () ;
 void* FUNC_17 (void*,int *,int ,int **,long) ;
 int VAR_2 ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_20 (bfd *VAR_3, asymbol **VAR_4, long VAR_5,
       void *VAR_6, bfd_boolean *VAR_7)
{
  static struct
    {
      const char *secname;
      const char *strsecname;
    }
  VAR_8[] =
    {
      { ".stab", ".stabstr" },
      { "LC_SYMTAB.stabs", "LC_SYMTAB.stabstr" },
      { "$GDB_SYMBOLS$", "$GDB_STRINGS$" }
    };
  unsigned int VAR_9;
  void *VAR_10;

  *VAR_7 = VAR_0;
  VAR_10 = ((void*)0);

  for (VAR_9 = 0; VAR_9 < sizeof VAR_8 / sizeof VAR_8[0]; VAR_9++)
    {
      asection *VAR_11, *VAR_12;

      VAR_11 = FUNC_6 (VAR_3, VAR_8[VAR_9].secname);
      VAR_12 = FUNC_6 (VAR_3, VAR_8[VAR_9].strsecname);
      if (VAR_11 != ((void*)0) && VAR_12 != ((void*)0))
 {
   bfd_size_type VAR_13, VAR_14;
   bfd_byte *VAR_15, *VAR_16;
   bfd_byte *VAR_17;
   bfd_size_type VAR_18, VAR_19;

   VAR_13 = FUNC_8 (VAR_3, VAR_11);
   VAR_15 = (bfd_byte *) FUNC_19 (VAR_13);
   if (! FUNC_7 (VAR_3, VAR_11, VAR_15, 0, VAR_13))
     {
       FUNC_11 (VAR_2, "%s: %s: %s\n",
         FUNC_5 (VAR_3), VAR_8[VAR_9].secname,
         FUNC_0 (FUNC_4 ()));
       return VAR_0;
     }

   VAR_14 = FUNC_8 (VAR_3, VAR_12);
   VAR_16 = (bfd_byte *) FUNC_19 (VAR_14);
   if (! FUNC_7 (VAR_3, VAR_12, VAR_16, 0, VAR_14))
     {
       FUNC_11 (VAR_2, "%s: %s: %s\n",
         FUNC_5 (VAR_3), VAR_8[VAR_9].strsecname,
         FUNC_0 (FUNC_4 ()));
       return VAR_0;
     }

   if (VAR_10 == ((void*)0))
     {
       VAR_10 = FUNC_17 (VAR_6, VAR_3, VAR_1, VAR_4, VAR_5);
       if (VAR_10 == ((void*)0))
  return VAR_0;
     }

   *VAR_7 = VAR_1;

   VAR_18 = 0;
   VAR_19 = 0;
   for (VAR_17 = VAR_15; VAR_17 < VAR_15 + VAR_13; VAR_17 += 12)
     {
       unsigned int VAR_20;
       int VAR_21;
       int VAR_22;
       int VAR_23;
       bfd_vma VAR_24;



       VAR_20 = FUNC_2 (VAR_3, VAR_17);
       VAR_21 = FUNC_3 (VAR_3, VAR_17 + 4);
       VAR_22 = FUNC_3 (VAR_3, VAR_17 + 5);
       VAR_23 = FUNC_1 (VAR_3, VAR_17 + 6);
       VAR_24 = FUNC_2 (VAR_3, VAR_17 + 8);

       if (VAR_21 == 0)
  {


    VAR_18 = VAR_19;
    VAR_19 += VAR_24;
  }
       else
  {
    char *VAR_25, *VAR_26;

    VAR_25 = ((void*)0);

    if (VAR_18 + VAR_20 > VAR_14)
      {
        FUNC_11 (VAR_2, "%s: %s: stab entry %ld is corrupt, strx = 0x%x, type = %d\n",
          FUNC_5 (VAR_3), VAR_8[VAR_9].secname,
          (long) (VAR_17 - VAR_15) / 12, VAR_20, VAR_21);
        continue;
      }

    VAR_26 = (char *) VAR_16 + VAR_18 + VAR_20;

    while (VAR_26[FUNC_18 (VAR_26) - 1] == '\\'
    && VAR_17 + 12 < VAR_15 + VAR_13)
      {
        char *VAR_27;

        VAR_17 += 12;
        VAR_27 = VAR_26 + FUNC_18 (VAR_26) - 1;
        *VAR_27 = '\0';
        VAR_26 = FUNC_9 (VAR_26,
      ((char *) VAR_16
       + VAR_18
       + FUNC_2 (VAR_3, VAR_17)),
      (const char *) ((void*)0));




        *VAR_27 = '\\';

        if (VAR_25 != ((void*)0))
   FUNC_12 (VAR_25);
        VAR_25 = VAR_26;
      }

    FUNC_15 (VAR_21, VAR_23, VAR_24, VAR_26);

    if (! FUNC_14 (VAR_6, VAR_10, VAR_21, VAR_23, VAR_24, VAR_26))
      {
        FUNC_16 ();
        FUNC_13 ();
        return VAR_0;
      }




  }
     }

   FUNC_13 ();
   FUNC_12 (VAR_15);




 }
    }

  if (VAR_10 != ((void*)0))
    {
      if (! FUNC_10 (VAR_6, VAR_10))
 return VAR_0;
    }

  return VAR_1;
}

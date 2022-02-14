
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct stat {int dummy; } ;
struct TYPE_3__ {char* name; scalar_t__ text_addr; int struct_version; int bind_mode; int library_version; int text_link_addr; int text_end; int data_start; int bss_start; int data_end; int got_value; int next; scalar_t__ tsd_start_addr; } ;
struct so_list {TYPE_1__ som_solib; scalar_t__ solib_addr; struct so_list* next; int * objfile; } ;
struct minimal_symbol {int dummy; } ;
typedef int asection ;
struct TYPE_4__ {char* name; int objfile_obstack; int obfd; } ;
typedef int LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 char* FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (scalar_t__) ;
 struct minimal_symbol* FUNC_7 (char*,int *,int *) ;
 int FUNC_8 (char*,int ,int) ;
 char* FUNC_9 (char*,unsigned int,int *) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 () ;
 struct so_list* VAR_3 ;
 int FUNC_13 (struct so_list*,char*,int,scalar_t__) ;
 int FUNC_14 (struct so_list*,char*,int,scalar_t__,struct target_ops*) ;
 int FUNC_15 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (char*,struct stat*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_18 (scalar_t__,char*,int) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (int) ;

void
FUNC_21 (char *VAR_7, int VAR_8, struct target_ops *VAR_9, int VAR_10)
{
  struct minimal_symbol *VAR_11;
  struct so_list *VAR_12;
  CORE_ADDR VAR_13;
  asection *VAR_14;
  int VAR_15;
  unsigned int VAR_16;
  char VAR_17[4], *VAR_18;
  int VAR_19 = 0;


  VAR_18 = FUNC_11 (VAR_7 ? VAR_7 : ".");
  if (VAR_18 != ((void*)0))
    {
      FUNC_4 ("Invalid regexp: %s", VAR_18);
    }
  if (VAR_6 == ((void*)0))
    return;


  VAR_14 = FUNC_2 (VAR_6->obfd, "$SHLIB_INFO$");
  if (!VAR_14)
    return;


  if (FUNC_3 (VAR_6->obfd, VAR_14) == 0)
    return;

  VAR_11 = FUNC_7 ("__dld_flags", ((void*)0), ((void*)0));
  if (VAR_11 == ((void*)0))
    {
      FUNC_4 ("Unable to find __dld_flags symbol in object file.\n");
      return;
    }

  VAR_13 = FUNC_0 (VAR_11);

  VAR_15 = FUNC_18 (VAR_13, VAR_17, 4);
  if (VAR_15 != 0)
    {
      FUNC_4 ("Unable to read __dld_flags\n");
      return;
    }
  VAR_16 = FUNC_5 (VAR_17, 4);




  if ((VAR_16 & VAR_0) == 0)
    {
      if (VAR_8)
 FUNC_4 ("__dld_list is not valid according to __dld_flags.\n");
      return;
    }


  if ((VAR_16 & VAR_1) == 0)
    FUNC_19 ("The shared libraries were not privately mapped; setting a\nbreakpoint in a shared library will not work until you rerun the program.\n");

  VAR_11 = FUNC_7 ("__dld_list", ((void*)0), ((void*)0));
  if (!VAR_11)
    {


      VAR_11 = FUNC_7 ("__dld_flags", ((void*)0), ((void*)0));
      if (!VAR_11)
 {
   FUNC_4 ("Unable to find dynamic library list.\n");
   return;
 }
      VAR_13 = FUNC_0 (VAR_11) - 8;
    }
  else
    VAR_13 = FUNC_0 (VAR_11);

  VAR_15 = FUNC_18 (VAR_13, VAR_17, 4);
  if (VAR_15 != 0)
    {
      FUNC_4 ("Unable to find dynamic library list.\n");
      return;
    }

  VAR_13 = FUNC_5 (VAR_17, 4);




  if (VAR_13 == 0)
    goto old_dld;





  VAR_15 = FUNC_18 (VAR_13, VAR_17, 4);
  if (VAR_15 != 0)
    {
      FUNC_4 ("Unable to find dynamic library list.\n");
      return;
    }



  VAR_13 = FUNC_5 (VAR_17, 4);




  VAR_12 = VAR_3;

  while (VAR_12 && VAR_12->next)
    VAR_12 = VAR_12->next;
  while (1)
    {
      CORE_ADDR VAR_20, VAR_21;
      unsigned int VAR_22;
      char *VAR_23;
      struct so_list *VAR_24;
      struct so_list *VAR_25 = VAR_3;
      struct stat VAR_26;
      LONGEST VAR_27;
      int VAR_28;

      if (VAR_13 == 0)
 break;


      VAR_15 = FUNC_18 (VAR_13, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_20 = FUNC_5 (VAR_17, 4);
      VAR_22 = 0;
      while (1)
 {
   FUNC_18 (VAR_20 + VAR_22, VAR_17, 1);
   if (VAR_15 != 0)
     goto err;

   VAR_22++;
   if (*VAR_17 == '\0')
     break;
 }
      VAR_23 = FUNC_1 (VAR_22);
      VAR_15 = FUNC_18 (VAR_20, VAR_23, VAR_22);
      if (VAR_15 != 0)
 goto err;


      while (VAR_25)
 {
   if (!FUNC_17 (VAR_25->som_solib.name, VAR_23))
     break;
   VAR_25 = VAR_25->next;
 }



      VAR_15 = FUNC_16 (VAR_23, &VAR_26);
      if (VAR_15 == -1)
 {
   FUNC_19 ("Can't find file %s referenced in dld_list.", VAR_23);

   VAR_15 = FUNC_18 (VAR_13 + 36, VAR_17, 4);
   if (VAR_15 != 0)
     goto err;

   VAR_13 = (CORE_ADDR) FUNC_5 (VAR_17, 4);
   continue;
 }


      VAR_28 = (FUNC_17 (VAR_23, VAR_6->name) == 0);
      if (VAR_25 || VAR_28)
 {


   VAR_15 = FUNC_18 (VAR_13 + 36, VAR_17, 4);
   if (VAR_15 != 0)
     goto err;

   VAR_13 = (CORE_ADDR) FUNC_5 (VAR_17, 4);


   if (VAR_28 && !VAR_25)
     {
       VAR_27 = FUNC_15 (VAR_23);
       VAR_5 += VAR_27;
     }






   if (VAR_8 && VAR_25 && !VAR_28 && (VAR_25->objfile == ((void*)0)))
     FUNC_14 (VAR_25,
        VAR_23,
        VAR_8,
        VAR_25->som_solib.text_addr,
        VAR_9);

   continue;
 }

      VAR_23 = FUNC_9 (VAR_23, VAR_22 - 1,
      &VAR_6->objfile_obstack);

      VAR_15 = FUNC_18 (VAR_13 + 8, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_21 = FUNC_5 (VAR_17, 4);

      VAR_24 = (struct so_list *) FUNC_20 (sizeof (struct so_list));
      FUNC_8 ((char *) VAR_24, 0, sizeof (struct so_list));
      if (VAR_3 == ((void*)0))
 {
   VAR_3 = VAR_24;
   VAR_12 = VAR_24;
 }
      else
 {
   VAR_12->next = VAR_24;
   VAR_12 = VAR_24;
 }




      VAR_24->solib_addr = VAR_13;
      VAR_24->som_solib.name = VAR_23;
      VAR_15 = FUNC_18 (VAR_13 + 4, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.struct_version = FUNC_5 (VAR_17 + 3, 1);
      VAR_24->som_solib.bind_mode = FUNC_5 (VAR_17 + 2, 1);



      VAR_24->som_solib.library_version = FUNC_5 (VAR_17, 2);
      VAR_24->som_solib.text_addr = VAR_21;





      VAR_15 = FUNC_18 (VAR_13 + 12, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.text_link_addr = FUNC_5 (VAR_17, 4);

      VAR_15 = FUNC_18 (VAR_13 + 16, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.text_end = FUNC_5 (VAR_17, 4);

      VAR_15 = FUNC_18 (VAR_13 + 20, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.data_start = FUNC_5 (VAR_17, 4);

      VAR_15 = FUNC_18 (VAR_13 + 24, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.bss_start = FUNC_5 (VAR_17, 4);

      VAR_15 = FUNC_18 (VAR_13 + 28, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.data_end = FUNC_5 (VAR_17, 4);

      VAR_15 = FUNC_18 (VAR_13 + 32, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;

      VAR_24->som_solib.got_value = FUNC_5 (VAR_17, 4);

      VAR_15 = FUNC_18 (VAR_13 + 36, VAR_17, 4);
      if (VAR_15 != 0)
 goto err;



      VAR_24->som_solib.next =
 FUNC_6 (FUNC_5 (VAR_17, 4));





      VAR_15 = FUNC_18 (VAR_13 + 40, VAR_17, 4);
      VAR_24->som_solib.tsd_start_addr = FUNC_5 (VAR_17, 4);
      if (VAR_15 != 0)
 goto err;



      VAR_15 = FUNC_18 (VAR_24->som_solib.tsd_start_addr, VAR_17, 4);
      VAR_24->som_solib.tsd_start_addr = FUNC_5 (VAR_17, 4);
      if (VAR_15 != 0)
 goto err;
      VAR_13 = (CORE_ADDR) VAR_24->som_solib.next;
      VAR_27 = FUNC_15 (VAR_23);
      VAR_4 =
 !VAR_8 &&
 VAR_2 > 0 &&
 VAR_10 &&
 ((VAR_27 + VAR_5) > (VAR_2 * (LONGEST) (1024 * 1024)));

      if (VAR_4)
 {
   if (!VAR_19)
     FUNC_19 ("Symbols for some libraries have not been loaded, because\ndoing so would exceed the size threshold specified by auto-solib-limit.\nTo manually load symbols, use the 'sharedlibrary' command.\nTo raise the threshold, set auto-solib-limit to a larger value and rerun\nthe program.\n");
   VAR_19 = 1;







   FUNC_13 (VAR_24, VAR_23, VAR_8, VAR_21);
   continue;
 }

      VAR_5 += VAR_27;


      FUNC_14 (VAR_24, VAR_23, VAR_8, VAR_21, VAR_9);
    }







  FUNC_12 ();
  return;

old_dld:
  FUNC_4 ("Debugging dynamic executables loaded via the hpux8 dld.sl is not supported.\n");
  return;

err:
  FUNC_4 ("Error while reading dynamic library list.\n");
  return;
}

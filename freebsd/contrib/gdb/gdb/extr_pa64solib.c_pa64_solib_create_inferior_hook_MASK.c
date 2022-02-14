
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct so_list {struct so_list* next; } ;
struct objfile {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct breakpoint {int dummy; } ;
struct TYPE_9__ {scalar_t__ start_address; } ;
typedef TYPE_1__ bfd ;
typedef int asection ;
struct TYPE_11__ {int dld_flags; int dld_flags_addr; } ;
struct TYPE_10__ {int obfd; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *,char*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (char*,int ) ;
 unsigned int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 struct breakpoint* FUNC_9 (scalar_t__) ;
 TYPE_3__ VAR_3 ;
 int FUNC_10 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct breakpoint*) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 struct so_list* VAR_6 ;
 TYPE_2__* VAR_7 ;
 unsigned int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (struct so_list*) ;

void
FUNC_18 (void)
{
  struct minimal_symbol *VAR_8;
  unsigned int VAR_9, VAR_10;
  asection *VAR_11, *VAR_12;
  char VAR_13[4];
  struct objfile *VAR_14;
  CORE_ADDR VAR_15;



  FUNC_14 ();

  if (VAR_7 == ((void*)0))
    return;


  VAR_11 = FUNC_3 (VAR_7->obfd, ".dynamic");
  if (!VAR_11)
    return;


  if (FUNC_7 (VAR_7->obfd, VAR_11) == 0)
    return;


  if (! FUNC_12 (VAR_11, &VAR_3))
    FUNC_10 ("Unable to read the .dynamic section.");


  VAR_3.dld_flags |= VAR_1;
  VAR_3.dld_flags |= VAR_0;
  VAR_10 = FUNC_15 (VAR_3.dld_flags_addr,
    (char *) &VAR_3.dld_flags,
    sizeof (VAR_3.dld_flags));
  if (VAR_10 != 0)
    FUNC_10 ("Unable to modify dynamic linker flags.");





  VAR_12 = FUNC_3 (VAR_4, ".interp");
  if (VAR_12)
    {
      unsigned int VAR_16;
      char *VAR_17;
      CORE_ADDR VAR_18;
      bfd *VAR_19;
      CORE_ADDR VAR_20 = 0;



      VAR_16 = FUNC_7 (VAR_4, VAR_12);
      VAR_17 = FUNC_0 (VAR_16);
      FUNC_4 (VAR_4, VAR_12,
    VAR_17, 0, VAR_16);
      VAR_19 = FUNC_6 (VAR_17, VAR_5);
      if (VAR_19 == ((void*)0))
 goto get_out;


      if (!FUNC_1 (VAR_19, VAR_2))
 {
   FUNC_16 ("Unable to grok dynamic linker %s as an object file", VAR_17);
   FUNC_2 (VAR_19);
   goto get_out;
 }







      VAR_18 = FUNC_13 () - VAR_19->start_address;
      VAR_20 = FUNC_5 (VAR_19, "__dld_break");
      VAR_20 = VAR_18 + VAR_20 + 4;


      {
 struct breakpoint *VAR_21
   = FUNC_9 (VAR_20);






 FUNC_11 (VAR_21);
      }


      FUNC_2 (VAR_19);
    }

get_out:


  while (VAR_6)
    {
      struct so_list *VAR_22;

      VAR_22 = VAR_6;
      FUNC_17 (VAR_6);
      VAR_6 = VAR_22->next;
    }
  FUNC_8 ();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ private; int next; int forward; int hint; int data; int noname; int constant; int ordinal; int name; int import_name; int internal_name; } ;
typedef TYPE_1__ export_type ;
struct TYPE_14__ {int has_armap; struct TYPE_14__* archive_next; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 TYPE_1__** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (int ,char*) ;
 char* VAR_12 ;
 int FUNC_9 (int ,...) ;
 TYPE_2__* FUNC_10 () ;
 int FUNC_11 (scalar_t__,int ) ;
 TYPE_2__* FUNC_12 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_13 () ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (char*,char*,char*,int) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19 (void)
{
  int VAR_13;
  export_type *VAR_14;
  bfd *VAR_15;
  bfd *VAR_16;
  bfd *VAR_17;
  bfd * VAR_18 = 0;

  FUNC_18 (VAR_12);

  VAR_17 = FUNC_5 (VAR_12, VAR_0);

  if (!VAR_17)

    FUNC_8 (FUNC_0("Can't open .lib file: %s"), VAR_12);


  FUNC_9 (FUNC_0("Creating library file: %s"), VAR_12);

  FUNC_7 (VAR_17, VAR_7);
  VAR_17->has_armap = 1;


  VAR_15 = FUNC_10 ();
  VAR_16 = FUNC_13();

  if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0))
    return;

  for (VAR_13 = 0; (VAR_14 = VAR_8[VAR_13]); VAR_13++)
    {
      bfd *VAR_19;

      if (VAR_14->private)
 continue;
      VAR_19 = FUNC_12 (VAR_14, VAR_13);
      VAR_19->archive_next = VAR_18;
      VAR_18 = VAR_19;
      if (VAR_11)
 {
   export_type VAR_20;

   FUNC_2 (VAR_13 < VAR_1);
   VAR_20.name = FUNC_11 (VAR_11, VAR_14->name);
   VAR_20.internal_name = VAR_14->internal_name;
   VAR_20.import_name = VAR_14->name;
   VAR_20.ordinal = VAR_14->ordinal;
   VAR_20.constant = VAR_14->constant;
   VAR_20.noname = VAR_14->noname;
   VAR_20.private = VAR_14->private;
   VAR_20.data = VAR_14->data;
   VAR_20.hint = VAR_14->hint;
   VAR_20.forward = VAR_14->forward;
   VAR_20.next = VAR_14->next;
   VAR_19 = FUNC_12 (&VAR_20, VAR_13 + VAR_1);
   VAR_19->archive_next = VAR_18;
   VAR_18 = VAR_19;
 }
    }


  VAR_15->archive_next = VAR_18;
  VAR_16->archive_next = VAR_15;
  VAR_18 = VAR_16;

  if (! FUNC_6 (VAR_17, VAR_18))
    FUNC_4 ("bfd_set_archive_head");

  if (! FUNC_3 (VAR_17))
    FUNC_4 (VAR_12);

  while (VAR_18 != ((void*)0))
    {
      bfd *VAR_21 = VAR_18->archive_next;
      FUNC_3 (VAR_18);
      VAR_18 = VAR_21;
    }


  if (VAR_9 == 0)
    {
      FUNC_18 (VAR_2);
      FUNC_18 (VAR_3);
      FUNC_18 (VAR_5);
      FUNC_18 (VAR_6);
    }

  if (VAR_9 < 2)
    {
      char *VAR_22;

      VAR_22 = (char *) FUNC_1 (FUNC_17 (VAR_4) + 10);
      for (VAR_13 = 0; (VAR_14 = VAR_8[VAR_13]); VAR_13++)
 {

          if (VAR_14->private)
     continue;
   FUNC_15 (VAR_22, "%s%05d.o", VAR_4, VAR_13);
   if (FUNC_18 (VAR_22) < 0)

     FUNC_14 (FUNC_0("cannot delete %s: %s"), VAR_22, FUNC_16 (VAR_10));
   if (VAR_11)
     {
       FUNC_15 (VAR_22, "%s%05d.o", VAR_4, VAR_13 + VAR_1);
       if (FUNC_18 (VAR_22) < 0)

  FUNC_14 (FUNC_0("cannot delete %s: %s"), VAR_22, FUNC_16 (VAR_10));
     }
 }
    }

  FUNC_9 (FUNC_0("Created lib file"));
}

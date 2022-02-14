
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct bfd_link_info {int hash; } ;
struct bfd_link_hash_entry {scalar_t__ type; } ;
struct TYPE_17__ {int name; struct TYPE_17__* next; } ;
typedef TYPE_2__ def_file_module ;
struct TYPE_18__ {char* internal_name; scalar_t__ ordinal; scalar_t__ hint; int flag_noname; int flag_data; scalar_t__ name; scalar_t__ flag_constant; scalar_t__ flag_private; } ;
typedef TYPE_3__ def_file_export ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_19__ {int filename; } ;
typedef TYPE_4__ bfd ;
struct TYPE_20__ {int num_imports; TYPE_1__* imports; TYPE_2__* modules; } ;
struct TYPE_16__ {char* internal_name; scalar_t__ ordinal; int data; scalar_t__ name; TYPE_2__* module; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*,int ,struct bfd_link_info*) ;
 int FUNC_3 (TYPE_4__*) ;
 struct bfd_link_hash_entry* FUNC_4 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_5 (char*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 TYPE_6__* VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,char*,...) ;
 size_t FUNC_11 (char*) ;
 char* FUNC_12 (size_t) ;
 char* FUNC_13 (int ) ;

void
FUNC_14 (bfd *VAR_6, struct bfd_link_info *VAR_7)
{
  def_file_module *VAR_8;

  FUNC_9 (FUNC_3 (VAR_6));

  if (!VAR_5)
    return;

  for (VAR_8 = VAR_5->modules; VAR_8; VAR_8 = VAR_8->next)
    {
      int VAR_9, VAR_10;

      VAR_3 = VAR_8->name;
      VAR_4 = FUNC_13 (VAR_8->name);
      for (VAR_9 = 0; VAR_4[VAR_9]; VAR_9++)
 if (!FUNC_0 (VAR_4[VAR_9]))
   VAR_4[VAR_9] = '_';

      VAR_10 = 0;

      for (VAR_9 = 0; VAR_9 < VAR_5->num_imports; VAR_9++)
 if (VAR_5->imports[VAR_9].module == VAR_8)
   {
     def_file_export VAR_11;
     struct bfd_link_hash_entry *VAR_12;
     int VAR_13 = (*VAR_5->imports[VAR_9].internal_name == '@');

     size_t VAR_14 = FUNC_11 (VAR_5->imports[VAR_9].internal_name);
     char *VAR_15 = FUNC_12 (VAR_14 + 2 + 6);
     bfd_boolean VAR_16 = VAR_0;

      if (VAR_13)
       FUNC_10 (VAR_15, "%s",
         VAR_5->imports[VAR_9].internal_name);
     else
       FUNC_10 (VAR_15, "%s%s",FUNC_1 (""),
         VAR_5->imports[VAR_9].internal_name);

     VAR_12 = FUNC_4 (VAR_7->hash, VAR_15,
      VAR_0, VAR_0, VAR_0);



     if (!VAR_12 || (VAR_12 && VAR_12->type != VAR_2))
       {
  if (VAR_13)
    FUNC_10 (VAR_15, "%s%s", "__imp_",
      VAR_5->imports[VAR_9].internal_name);
  else
    FUNC_10 (VAR_15, "%s%s%s", "__imp_", FUNC_1 (""),
      VAR_5->imports[VAR_9].internal_name);

  VAR_12 = FUNC_4 (VAR_7->hash, VAR_15,
          VAR_0, VAR_0, VAR_0);
       }
     else
       VAR_16 = VAR_1;

     FUNC_5 (VAR_15);

     if (VAR_12 && VAR_12->type == VAR_2)
       {
  bfd *VAR_17;

  if (!VAR_10)
    {
      bfd *VAR_18 = FUNC_6 (VAR_6);
      FUNC_2 (VAR_18, VAR_18->filename, VAR_7);
      VAR_10 = 1;
    }
  VAR_11.internal_name = VAR_5->imports[VAR_9].internal_name;
  VAR_11.name = VAR_5->imports[VAR_9].name;
  VAR_11.ordinal = VAR_5->imports[VAR_9].ordinal;
  VAR_11.hint = VAR_11.ordinal >= 0 ? VAR_11.ordinal : 0;
  VAR_11.flag_private = 0;
  VAR_11.flag_constant = 0;
  VAR_11.flag_data = VAR_5->imports[VAR_9].data;
  VAR_11.flag_noname = VAR_11.name ? 0 : 1;
  VAR_17 = FUNC_7 (&VAR_11, VAR_6, (! VAR_11.flag_data) && VAR_16);
  FUNC_2 (VAR_17, VAR_17->filename, VAR_7);
       }
   }
      if (VAR_10)
 {
   bfd *VAR_19 = FUNC_8 (VAR_6);
   FUNC_2 (VAR_19, VAR_19->filename, VAR_7);
 }

      FUNC_5 (VAR_4);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lang_statement_union_type ;
struct TYPE_7__ {int * next; int type; } ;
struct TYPE_8__ {char const* target; char const* filename; char const* local_sym_name; int * next_real_file; void* loaded; int whole_archive; int as_needed; int add_needed; int dynamic; scalar_t__ symbol_count; int * next; int * asymbols; int * the_bfd; void* search_dirs_flag; void* just_syms_flag; void* real; void* is_archive; void* sysrooted; TYPE_1__ header; } ;
typedef TYPE_2__ lang_input_statement_type ;
typedef int lang_input_file_enum_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_9__ {int dynamic_link; } ;


 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* FUNC_1 (char*,char const*,int *) ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int *,int **) ;
 void* VAR_9 ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static lang_input_statement_type *
FUNC_5 (const char *VAR_12,
    lang_input_file_enum_type VAR_13,
    const char *VAR_14,
    bfd_boolean VAR_15)
{
  lang_input_statement_type *VAR_16;

  if (VAR_15)
    VAR_16 = FUNC_3 (VAR_7, VAR_10);
  else
    {
      VAR_16 = FUNC_4 (sizeof (lang_input_statement_type));
      VAR_16->header.type = VAR_8;
      VAR_16->header.next = ((void*)0);
    }

  VAR_6 = VAR_1;
  VAR_16->target = VAR_14;
  VAR_16->sysrooted = VAR_0;

  if (VAR_13 == 131
      && VAR_12[0] == ':' && VAR_12[1] != '\0')
    {
      VAR_13 = 129;
      VAR_12 = VAR_12 + 1;
    }

  switch (VAR_13)
    {
    case 128:
      VAR_16->filename = VAR_12;
      VAR_16->is_archive = VAR_0;
      VAR_16->real = VAR_1;
      VAR_16->local_sym_name = VAR_12;
      VAR_16->just_syms_flag = VAR_1;
      VAR_16->search_dirs_flag = VAR_0;
      break;
    case 133:
      VAR_16->filename = VAR_12;
      VAR_16->is_archive = VAR_0;
      VAR_16->real = VAR_0;
      VAR_16->local_sym_name = VAR_12;
      VAR_16->just_syms_flag = VAR_0;
      VAR_16->search_dirs_flag = VAR_0;
      break;
    case 131:
      VAR_16->is_archive = VAR_1;
      VAR_16->filename = VAR_12;
      VAR_16->real = VAR_1;
      VAR_16->local_sym_name = FUNC_1 ("-l", VAR_12, ((void*)0));
      VAR_16->just_syms_flag = VAR_0;
      VAR_16->search_dirs_flag = VAR_1;
      break;
    case 130:
      VAR_16->filename = VAR_12;
      VAR_16->is_archive = VAR_0;
      VAR_16->real = VAR_0;
      VAR_16->local_sym_name = VAR_12;
      VAR_16->just_syms_flag = VAR_0;
      VAR_16->search_dirs_flag = VAR_1;
      break;
    case 129:
      VAR_16->sysrooted = VAR_9;
      VAR_16->filename = VAR_12;
      VAR_16->is_archive = VAR_0;
      VAR_16->real = VAR_1;
      VAR_16->local_sym_name = VAR_12;
      VAR_16->just_syms_flag = VAR_0;
      VAR_16->search_dirs_flag = VAR_1;
      break;
    case 132:
      VAR_16->filename = VAR_12;
      VAR_16->is_archive = VAR_0;
      VAR_16->real = VAR_1;
      VAR_16->local_sym_name = VAR_12;
      VAR_16->just_syms_flag = VAR_0;
      VAR_16->search_dirs_flag = VAR_0;
      break;
    default:
      FUNC_0 ();
    }
  VAR_16->the_bfd = ((void*)0);
  VAR_16->asymbols = ((void*)0);
  VAR_16->next_real_file = ((void*)0);
  VAR_16->next = ((void*)0);
  VAR_16->symbol_count = 0;
  VAR_16->dynamic = VAR_4.dynamic_link;
  VAR_16->add_needed = VAR_2;
  VAR_16->as_needed = VAR_3;
  VAR_16->whole_archive = VAR_11;
  VAR_16->loaded = VAR_0;
  FUNC_2 (&VAR_5,
    (lang_statement_union_type *) VAR_16,
    &VAR_16->next_real_file);
  return VAR_16;
}

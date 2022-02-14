
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int type; TYPE_5__* exp; int value; TYPE_1__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_3__ lang_data_statement_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_7__ {scalar_t__ node_class; } ;
struct TYPE_9__ {TYPE_2__ type; } ;
struct TYPE_6__ {scalar_t__ vma; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,scalar_t__,int ,char const*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (lang_data_statement_type *VAR_7)
{
  int VAR_8;
  bfd_vma VAR_9;
  bfd_size_type VAR_10;
  const char *VAR_11;

  FUNC_3 ();
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    FUNC_6 ();

  VAR_9 = VAR_7->output_offset;
  if (VAR_7->output_section != ((void*)0))
    VAR_9 += VAR_7->output_section->vma;

  switch (VAR_7->type)
    {
    default:
      FUNC_1 ();
    case 132:
      VAR_10 = VAR_0;
      VAR_11 = "BYTE";
      break;
    case 129:
      VAR_10 = VAR_4;
      VAR_11 = "SHORT";
      break;
    case 131:
      VAR_10 = VAR_1;
      VAR_11 = "LONG";
      break;
    case 130:
      VAR_10 = VAR_2;
      VAR_11 = "QUAD";
      break;
    case 128:
      VAR_10 = VAR_2;
      VAR_11 = "SQUAD";
      break;
    }

  FUNC_4 ("0x%V %W %s 0x%v", VAR_9, VAR_10, VAR_11, VAR_7->value);

  if (VAR_7->exp->type.node_class != VAR_5)
    {
      FUNC_6 ();
      FUNC_2 (VAR_7->exp);
    }

  FUNC_5 ();

  VAR_6 = VAR_9 + FUNC_0 (VAR_10);
}
